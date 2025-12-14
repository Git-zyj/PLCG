/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90578
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))))))) ? (var_4) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [(unsigned char)0] [i_1] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */int) ((unsigned char) -1))) << (((max((arr_3 [i_0]), (((/* implicit */int) (short)32752)))) - (32733))))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                        var_14 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [0U] [4U]);
                        var_15 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32749)) ? (2147483647) : (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */int) ((arr_2 [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_2])))))) : (((int) arr_10 [i_0 + 2] [i_2] [8U] [i_2] [i_0])))), (((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) (short)-32749)))))))));
                        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) ((var_0) != (0))))))));
                        arr_14 [i_0] [i_1] [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) var_3))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        arr_17 [i_4 + 2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_8 [i_2] [i_0 - 3] [i_2] [i_0 - 3])) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_8 [i_0 + 1] [i_4 - 2] [i_0 - 1] [i_0 + 1])) | (((/* implicit */int) arr_1 [i_0]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_4 + 1] [i_4 + 1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 268435455)))))));
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 2]))));
                            var_18 = ((/* implicit */_Bool) var_5);
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 1879048192))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (0) : (var_0))) : ((-(((/* implicit */int) (unsigned char)0))))));
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0])))));
                            arr_23 [i_6] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_21 [i_6] [i_4 + 1] [i_2] [i_1] [i_0 - 1]);
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (short)32752))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((max((arr_12 [i_0 - 1] [i_0]), (arr_12 [i_7] [i_0]))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_0] [i_0])), (arr_18 [i_0] [i_1 - 2] [i_0] [i_4 + 1] [i_7])))) : (max((((/* implicit */int) arr_12 [i_2] [i_0])), (var_0))));
                            var_23 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) (short)32748)) : (((/* implicit */int) var_6))))) + (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7] [i_1] [i_2] [i_1] [(unsigned char)11])) && (((/* implicit */_Bool) arr_2 [i_4 - 2]))))) : (((arr_16 [i_0]) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned char)7] [i_4])) : (-1))))))));
                            arr_29 [i_0 - 2] [i_1] [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) (signed char)-1);
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_1] [i_1 + 1] [i_0 - 3])) : (((/* implicit */int) arr_15 [i_4 + 1] [i_1] [i_1 - 2] [i_0 + 3])))))))));
                        }
                        arr_30 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) arr_3 [i_0]);
                        arr_31 [i_1] [i_0] [i_0] [i_0 - 2] = ((/* implicit */int) arr_11 [i_0] [i_0]);
                        var_25 += ((/* implicit */long long int) (short)(-32767 - 1));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 -= ((/* implicit */int) var_2);
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_11 [i_0] [i_0 - 1]))));
                        var_28 = ((/* implicit */short) ((long long int) ((_Bool) (short)(-32767 - 1))));
                        var_29 ^= (_Bool)0;
                    }
                }
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (short)-32760)))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((3940649673949184LL) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_0] [i_0] [i_0 - 3]))))) : (((/* implicit */long long int) max((2147483647), (((/* implicit */int) arr_1 [i_1]))))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_8)))))))));
    var_32 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 7; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            {
                arr_41 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32765))))) ? (((((/* implicit */_Bool) arr_6 [i_9] [i_9 + 1])) ? (arr_6 [i_9 - 1] [i_9 + 1]) : (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_9 - 1] [i_9] [i_9 + 2] [i_9 - 1])) ? (var_0) : (((((arr_5 [i_9] [i_10] [i_10]) + (2147483647))) << (((arr_4 [i_9] [i_10] [i_9 + 3]) + (5098234983764913998LL))))))))));
                /* LoopSeq 1 */
                for (int i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) var_7);
                        arr_46 [i_12] [i_10] [i_10] [i_9 - 3] &= ((/* implicit */short) (~(((((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */int) arr_7 [(signed char)0] [i_12] [i_12] [i_9])) : (arr_5 [i_9] [7U] [4ULL]))) + (((((/* implicit */_Bool) arr_43 [i_10] [i_12] [i_12])) ? (((/* implicit */int) arr_15 [i_12] [i_10] [i_10] [i_9])) : (((/* implicit */int) (unsigned char)0))))))));
                        arr_47 [(short)0] [i_10] [i_12] [i_9] = ((/* implicit */unsigned int) arr_25 [(unsigned char)7] [(unsigned char)7] [12LL] [i_12] [8ULL]);
                        var_34 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((var_12), (var_12)))), (max((arr_42 [i_10] [i_10] [i_10] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_33 [i_10] [i_10] [i_10] [(_Bool)1])))))), (((/* implicit */unsigned long long int) (signed char)-21))));
                        var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(max((arr_5 [i_9 + 1] [i_11 + 1] [i_12]), (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        arr_50 [i_9] [i_9] [i_9 + 1] [i_9 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)98)) - (((/* implicit */int) var_3))));
                        arr_51 [i_10] [i_10] [i_10] &= ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) min((-16), (((/* implicit */int) arr_39 [i_9 + 3])))))));
                    }
                    arr_52 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) arr_11 [i_9] [i_9])) && (((/* implicit */_Bool) arr_35 [(_Bool)1])))) ? (((/* implicit */int) arr_7 [i_11] [i_9] [i_9] [(unsigned char)13])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9 + 2] [i_10] [i_9] [i_9 - 2]))) >= (arr_21 [i_9] [i_10] [i_10] [i_10] [i_9])))))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_55 [i_9] [i_10] [i_10] [i_10] [i_9] [i_14] = (~(((/* implicit */int) var_10)));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (short)32745)) : (33552384)))), (((arr_0 [i_14]) | (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_9] [i_10] [i_14]))))))))))));
                    }
                }
                /* LoopSeq 1 */
                for (int i_15 = 2; i_15 < 9; i_15 += 3) 
                {
                    arr_58 [i_9] [i_9] [i_9] = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_15] [i_9 + 3]))));
                    var_37 = var_2;
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 9; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_66 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] = ((/* implicit */unsigned int) arr_10 [i_10] [12ULL] [i_10] [i_10] [i_10]);
                                var_38 = ((/* implicit */long long int) arr_5 [(_Bool)0] [i_10] [i_9]);
                                arr_67 [i_9] [i_10] [i_15 - 2] [i_16] = ((/* implicit */signed char) max((max((((28ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32750))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_9 - 3] [i_9] [i_9 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_53 [i_10] [i_15 - 2] [(unsigned short)0] [i_17]))))))), (((/* implicit */unsigned long long int) min(((~(-2147483638))), (((/* implicit */int) var_3)))))));
                                arr_68 [i_9] [i_9] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (signed char)0)), (536870912U))), (min((((/* implicit */unsigned int) (unsigned char)255)), (1040187392U)))));
                            }
                        } 
                    } 
                    var_39 += ((/* implicit */int) (short)32759);
                }
            }
        } 
    } 
}
