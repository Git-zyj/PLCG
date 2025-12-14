/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75627
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
    var_19 = ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_11)));
    var_20 = ((/* implicit */unsigned int) ((unsigned short) var_4));
    var_21 = ((/* implicit */long long int) var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((unsigned int) ((((/* implicit */int) ((arr_3 [5ULL] [5ULL]) || (((/* implicit */_Bool) arr_1 [i_1]))))) * (((/* implicit */int) arr_3 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_2 [i_0] [i_1]))));
                            var_23 = max((9412834101499823516ULL), (((/* implicit */unsigned long long int) (short)-13269)));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_6 [i_3 - 2] [i_2 + 1] [i_2 + 1]), (arr_6 [i_3 + 1] [i_2 + 2] [i_2 + 2])))), (max((arr_5 [i_1] [i_2] [i_1] [i_1]), (arr_5 [i_1] [i_0] [i_1] [i_1]))))))));
                            arr_10 [i_3 + 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_2] [i_2 + 2] [i_2] [i_3 - 1]));
                            arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 + 1])) < (((/* implicit */int) max((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
