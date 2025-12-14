/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80380
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_2 [(unsigned char)4] [i_0 + 1] &= ((/* implicit */short) arr_0 [i_0] [(_Bool)1]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) 1ULL)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((((arr_5 [i_1] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551596ULL)))))));
        arr_8 [(_Bool)1] |= ((/* implicit */unsigned long long int) ((long long int) max((arr_7 [10ULL]), (arr_7 [2U]))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    arr_16 [i_1] [i_1] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */long long int) ((var_13) >> (19ULL)));
                    var_17 = ((/* implicit */unsigned int) (+((~(arr_9 [i_1] [i_1])))));
                    arr_17 [i_2] [i_1] [i_2] [1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))) != (arr_0 [i_4 - 2] [i_2])));
                }
                for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_18 |= ((/* implicit */signed char) arr_14 [i_1] [(_Bool)1] [i_3] [(_Bool)1]);
                    arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551600ULL))));
                    arr_21 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                    var_19 |= ((/* implicit */unsigned long long int) (+(var_9)));
                }
                var_20 = ((/* implicit */unsigned int) ((int) (~(18446744073709551591ULL))));
                arr_22 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [(unsigned char)12] [i_3]);
                var_21 = ((/* implicit */short) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_30 [i_1] [i_2 - 3] [(unsigned short)2] [i_1] [i_7] = ((/* implicit */short) (_Bool)1);
                            var_22 = ((/* implicit */unsigned int) arr_18 [i_7] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 + 1]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        arr_36 [i_1] [i_2] [(short)7] [i_1] = ((/* implicit */int) var_4);
                        arr_37 [i_1] = arr_9 [i_2 - 3] [i_1];
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) -620372247)) != (min((min((arr_25 [i_1] [i_8] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_1))))));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 1) /* same iter space */
        {
            var_24 = arr_23 [i_1] [i_1] [i_1] [i_1] [i_10] [i_10 + 1];
            arr_42 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [(signed char)4] [i_10 - 2] [i_10 - 1]))));
            /* LoopNest 3 */
            for (short i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_18 [i_1] [i_10 - 2] [i_10] [i_10 - 3] [i_11 + 1] [i_12]), ((!(((/* implicit */_Bool) arr_40 [i_13]))))))), (var_14)));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1] [i_10 - 2] [i_1]))));
                        }
                    } 
                } 
            } 
            var_27 |= ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) arr_40 [i_1])), (arr_13 [16U]))));
            arr_52 [i_1] = ((/* implicit */unsigned short) min(((~(((unsigned long long int) -744129331)))), (((/* implicit */unsigned long long int) ((arr_35 [i_1] [i_10 - 1]) == (arr_0 [i_1] [(signed char)2]))))));
        }
        for (unsigned int i_14 = 3; i_14 < 17; i_14 += 1) /* same iter space */
        {
            var_28 += ((/* implicit */_Bool) var_7);
            arr_57 [6] [i_1] &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_15 [(unsigned short)2])) || (((/* implicit */_Bool) arr_29 [i_14] [i_14 + 1] [i_14 - 2] [(short)2] [i_14]))))));
            arr_58 [(short)10] [i_1] = ((/* implicit */short) ((unsigned short) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
        }
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                arr_65 [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) arr_1 [i_16])));
                var_29 = ((/* implicit */signed char) arr_60 [i_15]);
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    arr_69 [i_1] [i_17] [i_16] [i_15] [i_15] [i_1] = ((int) var_8);
                    var_30 = ((/* implicit */long long int) arr_0 [i_15] [i_16]);
                }
                for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_49 [(short)9] [(signed char)13] [i_16] [i_16] [i_18]))));
                    var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21975))));
                }
                arr_74 [i_1] [i_16] [(signed char)0] [i_16] |= ((unsigned int) ((signed char) arr_18 [i_16] [i_16] [i_15] [i_1] [i_1] [i_1]));
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    arr_77 [i_1] [i_15] [i_16] [i_1] = ((/* implicit */short) (_Bool)1);
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1779116423)))))));
                    arr_78 [i_1] [i_15] [i_15] [i_15] [i_1] [i_19] = ((/* implicit */long long int) var_10);
                    var_34 += ((/* implicit */unsigned long long int) var_5);
                }
            }
            /* vectorizable */
            for (unsigned char i_20 = 3; i_20 < 15; i_20 += 1) 
            {
                arr_81 [i_1] [i_20] [i_1] [i_20 - 2] = ((/* implicit */long long int) arr_27 [i_20] [i_1] [i_1]);
                var_35 = arr_25 [i_1] [i_1] [i_1] [i_15] [i_15] [i_1];
                var_36 &= ((/* implicit */_Bool) ((((/* implicit */int) (short)-14655)) ^ ((-2147483647 - 1))));
            }
            for (short i_21 = 2; i_21 < 17; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 18; i_22 += 2) 
                {
                    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        {
                            arr_89 [i_1] [i_15] [i_15] [i_21 - 1] [i_22] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((620372241) == (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_34 [i_1] [i_1] [i_1] [i_1]))))))) != (((/* implicit */int) var_11))));
                            arr_90 [i_1] [i_1] [i_21] [i_1] [i_1] = ((/* implicit */_Bool) arr_75 [i_1] [i_1] [i_15] [i_21 - 2] [i_21 + 1]);
                            var_37 = ((/* implicit */unsigned int) ((_Bool) ((signed char) 8852331372587801645LL)));
                            arr_91 [(_Bool)0] [i_1] [i_22] [i_23] = ((/* implicit */signed char) var_12);
                            arr_92 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_1] [i_1]))));
                        }
                    } 
                } 
                var_38 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (40ULL)));
                var_39 |= ((/* implicit */unsigned int) 15573275577785178474ULL);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_24 = 1; i_24 < 15; i_24 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    for (int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) min((((unsigned int) (-(744129319)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_67 [i_1] [i_15] [i_15] [i_24] [i_24 - 1] [i_24])), ((unsigned char)57)))))))));
                            arr_100 [i_15] [i_24] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (min(((+(var_15))), (arr_83 [i_1])))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned long long int) arr_63 [i_1] [i_15] [i_24 + 2]);
            }
            for (unsigned long long int i_27 = 1; i_27 < 15; i_27 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_28 = 0; i_28 < 18; i_28 += 1) 
                {
                    var_42 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)-41)))));
                    arr_105 [i_1] [i_15] [9] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                    var_43 = ((/* implicit */unsigned long long int) arr_64 [i_1] [i_15] [i_27 + 3]);
                }
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 18; i_29 += 1) 
                {
                    for (signed char i_30 = 0; i_30 < 18; i_30 += 1) 
                    {
                        {
                            var_44 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_109 [(_Bool)0] [(_Bool)0])) && (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 3549477026U))))))));
                            arr_113 [i_1] [i_1] [i_15] = ((/* implicit */unsigned short) arr_11 [i_1]);
                            arr_114 [i_1] [i_15] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                        }
                    } 
                } 
            }
            var_45 = ((/* implicit */int) 3549477018U);
        }
        for (unsigned long long int i_31 = 2; i_31 < 17; i_31 += 3) 
        {
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) 745490270U)) | ((~(18446744073709551615ULL))))))))));
            var_47 = ((/* implicit */unsigned char) max(((+(((unsigned long long int) 18446744073709551596ULL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(21U)))))))));
            var_48 += ((long long int) (~((~(((/* implicit */int) var_12))))));
        }
    }
    var_49 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58352))) | (4294967262U)));
    var_50 &= ((/* implicit */long long int) (((~((-(18446744073709551588ULL))))) <= (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (short)24959))))))));
}
