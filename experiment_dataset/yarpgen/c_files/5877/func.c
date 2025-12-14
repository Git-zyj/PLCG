/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5877
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */unsigned long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_12 *= (~((~((~(arr_9 [i_0 + 1] [i_1] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [13U] [i_1] [i_1])) ? (((((/* implicit */unsigned long long int) 1544259193U)) * (1101882887916944815ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [(_Bool)1] [i_1] [7U]))))) || (((/* implicit */_Bool) 11135502879460269167ULL)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((644785453U), (73672264U)));
}
