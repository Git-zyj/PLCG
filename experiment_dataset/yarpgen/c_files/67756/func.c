/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67756
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_11))) ? (max((((/* implicit */long long int) arr_1 [i_0])), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50)))));
        var_19 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_20 = ((/* implicit */int) arr_3 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (max((((/* implicit */short) arr_5 [i_1])), (((short) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (var_13)))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(var_3)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (14271217530537925662ULL)))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 |= ((/* implicit */int) arr_7 [2] [i_2]);
            var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1])))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_24 -= ((/* implicit */int) -1LL);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                arr_16 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (var_0)))) % (var_2)))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */short) max(((~(4175526543171625954ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1650717885)) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1])) : (438003891))))));
                var_25 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned char)4])) : (arr_10 [i_1] [i_4] [i_3 - 1]))));
            }
            var_26 += ((/* implicit */_Bool) (~((~(((/* implicit */int) var_1))))));
            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((arr_10 [i_1] [i_3] [i_3]) | (((/* implicit */unsigned long long int) arr_9 [i_1] [(short)0])))) : (((((/* implicit */_Bool) arr_3 [i_3] [(unsigned short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4175526543171625964ULL))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [6] [6])), (var_7))))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_14))));
        }
        var_29 = ((/* implicit */int) arr_9 [i_1] [(signed char)10]);
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            {
                arr_23 [i_6] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_22 [i_6 - 1] [i_6 + 1])))), (var_5)));
                var_30 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_8), (var_8)))), ((~(((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */long long int) arr_18 [i_6] [i_5]))))))));
                /* LoopSeq 4 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_6] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (~(arr_21 [i_7])))), (var_14)))));
                    arr_28 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_5 - 2])) ? (((((/* implicit */_Bool) var_9)) ? (arr_21 [i_7]) : (((/* implicit */int) arr_25 [i_7 - 1] [i_7 - 1])))) : (((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~(arr_24 [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                arr_35 [i_5] [i_9] = ((((/* implicit */_Bool) ((short) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7]))))))) ? (((/* implicit */unsigned int) var_17)) : (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)8190))))))))));
                                arr_36 [i_5] [(_Bool)1] [i_5 + 1] [i_5] [i_9] [i_5] [i_5] = ((/* implicit */_Bool) ((((_Bool) arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7 - 1] [i_7] [i_7 - 1] [i_7]))) : (((arr_26 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))) : (2339334823181825433LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_31 += ((/* implicit */short) (signed char)3);
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(arr_29 [i_10] [i_7]))))));
                                var_33 &= ((/* implicit */int) max((((/* implicit */long long int) arr_26 [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_10])), (((long long int) arr_38 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1]))));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_5] = ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        arr_48 [i_5] [i_5 - 1] [i_5] [i_5] [i_5] |= ((/* implicit */int) (((~(14271217530537925679ULL))) >= (((/* implicit */unsigned long long int) arr_31 [i_5 + 1] [i_6 + 2] [i_6] [i_6] [i_13]))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 19; i_14 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32752))) / (arr_41 [i_14] [i_6 + 2] [i_5 - 1] [(_Bool)1] [i_5] [i_5 - 2] [i_5])));
                            var_35 = ((/* implicit */unsigned short) arr_40 [i_5] [i_5 + 1] [i_5]);
                        }
                        arr_51 [i_13] [i_12] [i_6] [i_13] = ((/* implicit */signed char) var_8);
                        var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_5 - 1] [i_5 - 1] [i_6 + 2] [i_6 + 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (4175526543171625933ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32746))))))));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [i_5] [8ULL] [i_5] [i_5] [i_5]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_38 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (max((((/* implicit */long long int) var_2)), (arr_46 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6 + 1])))));
                            arr_59 [6ULL] [6ULL] [i_12] [i_12] [i_12] [i_12] [i_12] = 125829120U;
                        }
                        arr_60 [i_12] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_5 - 1] [i_5 + 1] [i_6 - 1] [i_6 + 2] [i_6 + 1]))))) : (((((/* implicit */_Bool) arr_43 [i_15] [i_5 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15] [i_12] [i_6 - 1] [i_5 + 1])))))));
                        /* LoopSeq 2 */
                        for (int i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
                        {
                            arr_64 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_25 [i_5 - 2] [i_6 + 2])), (arr_42 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) / ((+(((/* implicit */int) var_6))))));
                            arr_65 [i_6] [i_6] [i_12] [i_15] = ((/* implicit */unsigned short) arr_56 [i_5] [i_6 + 2] [i_12] [i_15] [i_17]);
                            arr_66 [i_5 - 2] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_58 [i_6] [i_15])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097151U)) ? (arr_30 [i_5] [i_6] [i_6] [i_12] [i_6] [i_17]) : (((/* implicit */unsigned long long int) var_16))))) ? (max((((/* implicit */long long int) var_9)), (arr_41 [i_17] [i_5] [i_12] [i_6 - 1] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)32768))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_17] [(unsigned short)17] [(short)21] [i_5])))));
                        }
                        for (int i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */_Bool) var_9);
                            arr_70 [i_5] [i_5] [i_6] [i_5] [i_15] [i_18] |= ((/* implicit */_Bool) var_12);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_5 + 1] [i_5])) ? (((/* implicit */long long int) var_0)) : (arr_46 [i_19] [i_19] [i_5 + 1] [i_5 + 1]))) <= ((+(arr_46 [i_5 - 2] [i_6 + 1] [i_5 - 2] [i_5]))))))));
                            var_41 -= ((/* implicit */_Bool) ((arr_39 [i_5] [i_6 + 1]) ? (((((/* implicit */int) arr_39 [i_5] [i_6 + 1])) << (((/* implicit */int) arr_39 [i_5] [i_6 + 1])))) : (((/* implicit */int) max((arr_39 [i_5] [i_6 + 1]), (arr_39 [i_5] [i_6 + 1]))))));
                        }
                    }
                    for (int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        var_42 = ((/* implicit */short) (_Bool)1);
                        var_43 += ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                        var_44 = ((/* implicit */unsigned int) arr_30 [i_5] [i_5] [i_6] [i_12] [i_20] [i_20]);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_21 = 2; i_21 < 18; i_21 += 1) 
                    {
                        arr_78 [i_21] [i_6] [i_6] [i_6 - 1] = ((/* implicit */long long int) arr_61 [i_5] [i_5] [i_5] [i_21 + 3] [i_12]);
                        var_45 = ((/* implicit */_Bool) (short)-18207);
                    }
                }
                for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (unsigned long long int i_24 = 1; i_24 < 20; i_24 += 2) 
                        {
                            {
                                var_46 = ((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_10))));
                                arr_86 [i_23] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) ((signed char) arr_22 [i_22] [i_24 + 1]))) : ((-(((/* implicit */int) (short)-32746))))));
                                arr_87 [i_5] [i_5] [i_23] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_76 [i_23] [i_23])) ? (((((/* implicit */_Bool) arr_54 [i_5 - 2] [(unsigned short)10] [8ULL] [i_5 - 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (signed char)-81))))))), (((/* implicit */unsigned int) (-(max((var_11), (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    arr_88 [i_5 - 2] [i_22] [i_22] &= ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */int) max((arr_44 [i_6] [i_6 - 1]), (arr_44 [i_6] [i_6 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 + 1]))))));
                    var_47 = ((/* implicit */long long int) max((var_47), (arr_74 [i_22] [i_22] [i_22] [i_22] [i_6 + 1])));
                }
                /* vectorizable */
                for (int i_25 = 3; i_25 < 21; i_25 += 1) 
                {
                    arr_91 [i_5 - 1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_5 - 2] [i_6 + 2] [i_6 + 2] [i_25 - 3] [i_25 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_6] [i_6 - 1] [i_6 - 1] [i_25 - 2] [i_25 - 3]))) : (((((/* implicit */_Bool) arr_83 [i_25] [i_5] [i_6 + 1] [i_5] [i_5])) ? (14271217530537925679ULL) : (((/* implicit */unsigned long long int) 1684052826778772072LL))))));
                    arr_92 [i_25 - 1] [i_25] [i_25 - 1] = ((/* implicit */short) ((_Bool) var_4));
                }
            }
        } 
    } 
}
