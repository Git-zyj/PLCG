/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56210
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
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
            var_15 ^= ((/* implicit */unsigned char) (((~(arr_2 [i_0] [i_1] [i_1]))) == (arr_2 [9LL] [9LL] [i_1])));
            var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (((unsigned long long int) var_11))));
        }
        var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 2129218008)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (max((arr_2 [i_0 - 3] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0])))))));
        var_18 = ((/* implicit */long long int) 3583184826U);
    }
    for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 24; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) (-((+(((((/* implicit */_Bool) 1134907106097364992LL)) ? (3229398686U) : (1764228856U)))))));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                    }
                } 
            } 
        } 
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) -1735808765))) < (min((((/* implicit */unsigned long long int) -1735808765)), (((unsigned long long int) arr_7 [i_2] [i_2]))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(signed char)22] [(signed char)22])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */long long int) var_5)) : (var_6))))))));
        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])) * (((/* implicit */int) var_0)))) / (var_7)));
    }
    for (signed char i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [10LL])) ^ (var_7)))) != (((arr_11 [i_6 - 1] [i_6] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) > ((+(arr_5 [i_6 + 1] [i_6 + 2])))));
        arr_18 [i_6] = ((/* implicit */unsigned int) (+(1578677432)));
    }
    for (signed char i_7 = 1; i_7 < 14; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                {
                    arr_26 [i_8] [i_8] [i_8] |= ((/* implicit */long long int) arr_8 [i_7] [i_9]);
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (min((((/* implicit */long long int) -1578677432)), (-7877889683483554478LL))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (((long long int) arr_22 [i_7 + 1])))))))));
                    var_25 = ((/* implicit */long long int) -1735808765);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            var_26 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_7])))));
            arr_30 [14ULL] [i_7 + 1] [i_7 + 1] &= ((/* implicit */unsigned int) ((unsigned char) 2274422995382061460LL));
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 14; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        arr_37 [i_7] [i_7] [i_7] [i_10 + 1] [i_11 - 1] [i_7] = ((/* implicit */int) ((unsigned char) min((4294967295U), (((/* implicit */unsigned int) arr_25 [i_7] [i_7 + 2] [i_10 + 2] [i_11 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            arr_40 [i_7] [i_10] [i_10] [i_10] [15] = ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) 3763988380705946555LL)) ? (arr_24 [i_7] [i_7] [i_12] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_11 + 1] [i_10 - 1]) != (arr_15 [i_7 + 2] [i_7])))))));
                            arr_41 [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) var_3)) > (var_9)))), ((-(arr_6 [i_7] [i_10 - 1])))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            arr_45 [i_7] = ((/* implicit */signed char) arr_5 [i_7 - 1] [i_7 - 1]);
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_14] [i_14] [i_14] [i_14])) ? (arr_17 [i_7] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7 + 1])))))))));
        }
        /* vectorizable */
        for (long long int i_15 = 1; i_15 < 14; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_16 = 2; i_16 < 12; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    {
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_15 + 2]))));
                        var_29 = ((/* implicit */long long int) ((var_2) > (((/* implicit */int) (signed char)15))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                for (int i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_6))))))));
                        var_31 = ((/* implicit */unsigned char) ((arr_4 [i_7]) / (((/* implicit */long long int) -610406997))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_20 = 1; i_20 < 13; i_20 += 3) 
                        {
                            arr_66 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */long long int) ((int) 3862828918U))) : (-5034283526782393227LL)));
                            arr_67 [i_7 + 2] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((-1) <= (var_1))) ? (((((/* implicit */_Bool) var_12)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_19 [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (-3973748238666170779LL))))));
                        }
                        for (int i_21 = 2; i_21 < 14; i_21 += 3) /* same iter space */
                        {
                            arr_70 [i_7 + 2] [i_7 + 2] [i_18] [i_7] = ((/* implicit */signed char) ((arr_6 [i_21] [i_7 + 2]) == (arr_49 [i_7] [i_7 + 2] [i_7])));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_19])) ? (arr_35 [i_7 + 2]) : (((/* implicit */unsigned long long int) -5445241068557968809LL))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(var_7)))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_58 [i_7] [i_15 - 1] [i_19] [i_7]) : (((/* implicit */unsigned int) 142219450))))));
                            var_34 |= ((/* implicit */unsigned long long int) var_12);
                            arr_71 [i_7] [i_19] = ((/* implicit */unsigned int) arr_24 [i_7 - 1] [i_18] [i_15 - 1] [i_7 - 1]);
                        }
                        for (int i_22 = 2; i_22 < 14; i_22 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) -1);
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (~(arr_11 [i_7 + 1] [i_15 + 2] [i_22 + 2]))))));
                            var_37 = ((/* implicit */int) ((arr_60 [i_7 - 1] [i_15 - 1] [i_15] [i_7 - 1]) < (((/* implicit */unsigned long long int) ((var_7) ^ (arr_20 [i_22] [i_19]))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_23 = 3; i_23 < 15; i_23 += 2) /* same iter space */
            {
                var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)123)) : (var_5)))) ? (arr_52 [i_7] [i_7] [i_23 - 3] [i_15] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                arr_77 [i_7] = ((long long int) ((-5445241068557968831LL) / (((/* implicit */long long int) var_12))));
            }
            for (unsigned char i_24 = 3; i_24 < 15; i_24 += 2) /* same iter space */
            {
                arr_81 [i_7] [i_15 + 1] [i_15] [i_15] = ((/* implicit */unsigned int) ((signed char) (signed char)116));
                arr_82 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) arr_79 [i_24 - 2] [i_24 - 2] [i_7] [13ULL])) : (var_9)))) ? (((/* implicit */unsigned long long int) arr_56 [i_7] [i_15] [i_24])) : (arr_59 [i_15 - 1] [i_15 - 1])));
            }
            for (int i_25 = 1; i_25 < 12; i_25 += 1) 
            {
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_65 [i_15] [i_15] [i_15] [i_15 + 2] [i_15] [i_15] [i_15 - 1])))))));
                var_40 = ((/* implicit */int) (((-(arr_58 [i_7] [i_15] [i_15] [i_25]))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
            }
            for (unsigned long long int i_26 = 2; i_26 < 12; i_26 += 4) 
            {
                var_41 = ((/* implicit */int) max((var_41), (arr_7 [i_26] [i_26])));
                var_42 = ((/* implicit */long long int) min((var_42), ((-(((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (-5477080246113721504LL) : (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_7] [i_26] [i_7] [i_7 - 1] [i_7])))))))));
            }
        }
        for (int i_27 = 2; i_27 < 15; i_27 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_28 = 2; i_28 < 15; i_28 += 2) 
            {
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 16; i_29 += 4) 
                {
                    for (int i_30 = 0; i_30 < 16; i_30 += 1) 
                    {
                        {
                            var_43 += ((/* implicit */int) (unsigned char)255);
                            arr_98 [i_28 - 1] [i_28 + 1] [i_28 + 1] [i_28] [i_29] [i_28] [i_28] |= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) == (-6886491515428434603LL))));
                            var_44 = (((!(((/* implicit */_Bool) arr_96 [i_28 - 1] [i_28 - 1] [i_7 + 1] [i_27 - 1] [i_28 - 1])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_68 [4]), (((/* implicit */unsigned char) (signed char)-29)))))) > ((+(6666378393599361000LL)))))) : (var_12));
                            arr_99 [i_7] [7] [i_29] [i_7] [i_30] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_9), ((~(var_4)))))) ? (((/* implicit */int) ((unsigned char) 8687988513196193564LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1477319569)))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned char) (+(0U)));
            }
            for (unsigned char i_31 = 0; i_31 < 16; i_31 += 3) 
            {
                var_46 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8601860512654192519LL)) ? (((/* implicit */long long int) var_8)) : (var_4))) < (((/* implicit */long long int) arr_22 [i_7 + 2]))));
                var_47 = ((/* implicit */int) max(((+(arr_27 [i_7 - 1] [i_27 - 2] [i_27 + 1]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_57 [i_7] [i_27] [i_7])) ? (arr_32 [i_7] [i_27] [i_31]) : (((/* implicit */long long int) arr_85 [i_7] [i_27] [i_31])))) <= (((/* implicit */long long int) ((3434945168U) / (((/* implicit */unsigned int) arr_51 [i_7] [i_7] [i_27 + 1] [i_7]))))))))));
                /* LoopNest 2 */
                for (signed char i_32 = 2; i_32 < 12; i_32 += 3) 
                {
                    for (long long int i_33 = 0; i_33 < 16; i_33 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (!(((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) var_3)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) (signed char)-26))))))))))));
                            arr_106 [i_7 + 1] [i_27] [i_31] [i_32] [i_7] = ((/* implicit */unsigned long long int) ((((long long int) arr_54 [i_7] [0] [i_32] [i_32])) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_86 [i_27] [i_7] [i_33])) ? (((/* implicit */int) var_0)) : (arr_51 [i_7] [i_7] [i_32] [i_7]))))))));
                        }
                    } 
                } 
                var_49 = ((((/* implicit */_Bool) (-(arr_32 [i_7] [i_7 + 2] [i_27 - 2])))) ? (((((/* implicit */_Bool) arr_32 [i_7] [i_7 + 2] [i_27 - 2])) ? (arr_32 [i_7] [i_7 + 2] [i_27 - 2]) : (arr_32 [i_7] [i_7 + 2] [i_27 - 2]))) : (((((/* implicit */_Bool) arr_32 [i_7] [i_7 + 2] [i_27 - 2])) ? (arr_32 [i_7] [i_7 + 2] [i_27 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))));
            }
            /* LoopNest 2 */
            for (long long int i_34 = 0; i_34 < 16; i_34 += 1) 
            {
                for (unsigned int i_35 = 1; i_35 < 15; i_35 += 3) 
                {
                    {
                        var_50 = ((/* implicit */int) ((((/* implicit */long long int) (+(var_12)))) ^ (min((((/* implicit */long long int) var_5)), (arr_84 [i_7 + 1])))));
                        arr_111 [(signed char)4] [i_27 + 1] [i_35] [i_35] |= ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
            arr_112 [10] [i_27] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)29)))))));
            arr_113 [i_7] [i_7] = ((/* implicit */long long int) 3126547973U);
        }
        arr_114 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7] [i_7 + 1])) ? (arr_58 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 2]) : (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) arr_58 [i_7] [i_7 - 1] [i_7 + 2] [i_7 + 1])) ? (arr_58 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1]) : (((/* implicit */unsigned int) arr_5 [i_7 - 1] [i_7 - 1])))) : (arr_58 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 2])));
        arr_115 [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_90 [i_7] [i_7 + 2] [i_7] [i_7])) ? (((/* implicit */long long int) 1477319561)) : (var_9))) < (((/* implicit */long long int) max((((/* implicit */int) arr_90 [i_7] [i_7 + 2] [i_7] [i_7])), (1477319561))))));
        var_51 = ((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 2]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_36 = 0; i_36 < 14; i_36 += 3) 
    {
        for (int i_37 = 0; i_37 < 14; i_37 += 3) 
        {
            {
                var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) var_0))));
                var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) (+(arr_58 [4LL] [i_37] [i_37] [i_37]))))));
                arr_123 [i_36] [i_36] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_36] [i_36]), (arr_8 [i_36] [i_37])))) ? (((((/* implicit */_Bool) -1477319569)) ? (((/* implicit */int) arr_8 [i_36] [i_37])) : (((/* implicit */int) arr_8 [i_37] [i_37])))) : (((((/* implicit */_Bool) arr_8 [i_36] [i_37])) ? (259052604) : (((/* implicit */int) arr_8 [i_36] [i_36]))))));
                arr_124 [4ULL] [i_36] = (((+((+(-5449127053867279098LL))))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_5 [i_37] [i_36])) ^ (arr_57 [15ULL] [i_36] [i_36])))));
            }
        } 
    } 
    var_54 = min((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) * (0LL))), (var_9));
    /* LoopSeq 1 */
    for (int i_38 = 1; i_38 < 10; i_38 += 2) 
    {
        var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((long long int) min((arr_107 [2U]), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))))));
        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)4))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1478610736)) <= (var_8)))), (((((/* implicit */unsigned long long int) arr_126 [i_38 - 1])) ^ (arr_35 [i_38]))))))))));
        var_57 |= ((/* implicit */unsigned int) 2707073846985525428LL);
    }
}
