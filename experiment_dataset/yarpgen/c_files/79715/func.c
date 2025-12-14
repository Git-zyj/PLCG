/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79715
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */int) 3676396478U);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 4620789638176190276ULL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [0] |= (unsigned char)146;
        var_18 &= ((/* implicit */short) arr_1 [(short)8]);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_2 + 3] [i_2 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_1 + 2] [i_2 + 1] [i_2 - 3]))));
                    /* LoopSeq 4 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2])) || (((/* implicit */_Bool) 4620789638176190276ULL)));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)91)) ? (arr_8 [i_1] [i_0] [i_3] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1 - 1])))));
                            arr_14 [i_3] [i_0] [1LL] [1LL] [1LL] [i_0] = var_11;
                            arr_15 [i_0] = ((/* implicit */signed char) (_Bool)0);
                            var_22 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-117)) ? (5642277258319978223ULL) : (((/* implicit */unsigned long long int) arr_3 [(unsigned short)6] [i_1 - 1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15442981175815131052ULL))))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((_Bool) 3676396485U));
                            arr_19 [6U] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)72))));
                        }
                        arr_20 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_8);
                    }
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) var_12);
                        arr_25 [(unsigned short)10] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 730172864U))));
                        var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)127))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_24 [i_0] [i_1]);
                        arr_30 [i_0] [i_2 - 3] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        arr_34 [i_8] [i_0] = ((/* implicit */_Bool) var_0);
                        var_25 = ((/* implicit */int) (signed char)-67);
                        var_26 = var_8;
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_0 [i_1 + 1] [i_2 - 1])));
                        var_28 &= (~((+(0))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_29 -= var_13;
                        arr_37 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)146);
                        arr_38 [i_1] [i_0] [i_2 + 2] = ((/* implicit */signed char) arr_28 [i_9] [i_2 - 3] [i_2] [i_1] [i_0]);
                        var_30 -= ((/* implicit */short) 1073741824);
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            arr_41 [i_0] [i_0] [i_1] [10U] [i_9] [i_10] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_9] [i_2 - 1] [i_1] [i_9])) <= (((/* implicit */int) var_7))));
                            var_31 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)5354))));
                            arr_42 [i_0] [i_1 - 1] [i_0] = ((/* implicit */long long int) -269635033);
                            arr_43 [i_0] [6U] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_0] [(short)11] [i_1 - 1] [i_2] [i_2 - 3])) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_2))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 ^= ((/* implicit */short) arr_24 [i_1 + 2] [i_2 - 1]);
                            var_33 *= ((/* implicit */unsigned long long int) var_3);
                            arr_46 [i_0] [i_11] = ((/* implicit */int) arr_24 [i_0] [i_0]);
                            arr_47 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) 4294967295U))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (13825954435533361361ULL)))));
                        }
                    }
                    arr_48 [i_0] = ((/* implicit */signed char) (-(4294967276U)));
                }
            } 
        } 
    }
}
