/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67261
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) 70368744177663ULL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) 0))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0])) & ((~(((/* implicit */int) arr_1 [i_0])))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] [i_0] = ((unsigned int) var_17);
                arr_10 [i_1] = ((((/* implicit */int) (short)-28084)) / (((/* implicit */int) (short)32767)));
                arr_11 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned char) arr_1 [i_0]);
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    arr_14 [i_1 - 2] [i_1 - 1] [i_2] [i_1] = ((((/* implicit */long long int) 2147483647)) | (-1593274882549207089LL));
                    arr_15 [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    arr_16 [i_1 + 4] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) (short)7168);
                    var_22 &= ((/* implicit */long long int) (short)-32767);
                }
                arr_17 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 783708549127596042LL)) ? (1593274882549207088LL) : (-1593274882549207089LL)));
            }
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_12 [i_6] [i_6 - 1] [i_6 - 1] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6 - 1] [i_4] [i_0]))));
                            var_24 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (-1593274882549207088LL))));
                            var_25 = ((/* implicit */short) ((unsigned char) ((signed char) -7167707946125988043LL)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)28083)) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1]))));
                            arr_25 [i_5] [i_5] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */unsigned long long int) var_19)) % (var_11)))));
                        }
                    } 
                } 
                arr_26 [i_0] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 - 2]))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_7 + 2] [i_4] [i_0])) ? (((/* implicit */int) var_0)) : (var_3))))));
                            var_28 |= ((/* implicit */short) ((((/* implicit */int) arr_19 [i_8 + 2] [i_7 + 2] [i_7] [i_1 - 3])) / (((/* implicit */int) arr_19 [i_8 + 2] [i_7 + 2] [i_1] [i_1 - 3]))));
                            arr_32 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_0] [i_8 - 1] [i_8])) ? (((/* implicit */int) var_0)) : (arr_30 [i_0] [i_1] [i_4] [i_8 - 1] [i_8 + 4])));
                        }
                    } 
                } 
            }
        }
        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_29 &= ((/* implicit */unsigned int) var_9);
                arr_38 [i_0] [i_10] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_10] [i_0] [i_9] [i_9]))));
                arr_39 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0]) | (arr_2 [i_0])))) && (((((/* implicit */int) var_2)) != (((/* implicit */int) (short)-28084))))));
                arr_40 [i_10] [i_10] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 1073479680U))))), (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_9] [i_10])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)32767))))));
            }
            /* vectorizable */
            for (unsigned int i_11 = 4; i_11 < 18; i_11 += 1) 
            {
                var_30 = arr_6 [i_11];
                arr_43 [i_0] [i_9] [i_11] = var_9;
                arr_44 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 522884420U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14626))) : (2396048102877203009LL)));
                arr_45 [i_11] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                arr_46 [i_11] [i_11] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_13)) : (arr_27 [(short)7] [i_9] [i_9] [i_0])))));
            }
            for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (unsigned int i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        {
                            arr_55 [i_0] [i_0] [i_12] [i_13] [i_13] [i_14 - 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_12] [i_0])))))));
                            arr_56 [i_0] [i_9] [i_12] [i_13] [(short)17] [17U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U)));
                        }
                    } 
                } 
                arr_57 [8LL] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_12] [i_9] [i_12] [i_12]))))) ? (((((((/* implicit */int) arr_24 [i_0] [i_9] [i_12] [i_12] [i_9] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_9] [i_12])) + (59))) - (27))))) : ((~(((/* implicit */int) var_13))))));
                arr_58 [i_0] [i_9] [i_12] &= ((/* implicit */long long int) (short)-1);
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */int) var_18);
                            arr_65 [i_16] [i_0] &= ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_2 [i_16])))), ((!(((/* implicit */_Bool) 0))))));
                            arr_66 [i_16] [i_15] [i_12] [i_9] [i_9] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_48 [i_0]))))), (((((((/* implicit */_Bool) 3199467174052000611LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_16]))))) << (((arr_53 [i_12] [(short)12]) - (1363933800736555148ULL)))))));
                        }
                    } 
                } 
            }
            for (short i_17 = 4; i_17 < 16; i_17 += 4) 
            {
                arr_70 [i_0] [i_9] [(unsigned char)4] [i_17] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_20 [i_17] [i_17 + 2] [i_17] [i_17])) ? (((/* implicit */int) arr_20 [i_17] [i_17 + 1] [i_17] [i_17 - 3])) : (((/* implicit */int) var_14)))), (((/* implicit */int) max((arr_20 [i_17 + 4] [i_17 + 3] [i_17 - 2] [i_17]), (arr_20 [i_17 + 3] [i_17 + 4] [i_17] [i_17]))))));
                arr_71 [i_17] = ((/* implicit */unsigned int) 831030837076391285LL);
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    for (short i_19 = 1; i_19 < 18; i_19 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) (unsigned short)40009);
                            var_33 = ((/* implicit */_Bool) ((-4610796637720579518LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_41 [i_17 - 1] [i_18] [i_19 + 1]) : (((/* implicit */long long int) (+(31))))))))))));
                            var_35 |= ((/* implicit */signed char) 1005706014);
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (unsigned short)50945)) ? (((/* implicit */long long int) 1005706023)) : (arr_50 [(signed char)10] [i_0] [i_9]))))))));
            var_37 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)61824)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) var_13)) ? (-6958361025795397255LL) : (((((/* implicit */_Bool) 31)) ? (var_9) : (arr_52 [i_0] [i_9] [i_9]))))) : (min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_8)))));
            arr_77 [i_0] = ((/* implicit */unsigned long long int) (-((+(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    for (int i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
    {
        arr_80 [i_20] &= ((/* implicit */long long int) max((((((/* implicit */int) arr_6 [i_20])) - (((/* implicit */int) (unsigned short)50929)))), (var_19)));
        arr_81 [i_20] [i_20] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_15)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) * (1350706868866542466ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))));
    }
    /* LoopNest 2 */
    for (short i_21 = 0; i_21 < 15; i_21 += 4) 
    {
        for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 3) 
        {
            {
                var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (short)(-32767 - 1)))));
                /* LoopNest 3 */
                for (short i_23 = 1; i_23 < 14; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        for (unsigned int i_25 = 1; i_25 < 13; i_25 += 2) 
                        {
                            {
                                arr_96 [i_21] [i_21] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) ((_Bool) arr_49 [i_21] [i_22] [i_23] [(unsigned short)4]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_29 [i_24] [i_24] [i_24] [i_24] [8] [i_24]))))));
                                arr_97 [i_24] [i_22] [i_24] [i_22] [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)109))))) ? (((((/* implicit */_Bool) arr_33 [i_23] [i_22])) ? (((/* implicit */int) arr_84 [i_21] [i_21])) : (var_19))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_16)) : (var_19))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
