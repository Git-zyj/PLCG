/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66665
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) ((unsigned short) var_0))) : ((+(((/* implicit */int) (signed char)37))))));
            var_12 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))));
            arr_5 [7U] = ((/* implicit */unsigned long long int) (signed char)-85);
            var_13 = ((/* implicit */int) max((var_13), ((~(((/* implicit */int) var_0))))));
            var_14 = ((/* implicit */unsigned long long int) var_4);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) ((arr_2 [i_2]) && (var_2)));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7680768625966394498ULL)) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (18446744073709551610ULL)));
            var_17 = ((/* implicit */int) arr_2 [i_2]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) var_2))))));
            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 16681205534743708579ULL));
            var_19 = ((unsigned int) var_4);
        }
    }
    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((-1) + (2147483647))) << (((((/* implicit */int) min((arr_3 [i_5 - 1]), (arr_3 [i_5 - 1])))) - (36))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(254038048))))));
        var_22 -= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_5);
            var_23 = ((/* implicit */unsigned long long int) var_10);
            var_24 = ((/* implicit */unsigned short) ((signed char) ((unsigned int) arr_17 [i_6] [i_6] [i_5 - 2])));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
        {
            var_25 |= ((/* implicit */short) ((unsigned long long int) var_7));
            arr_23 [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9755715556756028315ULL)) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) arr_15 [i_5 + 3]))));
            var_26 = ((/* implicit */_Bool) var_0);
        }
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) ((min(((!(var_2))), ((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) 9755715556756028312ULL))));
            arr_27 [(signed char)5] = ((/* implicit */unsigned long long int) 770125827);
            var_28 = ((/* implicit */short) ((((((/* implicit */unsigned int) -603352075)) / (4294967295U))) != (min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)6))))), (var_7)))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) var_1);
        var_30 = ((/* implicit */signed char) var_10);
    }
    /* LoopSeq 1 */
    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    {
                        var_31 = ((/* implicit */int) var_3);
                        arr_41 [i_10 + 3] = ((/* implicit */unsigned short) var_1);
                        var_32 = ((/* implicit */unsigned int) ((signed char) ((short) arr_18 [13ULL])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    {
                        var_33 = ((((/* implicit */_Bool) ((var_2) ? (var_7) : (((/* implicit */unsigned int) var_4))))) ? (min((var_8), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_10 + 1]) : (((/* implicit */int) var_2))))));
                        var_34 = ((/* implicit */_Bool) (-(((-254038049) + (((/* implicit */int) (_Bool)0))))));
                        var_35 = ((((/* implicit */_Bool) arr_38 [5ULL])) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10] [i_10 + 1] [i_10 + 2]))))) : (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_9))))));
                    }
                } 
            } 
            var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) * (9755715556756028288ULL));
            arr_46 [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))) ? (var_7) : (((((/* implicit */unsigned int) var_4)) - (var_7)))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            arr_50 [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) -502237191));
            arr_51 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((9755715556756028290ULL), (((/* implicit */unsigned long long int) (short)23460))))))) ? (((min((8592364532949083370ULL), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((int) 3673226634714759410ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) var_0)))))));
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)52258)) : ((+(var_4)))));
                    arr_59 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_2))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) min((((short) var_2)), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (((unsigned int) var_2)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10 + 1] [i_10 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                        var_40 = ((/* implicit */unsigned long long int) max((((short) var_3)), (var_3)));
                    }
                    for (signed char i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        arr_69 [(signed char)1] [i_16] [(signed char)1] [i_19] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((short) ((1922732654240775274ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8169166801671494675ULL)))))));
                        var_41 = var_5;
                    }
                }
                arr_70 [i_10] [i_10] [i_10] [i_10 + 3] = ((/* implicit */signed char) min((((/* implicit */short) (signed char)1)), (var_3)));
                var_42 = ((/* implicit */_Bool) ((unsigned long long int) min((var_5), (((arr_62 [i_10 + 3] [14U]) & (var_5))))));
            }
            for (signed char i_22 = 0; i_22 < 15; i_22 += 4) 
            {
                var_43 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned int) ((int) 603352064))) : ((~(1658627755U)))))));
                var_44 = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */_Bool) 10)) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))))));
            }
            var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_26 [i_10 + 2]))))));
            var_46 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), ((((!(((/* implicit */_Bool) 177089152U)))) ? (min((((/* implicit */int) var_3)), (var_4))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_10)) : (-1285696975)))))));
        }
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_47 = ((/* implicit */_Bool) arr_61 [i_10 + 3] [i_10 - 1]);
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 15; i_24 += 4) 
            {
                arr_78 [i_10] [i_23] [6ULL] [i_10 - 1] = ((/* implicit */int) ((signed char) var_6));
                /* LoopNest 2 */
                for (signed char i_25 = 1; i_25 < 12; i_25 += 2) 
                {
                    for (int i_26 = 0; i_26 < 15; i_26 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) 1285696983);
                            var_49 = ((((/* implicit */_Bool) 2636339541U)) ? (1042100869512196550ULL) : (0ULL));
                            var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12673945841230320192ULL))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_31 [i_10 + 2] [i_10 + 2])) - (52270)))));
            }
            var_52 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967282U)));
        }
        var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) var_10))));
        /* LoopSeq 2 */
        for (int i_27 = 0; i_27 < 15; i_27 += 2) 
        {
            var_54 -= ((unsigned int) arr_74 [i_10]);
            var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_82 [i_27] [i_10] [(unsigned short)14] [i_10] [i_27])) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) == (((/* implicit */int) var_0)))))));
        }
        /* vectorizable */
        for (signed char i_28 = 0; i_28 < 15; i_28 += 4) 
        {
            var_56 = ((/* implicit */unsigned long long int) ((arr_37 [i_10] [i_10]) ? (((/* implicit */int) ((signed char) arr_71 [i_10] [i_10] [i_10] [i_28]))) : (((int) (signed char)-92))));
            /* LoopSeq 1 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                var_57 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_9));
                var_58 = (!(((/* implicit */_Bool) var_9)));
                /* LoopSeq 1 */
                for (signed char i_30 = 3; i_30 < 14; i_30 += 4) 
                {
                    var_59 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [2ULL] [i_10 + 1] [i_10 + 3] [i_10] [i_10] [i_30 - 1]))));
                    arr_92 [i_10] [i_29] [i_29] [i_29] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1042100869512196539ULL)) ? (var_7) : (((/* implicit */unsigned int) 0))))) : (var_8));
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 15; i_31 += 4) 
                    {
                        var_60 = 1042100869512196539ULL;
                        var_61 = ((/* implicit */unsigned long long int) var_10);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_32 = 0; i_32 < 15; i_32 += 4) 
                    {
                        var_62 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_63 [i_10] [i_10] [i_10] [i_10] [i_29]))));
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_10 + 3])) > (((/* implicit */int) arr_42 [i_10 + 1]))));
                    }
                    for (signed char i_33 = 0; i_33 < 15; i_33 += 4) 
                    {
                        var_64 = ((/* implicit */unsigned long long int) (~(1019218667)));
                        arr_102 [1] [i_28] [i_29] = ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0))));
                        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (2147483647) : (((/* implicit */int) var_3))));
                        var_66 = 3666131100505342355ULL;
                    }
                    for (signed char i_34 = 3; i_34 < 14; i_34 += 4) 
                    {
                        var_67 = ((/* implicit */int) ((unsigned long long int) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        var_68 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_10)) > (var_1))));
                        var_69 = ((/* implicit */unsigned long long int) var_4);
                    }
                }
            }
            var_70 = (~(var_8));
        }
        arr_105 [i_10] = ((/* implicit */unsigned int) var_4);
    }
    var_71 = ((/* implicit */unsigned long long int) max((var_71), (((/* implicit */unsigned long long int) var_3))));
    var_72 = ((/* implicit */_Bool) 17709588997684732082ULL);
}
