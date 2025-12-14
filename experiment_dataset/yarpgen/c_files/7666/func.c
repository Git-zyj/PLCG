/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7666
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_2 [i_0])))) && (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_12)))) || (((/* implicit */_Bool) (-(0LL)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = 1788786973;
                            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 3])) << (((var_7) - (699436250277317024LL)))));
                            var_21 = ((/* implicit */int) var_18);
                            arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_6 [i_3 + 2])) : (((/* implicit */int) arr_6 [i_3 + 1]))));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_2 + 1] [i_3 + 1] [i_5] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_5] [i_5]))));
                            arr_18 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] |= arr_7 [i_3 + 1] [i_0];
                            var_22 *= ((/* implicit */signed char) (-(-9223372036854775801LL)));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (arr_2 [i_1 + 2]) : (arr_7 [i_2 + 2] [i_1 - 1]))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1LL) : (19LL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)64592))))) : (3LL)));
                        var_25 |= ((/* implicit */long long int) (((((-(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)943))) > (0LL))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_26 ^= ((/* implicit */unsigned short) 2251799813685248ULL);
                        arr_25 [12] [i_1 + 3] [i_7] [i_7] = ((/* implicit */int) var_8);
                        arr_26 [i_0] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 3932160))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)6]))) : ((-(arr_16 [i_2 + 1] [(unsigned short)13] [i_2] [(unsigned short)3] [i_2])))));
                    }
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 9223372036854775807LL))));
                    var_28 -= ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) 4703090373136785680LL);
    }
    var_30 -= ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))), (var_18)));
    var_31 = ((/* implicit */int) var_17);
}
