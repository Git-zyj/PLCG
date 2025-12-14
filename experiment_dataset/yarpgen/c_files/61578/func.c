/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61578
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
    var_19 |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) arr_4 [i_2] [(unsigned char)15]);
                    arr_10 [i_1] [i_0] [i_1] [i_2] |= (~(222917268U));
                    var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0]))))) ? (min((((/* implicit */unsigned long long int) 2667461186U)), (8284266827104532959ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */signed char) var_13)))))))), (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((_Bool) ((long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [18U])) ? (min((arr_11 [i_3 - 1] [i_1] [i_2]), (((/* implicit */unsigned int) var_15)))) : (((((/* implicit */_Bool) var_18)) ? (arr_11 [i_3 - 1] [i_3 - 1] [i_2]) : (arr_11 [i_3 - 1] [i_1] [i_2])))));
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) - (((127U) | (746675163U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
}
