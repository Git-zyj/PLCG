/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75253
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) 233175138U)) ? (-5183214309305557089LL) : (((/* implicit */long long int) 2890412554U)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) < (1404554741U)))))))))));
    var_11 &= ((/* implicit */_Bool) ((6675203125280920982LL) + (((/* implicit */long long int) ((/* implicit */int) max((var_7), (var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0] [i_4] = ((/* implicit */unsigned char) arr_0 [i_0]);
                                arr_15 [i_0] [i_0] [i_2 + 2] [i_3] [i_2 + 2] = ((/* implicit */_Bool) var_7);
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (signed char)-71))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1])) * ((+(((/* implicit */int) arr_10 [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : ((~(arr_9 [i_2 - 1] [i_1 + 1] [i_2 - 1] [4LL] [i_4])))))));
                                var_14 = 2890412554U;
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) 2890412555U);
}
