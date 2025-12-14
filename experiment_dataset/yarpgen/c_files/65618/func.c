/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65618
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((unsigned int) 1554612937014625455LL)) - (((/* implicit */unsigned int) var_8)))))));
    var_19 -= ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) ((int) 2157250656U))), ((-(var_14)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */long long int) var_0);
                var_21 -= ((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 + 2]);
                var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])) - (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)58)), (var_17))))))) ? (var_3) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) - ((-(var_5)))))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_15))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2])) ? ((~(((((/* implicit */long long int) var_0)) - (var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_2] [7ULL] [6LL] [1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2] [i_3])))))));
                        var_25 ^= ((/* implicit */unsigned int) ((int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_2)))))) : (min((((/* implicit */long long int) (signed char)(-127 - 1))), (var_4))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_1 + 3] [1LL])) : (((/* implicit */int) arr_1 [i_1 + 4] [i_3])))))))));
                    }
                    arr_13 [4ULL] [i_1] [i_2] = (!(((/* implicit */_Bool) ((unsigned char) 3308797845534803210ULL))));
                }
                for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        for (long long int i_6 = 4; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_20 [i_0 + 1] [1ULL] [i_4] [i_5])), (((((/* implicit */_Bool) -674130996)) ? (var_15) : (var_14))))), (var_14))))));
                                arr_26 [i_0] [(unsigned short)3] [i_4] [i_5] [i_6] = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_6] [5LL] [4ULL]))))) ? (((unsigned long long int) var_10)) : (arr_23 [i_0 - 1] [i_5 - 1] [i_6 + 3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                                arr_27 [i_0] [i_1] [i_6] [i_5] [i_5] = ((short) var_7);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_4 + 2] [(unsigned char)0] [i_4 + 2]))) : (var_16)))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_17)) : (var_8)))), (((((/* implicit */_Bool) var_16)) ? (arr_8 [(short)3]) : (var_16))))), (var_1)));
                                var_30 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((1824851420U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)8] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))))))));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((unsigned long long int) var_16))));
                                var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_0))))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 1; i_9 < 8; i_9 += 4) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_1] [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_9 + 3] [i_9 + 3])) && (((/* implicit */_Bool) arr_28 [i_1] [i_0 + 1] [i_1 + 4] [i_1 - 2] [i_9 + 3] [i_9 + 3])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_10] [i_1] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(1510531571)))) ? (((/* implicit */unsigned long long int) var_13)) : (arr_21 [i_0 - 1] [10U] [i_9 - 1] [i_9])))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) - (((((/* implicit */unsigned long long int) var_3)) - (min((arr_16 [i_11]), (arr_21 [i_0 - 1] [3ULL] [i_0] [i_0]))))))))));
                            var_35 = ((/* implicit */signed char) var_4);
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_9] [(_Bool)1] [i_9] [i_9 - 1] [i_11 - 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9] [i_9 + 3] [i_9] [i_9])))))) ? ((-(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_9] [i_11])))));
                            var_37 = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) : (var_5));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_12))));
                        }
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            arr_45 [(unsigned short)4] [i_10] [i_10] [i_9 + 1] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)36)), ((unsigned short)40597)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) var_0)) & (var_16))) : (((long long int) 575107202U))));
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (~((~(((/* implicit */int) var_2)))))))));
                            arr_46 [3ULL] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [0] [i_1] [i_1 + 2] [i_10])) ? (((/* implicit */int) (unsigned short)29134)) : (((/* implicit */int) arr_39 [(signed char)8] [(unsigned short)4] [3LL] [i_1 + 2] [i_1])))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) var_12))), (1083780927831857207LL)));
                            var_41 = max((min((((/* implicit */unsigned long long int) var_16)), (arr_34 [i_9 + 1] [0LL] [i_1 + 1] [0LL]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_1 + 1] [2U] [i_1 + 1] [i_10] [i_13] [i_13]))))));
                            arr_49 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_47 [i_10] [i_1] [(_Bool)1] [i_1] [i_1] [i_1 + 3] [i_1 - 2]) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18952)) ? (var_5) : (var_16)))) : (((((/* implicit */unsigned long long int) var_14)) * (arr_25 [i_0] [i_1] [i_9 + 1] [i_13] [i_10]))))));
                        }
                        for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) var_8))));
                            arr_52 [i_0 + 2] [i_0 + 2] [i_10] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((arr_32 [i_0 - 1] [i_1 - 1] [i_9 - 1]) - (((/* implicit */int) ((unsigned char) var_14)))))) - (((long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_13))))));
                            var_43 ^= ((/* implicit */unsigned short) var_6);
                        }
                        arr_53 [i_0] [i_0] [i_10] [10LL] = ((/* implicit */short) min((arr_5 [i_0 + 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))));
                    }
                    for (int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        arr_58 [i_15] [i_15] [i_0 + 1] [i_1] [i_1] [i_15] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) (signed char)36))))) - (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (var_0)))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((16274790680013860719ULL), (((/* implicit */unsigned long long int) 4416717153114998714LL))))) ? (min((((/* implicit */long long int) var_17)), (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_12 [i_1] [i_1] [(_Bool)1] [i_1 - 1])))))))));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_63 [i_16] [i_1 + 4] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))) : (var_13)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) (~(var_12)))));
                    arr_64 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) 3552811336U);
                    arr_65 [i_0] [i_1] [i_16] [i_16] = ((/* implicit */unsigned long long int) var_9);
                }
            }
        } 
    } 
}
