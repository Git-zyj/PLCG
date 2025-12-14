/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73751
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_10 += ((/* implicit */unsigned short) (unsigned char)169);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */signed char) arr_3 [i_0]);
            arr_4 [(unsigned short)4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 2456212778082387508ULL))) ? (arr_3 [i_0 + 1]) : (max((2456212778082387483ULL), (((/* implicit */unsigned long long int) (unsigned short)57671))))));
            var_12 -= ((/* implicit */unsigned short) min((arr_1 [(signed char)16]), (((((/* implicit */_Bool) (unsigned char)148)) && (((/* implicit */_Bool) (unsigned short)30555))))));
            arr_5 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)61904)))) ? (arr_3 [i_0 - 1]) : (min((15990531295627164108ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
            var_13 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)86)) ? (279979686U) : (((/* implicit */unsigned int) 890031985)))));
        }
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) max(((unsigned char)170), (((/* implicit */unsigned char) (_Bool)1))))))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)94)) ^ (((/* implicit */int) (unsigned char)130)))));
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        arr_10 [i_2] = arr_8 [i_2 + 1];
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            arr_13 [i_2] [2] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */unsigned short) (unsigned char)86))))) % (((/* implicit */int) ((arr_2 [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29101))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_19 [(unsigned char)13] [(unsigned char)13] [12U] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_8 [i_2])), (arr_0 [i_2] [i_3])))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_18 [i_2 + 1] [i_3] [i_6] [i_3]), (arr_18 [i_2 + 1] [i_6] [i_6] [i_6]))))) / (min((((/* implicit */long long int) (unsigned short)6971)), (6988687439682962860LL)))));
                            arr_24 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5])) + (((/* implicit */int) arr_8 [i_4]))))) ? (max((arr_3 [i_2 + 1]), (((/* implicit */unsigned long long int) (signed char)0)))) : (min((arr_2 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_11 [i_3]))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_14 [i_2] [i_2] [i_2 + 1]))) ? (min((((((/* implicit */_Bool) arr_8 [i_2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_7])) / (((/* implicit */int) arr_20 [(short)5] [i_3] [i_4] [i_4] [i_7] [i_7]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(18446744073709551606ULL))))))))));
                            var_16 &= ((/* implicit */unsigned char) max((arr_14 [i_2] [i_2 - 1] [i_2]), (((/* implicit */unsigned int) min(((short)-20152), (((/* implicit */short) arr_26 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2])))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            arr_32 [i_4] [10] [i_4] [i_5] [i_8] |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)14)) - (774383329)));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_2] [i_2] [i_4] [i_4] [6LL] [i_4])) & (((((/* implicit */int) (_Bool)1)) >> (((18446744073709551615ULL) - (18446744073709551603ULL))))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2104294525)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_17 [i_8 - 1] [12U] [i_3] [i_2])))) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (21U)))), (15371269524453409493ULL)))));
                            arr_33 [i_3] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6406550246768434790LL)))))) != (max((((/* implicit */unsigned long long int) arr_16 [i_8])), (15371269524453409469ULL))))) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [2ULL] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) 1073739776U)) && (((/* implicit */_Bool) 647991032U)))))));
                            var_19 = ((/* implicit */unsigned short) min(((~(var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4383512101800898377ULL)) ? (((/* implicit */int) arr_9 [i_4])) : (1984038595)))) ? (((/* implicit */int) arr_30 [i_2] [i_2] [i_4] [i_2 - 1] [(short)4] [i_5] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_5] [i_3])))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 13; i_9 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_7);
                            var_21 = ((/* implicit */signed char) ((unsigned long long int) ((int) (unsigned short)51754)));
                        }
                    }
                } 
            } 
            var_22 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_2] [i_2])), (arr_3 [i_2 - 1])));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            arr_44 [i_2] [(unsigned char)9] [i_12] = ((((/* implicit */int) arr_38 [i_2 + 1] [i_12] [i_12] [i_12])) + (((((/* implicit */_Bool) arr_38 [i_2 - 1] [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_38 [i_2 - 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_38 [i_2 - 1] [i_2 - 1] [i_3] [(unsigned short)10])))));
                            arr_45 [i_10] [i_10] [i_3] [i_2] = ((/* implicit */short) arr_18 [i_2] [i_2] [(_Bool)1] [i_2]);
                            arr_46 [i_3] [i_11] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(4059672297U)))) < (((unsigned long long int) 1073739777U))))) & (((((/* implicit */int) (_Bool)1)) & (((int) arr_27 [i_2 + 1] [i_3] [i_10] [i_11] [i_10]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            arr_51 [13] [i_3] [i_10] [i_10] [13] [i_14] = arr_41 [(short)11] [i_13] [i_10] [i_13];
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_35 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (arr_35 [i_2] [i_2 + 1] [(signed char)2]))))));
                            arr_52 [i_2] [i_2] [i_14] = ((/* implicit */short) min((((arr_16 [i_10]) | (arr_16 [i_2 + 1]))), ((~(arr_16 [i_13])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    arr_56 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((unsigned int) arr_39 [i_15 + 1] [i_10])), (max((arr_50 [i_2] [i_2 + 1] [i_2 + 1] [i_15 + 1] [i_2]), (arr_50 [i_2] [i_2 - 1] [(_Bool)1] [i_3] [i_3])))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_34 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]))));
                    var_25 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_10]))));
                    var_26 = ((/* implicit */int) min((var_26), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_2] [i_3] [i_15 + 1] [i_15 + 1] [i_10] [i_10]))))), ((-(((/* implicit */int) arr_40 [i_2] [i_3] [i_10] [i_15 + 1] [i_15] [i_2 + 1]))))))));
                }
                for (unsigned char i_16 = 4; i_16 < 10; i_16 += 3) 
                {
                    var_27 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1505279876)) & (17427590606382006595ULL)));
                    arr_59 [i_16] [5] [5] = ((/* implicit */signed char) min((min((arr_15 [i_2] [i_3] [(unsigned char)10] [i_2 + 1]), (arr_15 [i_2] [i_3] [i_10] [i_2 + 1]))), (((/* implicit */unsigned int) max((arr_58 [i_10] [i_16] [i_2]), (((/* implicit */int) arr_31 [i_16] [i_10] [i_16] [i_16] [i_2] [i_2])))))));
                }
            }
            for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) /* same iter space */
            {
                arr_62 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_2 + 1] [i_17] [13U] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (arr_37 [i_2 + 1] [i_3] [i_17] [i_17]))))));
                arr_63 [i_2] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_2] [i_3] [i_17] [3LL] [i_2] [i_2 - 1]))) * ((+(max((((/* implicit */long long int) (unsigned short)0)), (arr_34 [i_3] [i_3] [i_3] [i_3] [i_2] [i_2])))))));
            }
            for (signed char i_18 = 3; i_18 < 11; i_18 += 1) 
            {
                var_28 -= ((/* implicit */unsigned char) (((!(arr_30 [i_2 - 1] [i_3] [i_18] [(_Bool)1] [i_18 + 2] [2] [i_18 + 2]))) ? (3646976255U) : (((/* implicit */unsigned int) (-(arr_37 [i_18 + 3] [11U] [i_18 + 3] [i_18]))))));
                arr_66 [i_3] [i_3] [i_18 + 3] = ((/* implicit */_Bool) (signed char)108);
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)-25828)) != (((/* implicit */int) (unsigned short)32095)))) ? (((((/* implicit */int) (unsigned short)26032)) ^ (((/* implicit */int) (signed char)-33)))) : ((~(((/* implicit */int) ((unsigned char) 4294967284U))))))))));
            }
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                for (signed char i_20 = 1; i_20 < 13; i_20 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((_Bool) min(((signed char)98), (((/* implicit */signed char) (_Bool)1)))));
                        var_31 = ((/* implicit */unsigned long long int) arr_41 [i_19] [i_3] [i_19] [i_19]);
                        var_32 = 14U;
                        arr_72 [i_2] [(unsigned char)12] [i_2] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -234302815)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)156))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-101)) * (((/* implicit */int) var_1))));
            var_34 *= ((/* implicit */unsigned char) arr_61 [6] [i_2] [i_21] [8LL]);
            arr_75 [i_21] [i_21] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_30 [5] [5] [1] [5] [11LL] [i_2] [i_2]) ? (((/* implicit */int) arr_30 [i_2] [i_21] [(_Bool)1] [i_2] [i_2] [i_21] [i_2])) : (arr_48 [i_2] [i_21] [i_21] [i_21] [i_21])))) | (arr_15 [i_2 + 1] [2LL] [i_21] [i_2])));
        }
        for (int i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_36 [i_2] [i_2] [i_22] [10] [i_22] [i_22]) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) arr_65 [i_22] [i_22]))))))))) - (arr_67 [i_2] [i_22])));
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) min((((/* implicit */int) max((arr_27 [i_2 + 1] [i_2 + 1] [i_22] [i_2] [i_2 - 1]), (arr_27 [8LL] [8LL] [i_2] [8LL] [i_2 + 1])))), (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_27 [(unsigned char)11] [i_22] [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_27 [i_2] [i_22] [i_2] [i_2 + 1] [i_2 + 1])))))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 4) 
    {
        for (short i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            for (signed char i_25 = 0; i_25 < 12; i_25 += 3) 
            {
                {
                    arr_87 [i_25] [i_25] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) (signed char)-60))), (max((((/* implicit */int) arr_68 [i_24] [i_24] [0LL])), (((arr_49 [i_25] [i_24] [i_25] [i_23]) ^ (((/* implicit */int) (signed char)-18))))))));
                    arr_88 [i_23] [i_25] [i_25] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) (unsigned short)12796));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_26 = 2; i_26 < 11; i_26 += 3) 
    {
        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        var_38 -= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) (short)3158))))) ? (((/* implicit */int) arr_30 [i_26 + 2] [i_26 + 1] [(unsigned short)2] [(unsigned short)2] [i_26] [(unsigned short)2] [i_26])) : (arr_53 [i_26] [i_26] [i_26] [i_26] [i_26 - 1] [i_26]));
        arr_93 [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_26] [i_26] [4ULL] [i_26] [i_26] [i_26 + 2])) ? (9289089296234464217ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_26] [i_26])))))) ? (((int) 1019153467327545014ULL)) : (((/* implicit */int) arr_31 [i_26 + 1] [4] [i_26 + 1] [i_26] [i_26] [i_26]))));
        arr_94 [(_Bool)1] |= ((/* implicit */short) (-(((/* implicit */int) arr_30 [i_26] [i_26] [i_26 + 1] [i_26] [i_26] [i_26] [i_26]))));
    }
}
