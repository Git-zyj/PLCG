/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90392
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
    var_18 += ((/* implicit */int) ((unsigned int) 963557988));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) -4);
                            var_20 = ((/* implicit */short) arr_10 [i_0] [i_1] [i_2] [2LL] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
