/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91337
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_13))));
                            var_18 -= ((/* implicit */short) (unsigned short)29121);
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */long long int) max((var_3), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_6))))))));
                                var_20 ^= ((/* implicit */unsigned short) max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_16 [i_4] [i_3 + 1] [i_2] [i_1] [i_0])));
                                var_21 |= ((/* implicit */signed char) (~(min((((((/* implicit */int) (unsigned short)1920)) & (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_2] [i_1])) != (var_6))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                            {
                                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? ((~(((/* implicit */int) (!(arr_12 [i_0] [i_3] [i_3] [7ULL])))))) : (((/* implicit */int) arr_0 [i_0] [i_5]))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3 - 1] [i_1] [i_2])) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1]))) >= (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) var_10)))))));
                                arr_19 [i_5] [i_3 - 1] [(unsigned short)13] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_16);
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-2032303744977361759LL) > (((/* implicit */long long int) 650190777U)))))))) ? (var_6) : ((~(((/* implicit */int) min((var_10), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (arr_8 [i_0] [i_2])));
                                var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_6] [i_6]))))) >= ((~(((/* implicit */int) arr_16 [i_3 + 1] [i_1] [i_2] [i_6] [i_2]))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                            {
                                var_27 = min((((/* implicit */unsigned long long int) max((arr_8 [i_3 - 1] [i_3 + 1]), (arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [(signed char)17] [i_3] [20ULL]))) & (arr_5 [i_0] [i_1] [i_2]))))));
                                arr_27 [i_0] [i_0] [i_2] [i_3] [i_7] = ((/* implicit */_Bool) min((min((min((var_2), (((/* implicit */long long int) arr_8 [i_0] [i_0])))), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) ((_Bool) var_4)))));
                                var_28 = ((/* implicit */unsigned short) min((((((var_5) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49036))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [(signed char)16] [i_7] [(signed char)16] [(signed char)5] [14] [(signed char)16])) / (((/* implicit */int) var_4)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                            {
                                var_29 = ((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_0]);
                                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (max((((/* implicit */unsigned long long int) -1LL)), (var_15))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9])))))))));
                                arr_37 [i_10] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_9))) ? (arr_14 [19U] [19U] [i_8] [i_9] [i_9]) : (arr_14 [i_0] [i_1] [i_8] [i_9] [(signed char)20])));
                                var_31 = ((/* implicit */_Bool) max((((unsigned int) var_4)), (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_8] [i_9]))));
                            }
                            var_32 = ((/* implicit */_Bool) arr_8 [i_0] [i_0]);
                            /* LoopSeq 2 */
                            for (long long int i_11 = 4; i_11 < 20; i_11 += 1) 
                            {
                                var_33 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) 650190774U)))))))), (min(((~(var_1))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)115)))))))));
                                var_34 = ((/* implicit */_Bool) min((var_34), (((((long long int) arr_6 [i_11] [i_11] [i_11 - 1])) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9] [i_11] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 2]))))))))));
                                var_35 = ((((arr_23 [i_11 - 3] [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_11] [i_11 - 3] [i_11 - 1]) != (arr_23 [i_11 - 2] [i_11 - 3] [i_11 - 2] [i_11 - 4] [19] [i_11 - 3] [i_11 - 2]))) ? (((((/* implicit */int) var_14)) | (arr_23 [i_11 - 4] [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11 - 2] [i_11 - 4]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (arr_23 [i_11 - 4] [i_11 - 1] [6ULL] [i_11] [i_11] [i_11 - 4] [i_11 - 4]))));
                                var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)127)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                            }
                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                            {
                                arr_43 [i_9] [(unsigned short)8] = ((/* implicit */unsigned short) arr_3 [i_0] [i_12]);
                                var_37 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9] [i_9]))));
                            }
                            var_38 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_25 [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [7ULL] [i_1] [i_1] [i_8] [i_1])))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [(short)4] [i_8] [i_8] [i_9]))))), (arr_15 [i_0] [i_1] [i_0] [i_8] [i_0])))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_9] [(short)8] [(unsigned short)8])) >= (max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) arr_3 [i_0] [i_8]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_40 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 22; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    var_41 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [18LL] [i_15]))) == (((((/* implicit */_Bool) arr_50 [i_13 + 1] [i_15])) ? (arr_44 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_15] [i_13 - 1])))))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((arr_48 [i_13] [i_14]) ? (((/* implicit */unsigned long long int) var_1)) : (var_15))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_52 [i_15] [i_15] [i_14] [(signed char)10])), (arr_49 [i_13] [12])))) || (((/* implicit */_Bool) min((((/* implicit */short) var_16)), (var_14))))))))));
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) < (min((((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) : (var_13))), (((/* implicit */unsigned long long int) var_6)))))))));
}
