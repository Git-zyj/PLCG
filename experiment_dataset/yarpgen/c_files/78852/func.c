/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78852
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (var_8)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_8)) : (min((var_10), (((/* implicit */long long int) var_2))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */short) var_12);
                        var_15 = ((/* implicit */long long int) ((unsigned short) var_9));
                        var_16 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (min((var_10), (((/* implicit */long long int) arr_2 [i_3 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0U))))))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */short) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_2 + 1])) * (((/* implicit */int) ((unsigned short) var_9)))));
                            var_19 = ((/* implicit */int) ((unsigned long long int) var_0));
                        }
                        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)160))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 805306368)) == (4294967295U)))) : (((/* implicit */int) (short)-8828))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_9)))))));
                        }
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((arr_13 [i_0]) - (var_10))), (((/* implicit */long long int) var_4)))))));
                        var_23 = min((((/* implicit */unsigned int) ((arr_20 [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2 + 3] [i_2 + 2]) ? (((/* implicit */int) arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) (short)8823))))), (((unsigned int) var_9)));
                        var_24 = ((long long int) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_4] [i_2 + 1] [i_0])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_0))));
                            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (arr_8 [i_1] [i_7] [i_1])))) ? (((((/* implicit */_Bool) 4294967289U)) ? (var_6) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0])) ? (var_0) : (((/* implicit */int) var_11)))))));
                            var_28 = ((/* implicit */unsigned short) -805306380);
                            var_29 = ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
                        }
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 2] [i_7]))));
                        /* LoopSeq 4 */
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            var_31 -= ((((/* implicit */_Bool) arr_5 [i_1] [i_7] [i_10 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)));
                            var_32 = ((unsigned long long int) 805306367);
                        }
                        for (long long int i_11 = 2; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_33 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)8828)) ? (805306367) : (262143))) != (((/* implicit */int) var_4))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_2 + 3])));
                        }
                        for (long long int i_12 = 2; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */int) var_4)) != (var_0)));
                            var_36 = ((/* implicit */_Bool) ((-5348983372646996726LL) / (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])))));
                        }
                        for (long long int i_13 = 2; i_13 < 14; i_13 += 4) /* same iter space */
                        {
                            var_37 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8828))) > (729197826867737413ULL)));
                            var_38 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                            var_39 = ((((/* implicit */_Bool) var_3)) ? (var_10) : (arr_28 [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 - 1]));
                            var_40 = -805306366;
                        }
                    }
                    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) (~(1447789445)))) : ((~((~(4159314402U)))))));
                            var_42 = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_15])) >= (((/* implicit */int) arr_2 [i_14 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_43 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [i_14 - 3] [i_14 - 3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_2 + 2] [i_0] [i_15])) != (((/* implicit */int) var_11))))) : (min((((/* implicit */int) (unsigned char)134)), (805306357))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)98))))) != (((/* implicit */int) max((var_2), (((/* implicit */signed char) var_9))))))))));
                        }
                        for (signed char i_16 = 1; i_16 < 14; i_16 += 2) 
                        {
                            var_44 = min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (((_Bool)0) ? (2147483647) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967284U)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (2096640))));
                            var_45 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_26 [i_0])), (var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_14 - 2]))) < (var_10))))));
                            var_46 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_14 + 1]))) : (arr_10 [i_1] [i_14 + 1])))) ? (var_0) : (((/* implicit */int) ((unsigned char) var_4))))), (((((/* implicit */_Bool) (short)8827)) ? (((/* implicit */int) (unsigned char)241)) : (-805306380)))));
                        }
                        var_47 = min((((((/* implicit */int) arr_24 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_14] [i_1])) & (((/* implicit */int) arr_24 [i_2 + 2] [i_14 - 3] [i_14 - 2] [i_14 - 3] [i_14 - 1] [i_1])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_1])), (var_3)))));
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 15; i_17 += 3) 
                        {
                            var_48 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_43 [i_14 - 3] [i_14 + 1] [i_14 - 1] [i_1])) ? (((/* implicit */long long int) var_8)) : (var_6))));
                            var_49 = ((/* implicit */unsigned short) var_4);
                            var_50 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (max(((unsigned char)19), (((/* implicit */unsigned char) var_5))))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_25 [i_0] [i_1] [i_2 + 1] [i_17]))) != (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned char)223))))))))));
                            var_51 += ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)236)))) ? (((/* implicit */int) arr_2 [i_2 + 3])) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */int) var_4))))))), (max((((long long int) 1863887631)), (((/* implicit */long long int) min((var_0), (((/* implicit */int) var_5)))))))));
                        }
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_14 - 3])) ? (((/* implicit */long long int) ((((int) 805306363)) >> ((((~(var_0))) + (137054190)))))) : (((((_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))));
                    }
                    var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) var_6))), (((unsigned int) var_5))))) : (((long long int) ((var_0) < (((/* implicit */int) var_9)))))));
                }
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
    {
        var_54 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_49 [i_18] [i_18] [i_18] [i_18] [i_18])) & (var_12))), (((/* implicit */int) ((((/* implicit */int) var_2)) == (var_0)))))) * (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            var_55 = ((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */int) ((((/* implicit */_Bool) 484528742)) || (((/* implicit */_Bool) (unsigned char)171)))))));
            /* LoopSeq 2 */
            for (long long int i_20 = 3; i_20 < 13; i_20 += 4) 
            {
                var_56 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)242)) == (2096640))))) / (arr_13 [i_19]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_20 - 1] [i_20 - 1] [i_18] [i_20 - 3] [i_20 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_2))))) : (0U))))));
                var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) var_0))));
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 12; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-64)) & (((/* implicit */int) (unsigned char)249)))))));
                            var_59 = ((/* implicit */long long int) -805306346);
                            var_60 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_23 = 2; i_23 < 14; i_23 += 1) 
            {
                var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8827))) != (7569556388217254549ULL)))) : (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 15; i_24 += 3) 
                {
                    for (unsigned short i_25 = 0; i_25 < 15; i_25 += 4) 
                    {
                        {
                            var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) ((unsigned short) var_6)))));
                            var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)114)) / (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            var_64 = ((/* implicit */long long int) ((min((arr_36 [i_18] [i_18] [i_18] [i_18]), (arr_36 [i_18] [i_19] [i_19] [i_19]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) -75452393)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22805))))))));
        }
        for (long long int i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_27 = 1; i_27 < 11; i_27 += 2) 
            {
                var_65 = ((/* implicit */unsigned char) var_2);
                var_66 = ((/* implicit */unsigned char) 10877187685492297067ULL);
            }
            var_67 = ((/* implicit */int) ((max((arr_57 [i_26] [i_26] [i_18]), (((/* implicit */unsigned int) arr_52 [i_18] [i_26] [i_26] [i_26] [i_18])))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_18] [i_18] [i_26] [i_26] [i_26])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_52 [i_18] [i_26] [i_26] [i_26] [i_18])))))));
        }
    }
    var_68 = ((/* implicit */long long int) var_11);
    var_69 = ((/* implicit */unsigned char) ((var_8) & (max((min((((/* implicit */int) var_1)), (var_0))), (((var_0) / (((/* implicit */int) var_1))))))));
}
