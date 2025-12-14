/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65970
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
    var_14 = var_1;
    var_15 = ((/* implicit */_Bool) var_3);
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_9))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) max((min((var_4), (var_8))), (((/* implicit */unsigned int) min((var_12), (var_13))))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_10), (var_11)))), (max((((/* implicit */unsigned int) var_12)), (var_4)))));
            }
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                arr_13 [(short)4] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((max((var_7), (((/* implicit */unsigned long long int) var_8)))), (max((var_0), (((/* implicit */unsigned long long int) var_3))))));
                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_4)), (min((min((var_7), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_4))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((max((max((var_7), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (var_4)))))), (((/* implicit */unsigned long long int) var_9)))))));
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_10))))), (max((((/* implicit */unsigned long long int) var_12)), (var_0)))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_21 ^= ((/* implicit */signed char) var_4);
                        var_22 &= ((/* implicit */signed char) var_6);
                        var_23 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (var_9)))), (min((((/* implicit */long long int) var_9)), (max((var_3), (((/* implicit */long long int) var_11))))))));
                    }
                    var_24 ^= ((/* implicit */unsigned long long int) var_13);
                    arr_19 [i_0] [i_1] [i_0] = min((((/* implicit */short) var_1)), (max((var_2), (((/* implicit */short) var_12)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (var_8)))), (max((((/* implicit */unsigned long long int) var_4)), (var_0))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((var_11), (((/* implicit */unsigned char) var_5)))), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_5)), (var_1))))));
                        arr_23 [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_5)), (var_0))), (var_0)));
                        var_26 = ((/* implicit */signed char) var_0);
                        var_27 = ((/* implicit */short) var_1);
                    }
                    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned char) var_1)), (var_10))), (((/* implicit */unsigned char) min((var_5), (var_12))))));
                        var_29 = ((/* implicit */unsigned int) var_3);
                        var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) 0U))))));
                        arr_27 [i_4] [i_0] [i_4] [i_0] [i_7] = ((/* implicit */unsigned int) min((var_3), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (var_8))))));
                        arr_28 [i_0] [i_0] [i_3] [i_0] [i_7 + 4] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */short) var_10)), (var_2)))), (max((4294967295U), (((/* implicit */unsigned int) (short)-12190))))));
                    }
                }
                for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_5)), (var_2)))), (max((var_0), (var_7)))));
                    var_31 += var_7;
                    var_32 *= var_8;
                    var_33 = ((/* implicit */unsigned short) max((min((var_0), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) var_13)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_36 [14LL] [14LL] [i_3 - 1] [i_8] [i_1] &= ((/* implicit */unsigned int) min((max((var_7), (var_7))), (((/* implicit */unsigned long long int) var_11))));
                        arr_37 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_11)), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_42 [i_0] [i_3] [i_8] = ((/* implicit */signed char) var_13);
                        var_34 = ((/* implicit */unsigned int) max((var_34), (var_4)));
                        var_35 = min((((/* implicit */unsigned long long int) var_8)), (var_7));
                    }
                    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) var_9);
                        arr_45 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) var_13)), (var_9)))));
                        var_37 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min((var_13), (var_13)))), (min((((/* implicit */long long int) var_2)), (var_3))))), (max((var_3), (((/* implicit */long long int) var_11))))));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) max((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_6))))), (min((var_3), (((/* implicit */long long int) var_1)))))))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_39 ^= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_6)), (var_4))), (((/* implicit */unsigned int) var_12))));
                var_40 = max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_11))))), (var_7));
            }
            var_41 = ((/* implicit */_Bool) var_11);
            arr_49 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (var_9)));
        }
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_6), (var_13)))), (var_9)));
            var_43 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_13)), (var_10)))), (max((var_7), (((/* implicit */unsigned long long int) var_13))))));
        }
        var_44 = ((/* implicit */short) max((max((var_0), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_2))));
    }
    var_45 = var_6;
}
