/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98834
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_15))));
    var_18 = ((/* implicit */_Bool) max((var_18), (var_16)));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_11))))) && (var_16)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] &= ((/* implicit */unsigned int) var_16);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_2]))));
                    arr_10 [(short)9] [(short)9] = ((/* implicit */short) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_21 ^= ((/* implicit */short) var_1);
                    var_22 = ((/* implicit */short) var_5);
                    arr_14 [i_3] [i_3] = ((/* implicit */short) arr_13 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
                            {
                                var_23 = ((/* implicit */short) arr_22 [i_4]);
                                arr_23 [i_0] [i_4] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (((((/* implicit */_Bool) 2591986790U)) ? (2591986790U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1])))))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                            {
                                arr_26 [i_7] [i_7] [i_5] [i_7] [i_5] = ((((/* implicit */_Bool) 3668893839U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 - 1] [(short)10] [(short)10])));
                                arr_27 [15U] [15U] [i_5] = arr_22 [i_0];
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((arr_19 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1]) ? (((3489023754U) >> (((2147483647) - (2147483623))))) : ((((_Bool)1) ? (1702980506U) : (805943540U)))))));
                            }
                            arr_28 [6U] [i_5] [9LL] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) ? (arr_20 [i_0] [i_1] [i_4] [3U] [i_1 + 1] [i_4] [i_5]) : (arr_24 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))), (((((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_4] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_12 [16LL] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_18 [i_0] [i_0]), (max((((/* implicit */short) var_7)), (arr_25 [(_Bool)1] [10LL] [i_1 - 1] [i_1] [0LL])))))) ? (((var_11) ? (max((((/* implicit */long long int) (_Bool)1)), (9014630689980131882LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))))) : (((/* implicit */long long int) ((arr_1 [i_0]) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 1])) ? (arr_15 [(short)8]) : (((/* implicit */int) arr_5 [(short)14] [i_1] [i_1 - 1]))))))))));
            }
        } 
    } 
}
