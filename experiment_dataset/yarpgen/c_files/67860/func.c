/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67860
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
    var_18 = ((/* implicit */long long int) var_15);
    var_19 = ((/* implicit */unsigned long long int) 36028797014769664LL);
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((((/* implicit */_Bool) (+(((unsigned long long int) 9029545700141720280ULL))))) ? (((var_11) / (((/* implicit */unsigned long long int) (-(7958550796535465629LL)))))) : (var_10));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_2] [3ULL] [i_3] [i_1] [3ULL] = ((/* implicit */unsigned int) (~(8328042389810681910ULL)));
                                var_22 = ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? ((+(arr_5 [i_1 + 1] [i_2 + 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) arr_2 [i_2])));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_0] [i_3] [i_1] [i_4] = ((((/* implicit */_Bool) ((unsigned long long int) 7958550796535465629LL))) ? (((var_4) % (arr_5 [i_2 + 1] [i_1 - 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1 - 1] [i_2])))))));
                                var_23 ^= ((/* implicit */unsigned int) (~(arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4])));
                                var_24 = arr_11 [i_0] [i_1] [i_2];
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_5])) || ((!(((/* implicit */_Bool) 14072621584181982666ULL))))));
                    var_26 = (~((~((~(var_8))))));
                }
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned long long int) -1LL);
                arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0]);
            }
        } 
    } 
}
