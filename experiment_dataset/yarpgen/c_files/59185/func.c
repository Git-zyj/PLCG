/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59185
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_10 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((_Bool) var_3)))) / (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0])))) - (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1759182608470116698LL)))))));
        var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) var_8)), (var_0))))))) ? (min((((((/* implicit */_Bool) 2122821506365717658ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((-1759182608470116698LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (var_2)))) ? (var_6) : (arr_2 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_13 -= ((/* implicit */short) max(((~(arr_2 [(short)5] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (var_4)))) * (((/* implicit */int) var_9)))))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_11 [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min((arr_7 [i_3] [(signed char)8] [i_1]), (var_2)))) ? (((((((/* implicit */int) arr_7 [i_1] [i_1] [i_3])) + (2147483647))) << (((((/* implicit */int) var_5)) - (1))))) : (((((/* implicit */int) (short)-2605)) | (((/* implicit */int) (signed char)50)))))));
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [3LL] = ((/* implicit */long long int) arr_1 [i_1]);
                    var_14 -= ((unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_1)))))));
                    var_15 -= ((/* implicit */_Bool) arr_4 [i_1]);
                }
                for (signed char i_5 = 3; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_5] [i_3] = (~(((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5] [i_5] [11ULL] [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5 - 1]))) : (arr_16 [i_5 - 2] [i_5] [i_5] [i_5]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_22 [i_6] [i_5] [i_5] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                        arr_23 [i_5] [i_6] = ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_5 - 3])) ? (arr_8 [i_1] [i_2] [i_5 + 1]) : (arr_8 [i_1] [i_2 - 1] [i_5 + 2]));
                        var_16 -= ((/* implicit */short) arr_9 [i_1] [i_1] [i_3] [2ULL]);
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) (-(var_6))));
                        arr_26 [i_5] [i_2 - 1] [i_3] [i_2 - 1] [i_7] = ((/* implicit */unsigned long long int) (!(arr_15 [i_1] [i_2 - 1] [(_Bool)1] [i_5] [i_7])));
                        arr_27 [i_1] [i_5] = ((/* implicit */_Bool) arr_12 [i_1] [i_2] [0ULL] [i_5]);
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_30 [i_1] [i_1] [i_3] [i_5 - 1] [i_5] = var_6;
                        arr_31 [i_1] [i_2] [i_3] [i_5] [i_3] = ((((/* implicit */_Bool) max((var_8), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_9 [i_1] [i_1] [i_1] [i_1]));
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) arr_8 [i_8] [i_3] [i_2]))))) | (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_1] [i_2 - 1] [i_3] [i_5 + 2]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-4833)) : (((/* implicit */int) var_4))))))));
                        arr_33 [i_1] [i_1] [2ULL] [i_5] [i_8] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)4833))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_5))));
                    }
                    var_19 = ((/* implicit */short) ((_Bool) (~(arr_9 [i_5] [i_5] [i_5] [i_5 - 2]))));
                }
                for (signed char i_9 = 3; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) max(((signed char)71), (((/* implicit */signed char) var_5))))))))))));
                    arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = min((((/* implicit */signed char) ((_Bool) ((arr_8 [i_9] [(signed char)4] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((signed char) (signed char)(-127 - 1))));
                }
                /* vectorizable */
                for (signed char i_10 = 3; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    arr_39 [i_2] [(short)3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_10 [i_10] [i_3] [(short)7]))))) | (((long long int) var_9))));
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_21 -= ((/* implicit */signed char) ((short) (_Bool)1));
                        var_22 = arr_25 [i_11] [i_10] [i_3] [i_2] [i_1] [i_1];
                        var_23 = ((/* implicit */short) arr_6 [i_2 - 1]);
                    }
                    for (signed char i_12 = 2; i_12 < 11; i_12 += 4) 
                    {
                        arr_44 [i_1] [i_2] [i_3] [i_10 + 1] [i_12] [i_1] = ((/* implicit */short) arr_3 [i_1]);
                        arr_45 [i_1] [(signed char)6] [i_3] [i_3] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_12 - 2]))) > (arr_41 [i_10 - 3] [i_10 + 2] [i_10 - 2] [i_10] [i_10 - 3] [i_10] [i_10 - 3])));
                        var_24 -= ((short) (~(arr_8 [i_1] [i_2] [i_2])));
                    }
                    arr_46 [i_1] [i_1] [i_2] [i_1] [i_10 - 1] = ((/* implicit */signed char) ((short) (_Bool)1));
                }
            }
            for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 4) 
                    {
                        {
                            arr_53 [i_1] [i_2 - 1] [i_13 - 1] [i_2 - 1] [5ULL] [3ULL] = ((/* implicit */short) (((!(((/* implicit */_Bool) 8395398003356453514ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))))));
                            var_25 = ((/* implicit */signed char) var_6);
                            arr_54 [i_1] [i_2] [i_13 - 1] [i_1] [i_15] = ((/* implicit */long long int) arr_50 [i_1] [i_2 - 1] [i_13] [0LL]);
                            arr_55 [i_1] [i_2] [i_2] [9ULL] [i_15] = ((signed char) (~((~(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                arr_56 [i_13] [5ULL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_0))) == ((~(((/* implicit */int) arr_35 [i_2 - 1] [i_13 - 2]))))));
                arr_57 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min(((+(((/* implicit */int) ((signed char) var_4))))), (min((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_7))))))));
            }
            arr_58 [i_1] [(short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((/* implicit */int) ((short) arr_0 [i_2] [i_2 - 1])))));
        }
        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                arr_65 [i_1] [i_16] [i_17] = ((/* implicit */short) arr_6 [i_17]);
                var_26 -= ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [(short)10] [(short)10] [i_17]))));
            }
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                for (signed char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (((~(((/* implicit */int) max((((/* implicit */short) arr_62 [i_1] [i_16])), ((short)4818)))))) ^ ((~(((/* implicit */int) arr_51 [i_19]))))));
                        var_28 -= ((/* implicit */_Bool) ((arr_48 [i_19] [i_18] [i_16] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (short)18075)))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 1) 
        {
            var_29 -= ((/* implicit */long long int) var_7);
            var_30 -= ((/* implicit */signed char) ((short) ((_Bool) arr_9 [i_20 + 2] [i_20] [i_20] [i_20])));
        }
    }
    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
    {
        arr_75 [i_21] = ((/* implicit */_Bool) 7325772348432157700ULL);
        var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((281474976710648ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))), (var_9)))) ? (((((/* implicit */int) arr_59 [i_21] [i_21] [i_21])) / (((/* implicit */int) arr_7 [i_21] [i_21] [i_21])))) : (((/* implicit */int) ((_Bool) arr_38 [i_21] [i_21] [8ULL] [i_21] [(signed char)4])))));
    }
    /* LoopNest 3 */
    for (long long int i_22 = 0; i_22 < 18; i_22 += 4) 
    {
        for (signed char i_23 = 2; i_23 < 17; i_23 += 4) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_26 = 0; i_26 < 18; i_26 += 3) 
                        {
                            arr_89 [i_25] [i_25] [i_25] [i_24] [i_25] = ((unsigned long long int) var_1);
                            var_32 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-15204))))));
                            arr_90 [i_22] [i_23] [i_23 - 2] [i_24] [13LL] [i_22] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_6)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_27 = 2; i_27 < 15; i_27 += 3) 
                        {
                            var_33 = ((/* implicit */signed char) var_6);
                            var_34 = ((/* implicit */unsigned long long int) ((signed char) max((var_4), (var_4))));
                        }
                        for (signed char i_28 = 1; i_28 < 17; i_28 += 4) /* same iter space */
                        {
                            arr_96 [i_22] [i_24] [i_23] [i_25] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [i_23 + 1] [i_23] [i_24] [i_28 + 1] [i_28])) && (((/* implicit */_Bool) arr_87 [i_23 - 2] [i_23] [i_24] [i_28 - 1] [i_28 + 1]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28226)) || (((/* implicit */_Bool) var_8))))), (max((var_6), (((/* implicit */unsigned long long int) var_3))))))));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((min((max((arr_93 [i_22] [i_23] [i_23]), (((/* implicit */long long int) arr_81 [i_23] [i_24] [i_23] [i_28])))), (((/* implicit */long long int) max((arr_80 [i_23 - 1]), (arr_80 [i_22])))))) != (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))))));
                            arr_97 [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)55)) ? (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_81 [i_22] [i_23] [i_24] [(_Bool)1])) : (((/* implicit */int) var_2))))) ^ ((~(var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_8), (((/* implicit */signed char) var_4))))) ^ (((/* implicit */int) ((short) var_5))))))));
                        }
                        for (signed char i_29 = 1; i_29 < 17; i_29 += 4) /* same iter space */
                        {
                            arr_100 [i_25] [i_24] = ((/* implicit */short) (+(((/* implicit */int) (short)-4852))));
                            arr_101 [i_23] [i_25] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_0))))))) ? ((~(max((arr_93 [(signed char)6] [i_24] [i_22]), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)3)))))))));
                            arr_102 [9ULL] [i_24] [(signed char)8] [(signed char)12] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) arr_93 [(signed char)17] [i_23] [i_29 - 1])) ? (arr_84 [i_24] [i_23] [i_29 - 1] [i_25] [i_23 - 1]) : (arr_84 [i_24] [i_23] [i_29 + 1] [i_29 + 1] [i_23 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-17744)))) >= (((/* implicit */int) arr_85 [i_22] [i_23] [i_22] [(_Bool)1]))))))));
                            var_36 -= ((/* implicit */short) (-(((/* implicit */int) (short)18072))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_30 = 0; i_30 < 18; i_30 += 4) 
                        {
                            arr_105 [i_22] [i_23] [i_25] [i_25] [(signed char)10] [i_23] [i_24] = ((/* implicit */unsigned long long int) arr_93 [i_22] [i_22] [i_22]);
                            var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)-69)))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)-36)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_93 [i_23 - 2] [i_30] [i_30])))))));
                            arr_106 [i_22] [i_23 + 1] [(signed char)9] [i_23 + 1] [i_30] [i_24] = var_1;
                            arr_107 [i_24] [i_23] [i_24] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_79 [i_25])), (min(((short)-18991), (((/* implicit */short) var_4))))))) || ((!(((/* implicit */_Bool) arr_95 [i_22] [i_22] [i_22]))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) 8395398003356453494ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_78 [i_25])))))))) : (10307702190504392029ULL))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_31 = 0; i_31 < 18; i_31 += 4) 
                        {
                            var_39 -= ((/* implicit */long long int) (+(((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((+(var_6)))))));
                            arr_110 [i_24] [(short)2] [i_25] [i_31] = ((/* implicit */short) (!(((/* implicit */_Bool) 3525154634231858156ULL))));
                            arr_111 [i_24] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))))) * (((/* implicit */int) var_8))));
                            arr_112 [i_22] [i_23] [i_22] [i_23] [i_24] [i_22] [i_24] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 3902185301660546170ULL)) || (((/* implicit */_Bool) var_1))))))));
                        }
                        for (unsigned long long int i_32 = 2; i_32 < 15; i_32 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_99 [i_22] [i_23 + 1] [i_24] [i_24] [i_25] [i_32] [i_23 + 1])), (var_9)))) || ((!(((/* implicit */_Bool) (short)17740))))))) < ((+(((/* implicit */int) var_4)))))))));
                            var_41 -= 8395398003356453503ULL;
                        }
                    }
                    arr_116 [i_22] [i_23 + 1] [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_5))))))) ? (max(((~(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_80 [9ULL])) : (((/* implicit */int) var_9))))))) : (6900460859282245786ULL)));
                }
            } 
        } 
    } 
}
