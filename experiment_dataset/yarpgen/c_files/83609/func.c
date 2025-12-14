/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83609
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
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2 - 2])), (arr_3 [(short)9]))))) / (var_7)))) ^ (((unsigned long long int) min((((/* implicit */unsigned char) arr_8 [(unsigned short)4] [i_2 + 2])), (arr_1 [i_0]))))));
                            arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_2 [i_2])) - (((/* implicit */int) arr_2 [i_0 + 2])))))) ? (36177135U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 2])) : (arr_0 [i_2 - 2]))))));
                        }
                    } 
                } 
                arr_10 [0U] [i_1] = min((arr_6 [i_0] [i_1 - 1] [21]), ((unsigned short)39034));
            }
        } 
    } 
    var_18 |= ((/* implicit */long long int) ((short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9))))))));
}
