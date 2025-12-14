/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93690
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((((/* implicit */_Bool) max(((unsigned char)10), ((unsigned char)233)))) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0])))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(short)11] [i_3 - 3] [i_2] = ((/* implicit */long long int) min((arr_10 [i_1]), (((((/* implicit */_Bool) -9223372036854775794LL)) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 3])))))));
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] [i_1] = (+(arr_1 [i_1 + 4]));
                            arr_13 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */long long int) 1962885715);
                            arr_14 [i_0] [(unsigned char)6] |= ((/* implicit */short) arr_3 [i_0] [i_0]);
                            var_13 = ((/* implicit */unsigned char) (short)0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) (short)16255);
}
