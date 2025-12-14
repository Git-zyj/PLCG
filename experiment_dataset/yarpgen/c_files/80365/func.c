/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80365
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((unsigned char) 1499392104506243139ULL))));
    var_18 = var_13;
    var_19 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) 4294967295U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] = var_0;
                                var_20 = ((/* implicit */long long int) ((unsigned short) 4294967295U));
                                var_21 = ((/* implicit */long long int) var_16);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0]))) : (0U)))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0])))));
        arr_15 [i_0] [i_0] = ((/* implicit */int) (~(var_14)));
    }
    for (long long int i_5 = 3; i_5 < 12; i_5 += 1) 
    {
        var_23 *= ((/* implicit */short) max(((+(((/* implicit */int) max((arr_9 [i_5 - 2] [i_5 - 2] [i_5] [(signed char)4]), ((signed char)108)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)66)))))));
        arr_18 [i_5 - 1] = ((/* implicit */unsigned int) var_11);
        arr_19 [i_5] |= ((/* implicit */long long int) min((var_14), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned char)30)), (1U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (((-(5437070307199394055ULL))) != (((/* implicit */unsigned long long int) 23U))))))));
        var_25 ^= ((/* implicit */int) min(((unsigned char)190), (((/* implicit */unsigned char) (signed char)-38))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7] = (~(((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (var_1))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) min((var_15), (((/* implicit */signed char) arr_24 [i_7]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2147483639))))))))));
    }
}
