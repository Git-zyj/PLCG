/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66529
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((var_10) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((unsigned short) -3055728803269929670LL))) : (((((/* implicit */_Bool) (unsigned short)13472)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_21 = ((/* implicit */int) ((unsigned char) ((-3055728803269929670LL) / (((/* implicit */long long int) 1440057375)))));
            var_22 ^= ((/* implicit */long long int) arr_5 [i_1]);
            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3986))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3055728803269929662LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3986))) : (131202U)));
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                arr_10 [(unsigned short)11] [i_1] [i_2] = (~(((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_0 [(unsigned short)16]))) - (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 2])) ? (arr_6 [i_2] [i_2] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
            }
        }
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_1 [i_3] [i_3 + 1]))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                var_27 = var_10;
                var_28 = var_13;
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_14)), (-3055728803269929667LL))))));
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                var_30 = ((/* implicit */short) ((max((arr_15 [i_0]), (-3055728803269929666LL))) != (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) min((arr_9 [i_5] [i_3 - 1] [i_3 - 2]), (((/* implicit */short) var_14)))))));
            }
        }
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        arr_27 [i_6] [i_6] [(unsigned short)16] [i_6] [2LL] [i_8] = var_10;
                        arr_28 [i_6] [i_7] [i_6] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                    }
                } 
            } 
            arr_29 [i_6 - 1] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)3986);
        }
        var_32 -= ((/* implicit */unsigned short) arr_15 [i_0]);
        var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? ((-(arr_6 [(unsigned char)16] [(_Bool)1] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
        var_34 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((long long int) (short)-26299))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (((((/* implicit */long long int) var_15)) / (arr_6 [2U] [(unsigned short)2] [i_0])))))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_34 [17] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)160))));
            /* LoopNest 3 */
            for (unsigned short i_11 = 2; i_11 < 15; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        {
                            arr_43 [i_11] [i_10] [(unsigned short)13] = ((/* implicit */unsigned char) var_18);
                            var_35 &= ((/* implicit */unsigned short) arr_20 [i_9 - 1] [i_9 - 1]);
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_11)))))))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) arr_25 [i_9] [(unsigned short)4] [i_9] [i_10]))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_46 [i_9] [(unsigned char)11] [5LL] = ((/* implicit */unsigned long long int) var_8);
            arr_47 [i_14] = ((((/* implicit */_Bool) (unsigned short)40365)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 15763889046774292574ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))));
            /* LoopNest 2 */
            for (long long int i_15 = 3; i_15 < 17; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_38 = ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) var_5);
                            var_40 = ((/* implicit */short) (_Bool)1);
                            arr_59 [i_9] = (+(((var_10) ? (((/* implicit */int) (unsigned char)39)) : (var_12))));
                        }
                        for (unsigned short i_18 = 4; i_18 < 14; i_18 += 3) 
                        {
                            arr_62 [i_9] [i_9] [i_9] [(unsigned short)6] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -5471966092915376140LL)) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))));
                            var_41 = ((/* implicit */unsigned char) arr_8 [i_9] [i_9] [i_9 - 1]);
                        }
                        arr_63 [i_9] [9ULL] [i_15 - 3] [i_16] = ((/* implicit */unsigned long long int) ((long long int) var_11));
                        arr_64 [i_16] [(unsigned short)13] [i_16] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */unsigned short) var_7);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_68 [i_9] [i_19] [i_9] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61549))));
                arr_69 [8LL] [i_19] [8LL] [8LL] = var_11;
                arr_70 [i_9] [i_14] [i_19] = ((/* implicit */_Bool) min((arr_67 [5LL] [i_19]), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_56 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1])), (((unsigned int) arr_52 [i_9] [(unsigned short)5] [i_9 - 1] [i_9] [i_9 - 1])))))));
                var_42 = (((!(((/* implicit */_Bool) arr_6 [i_19 - 1] [i_19] [i_9 - 1])))) ? (((/* implicit */int) arr_3 [i_9] [(_Bool)1])) : (((/* implicit */int) var_17)));
            }
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    arr_75 [i_20] [i_9] [i_20] [i_20] [i_21] = ((/* implicit */unsigned short) arr_7 [i_9] [i_14] [i_21]);
                    var_43 = ((/* implicit */unsigned long long int) (~(var_7)));
                }
                for (long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_80 [i_9] [i_14] [i_20] [i_22] [i_23] = ((/* implicit */unsigned char) max((-5031988757882455771LL), (-7507802433832693126LL)));
                        var_44 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)51196)) ? (((/* implicit */int) (unsigned short)3975)) : (((/* implicit */int) (unsigned short)3975)))));
                        var_45 = ((/* implicit */unsigned char) var_4);
                        arr_81 [5LL] [5LL] [5LL] [i_22] [i_23] [i_20] [(unsigned short)16] = ((/* implicit */unsigned int) (+(((long long int) var_12))));
                    }
                    var_46 = ((/* implicit */unsigned int) (-(13150984687685485217ULL)));
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_71 [i_20] [i_20] [i_20 - 1])))) ? (arr_77 [i_20 - 1] [i_20 - 1] [(unsigned char)8] [i_20 - 1]) : ((((!(((/* implicit */_Bool) arr_5 [i_9])))) ? (((/* implicit */int) var_17)) : ((-(((/* implicit */int) arr_20 [(unsigned short)16] [i_20 - 1]))))))));
                    var_48 = ((/* implicit */unsigned long long int) arr_4 [i_20] [i_22]);
                }
                var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) arr_40 [i_9 - 1] [(unsigned char)1] [i_20] [i_20] [i_20]))));
                var_50 ^= ((/* implicit */unsigned char) ((long long int) (unsigned short)3982));
            }
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) arr_16 [i_9] [i_9] [i_9]))));
                arr_84 [1] [9LL] [i_14] [(unsigned short)7] = ((/* implicit */long long int) min((2655814911U), (((/* implicit */unsigned int) ((unsigned short) arr_51 [i_9] [i_9] [i_9 - 1] [i_9])))));
            }
            /* LoopSeq 1 */
            for (long long int i_25 = 4; i_25 < 16; i_25 += 2) 
            {
                arr_87 [13LL] = ((/* implicit */short) ((arr_51 [i_9 - 1] [1U] [i_9 - 1] [1U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                var_52 = ((/* implicit */_Bool) var_12);
                arr_88 [i_9] [i_14] [i_14] [i_25] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)3975)), (((unsigned long long int) arr_7 [i_25 - 3] [i_9 - 1] [3LL]))));
                var_53 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_9 - 1] [i_14] [i_14] [(_Bool)1] [i_25]))));
                var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) arr_71 [i_25] [i_9 - 1] [i_9 - 1]))));
            }
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) var_6))));
                arr_94 [i_9] [i_9] [i_27] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_39 [i_9] [i_27])))), ((~(var_19)))));
                /* LoopSeq 3 */
                for (unsigned short i_28 = 0; i_28 < 18; i_28 += 1) 
                {
                    var_56 = ((/* implicit */long long int) (signed char)-99);
                    arr_97 [(_Bool)1] [10LL] [(_Bool)1] [i_28] &= ((/* implicit */_Bool) ((long long int) ((unsigned short) (unsigned short)19193)));
                }
                for (unsigned char i_29 = 0; i_29 < 18; i_29 += 2) 
                {
                    arr_101 [(unsigned char)0] [(signed char)12] [9] [i_26] [9] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? ((~((-(((/* implicit */int) arr_48 [i_9] [i_27] [i_29])))))) : (((/* implicit */int) var_4))));
                    /* LoopSeq 3 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_29] [i_9 - 1] [i_29]))))) * (((/* implicit */int) (!((_Bool)1))))));
                        var_58 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)18199)), ((~(arr_30 [i_9 - 1])))));
                        var_59 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_14))))))) ? ((-(min((((/* implicit */long long int) (_Bool)1)), (-8356498485429833897LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 183892246U)) ? (((/* implicit */int) ((signed char) 5913022436006764686ULL))) : (((/* implicit */int) (unsigned short)18199)))))));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_60 = ((/* implicit */unsigned short) ((long long int) max((8356498485429833897LL), (((/* implicit */long long int) (_Bool)0)))));
                        var_61 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_9 - 1] [i_27] [i_29]))));
                        var_62 ^= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_73 [11LL] [i_9] [i_9] [i_9 - 1])))), (((/* implicit */int) arr_73 [5LL] [(signed char)2] [(signed char)2] [i_9 - 1]))));
                    }
                    for (unsigned short i_32 = 0; i_32 < 18; i_32 += 2) 
                    {
                        var_63 = ((/* implicit */unsigned short) arr_19 [i_9 - 1] [i_9] [(unsigned char)11]);
                        var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_108 [(unsigned short)8] [i_9 - 1] [i_32] [i_32] [(unsigned char)4] [i_32] [(unsigned short)8])) ? (var_12) : (((/* implicit */int) var_4))));
                    }
                }
                for (short i_33 = 0; i_33 < 18; i_33 += 3) 
                {
                    var_65 = ((/* implicit */long long int) (~(((/* implicit */int) arr_36 [i_9] [(unsigned short)14] [i_27]))));
                    arr_113 [i_33] [i_33] [i_26] [8] [i_33] = ((_Bool) ((int) ((((/* implicit */_Bool) arr_13 [i_33])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_66 [i_33] [i_26] [i_27] [i_33])))));
                }
                arr_114 [8LL] [8LL] [8LL] = ((/* implicit */unsigned short) (+(((unsigned long long int) (_Bool)1))));
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                var_66 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-21933))))), (min((min((arr_11 [i_9] [i_26] [i_34]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) arr_39 [17LL] [i_9]))))));
                var_67 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_54 [i_34] [i_26] [i_34] [i_34]))))))));
                arr_119 [(unsigned char)15] [i_26] = ((/* implicit */_Bool) -3055728803269929647LL);
                /* LoopSeq 3 */
                for (unsigned short i_35 = 0; i_35 < 18; i_35 += 2) 
                {
                    arr_122 [i_9] [i_9] [(unsigned short)9] [(unsigned short)8] [i_9 - 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_23 [i_9] [i_26]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) -814561209)) : (-8356498485429833890LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))) : (((/* implicit */int) var_18))));
                    arr_123 [3LL] [i_26] [i_34] [i_34] = (~(arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1]));
                }
                for (unsigned long long int i_36 = 0; i_36 < 18; i_36 += 4) /* same iter space */
                {
                    arr_126 [i_34] [i_34] [9LL] [(_Bool)1] [i_34] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)51184))))) ? (((((/* implicit */_Bool) 1928199923407257953LL)) ? ((-(-5031988757882455775LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_26] [i_26])))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1164812203)))) ? ((~(((/* implicit */int) var_10)))) : (arr_39 [i_9 - 1] [i_9 - 1]))))));
                    arr_127 [i_9 - 1] [i_34] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_20 [i_9 - 1] [i_9 - 1])) >= (((/* implicit */int) arr_20 [i_9 - 1] [i_9 - 1])))))));
                    var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
                }
                for (unsigned long long int i_37 = 0; i_37 < 18; i_37 += 4) /* same iter space */
                {
                    var_69 = ((/* implicit */long long int) var_11);
                    var_70 = ((/* implicit */_Bool) var_16);
                    arr_130 [(signed char)5] [(signed char)5] [(signed char)5] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_76 [i_37] [i_37]), (((/* implicit */unsigned short) (short)-14743)))))));
                    arr_131 [i_9] [i_9] [(_Bool)0] [(_Bool)0] [i_9 - 1] [i_9] |= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)37530)), (-1)));
                }
                var_71 |= ((/* implicit */unsigned short) arr_89 [i_9 - 1] [0LL] [i_34]);
            }
            arr_132 [i_9] [i_9] = ((/* implicit */long long int) arr_78 [i_26] [i_26] [(unsigned char)4] [i_9] [i_9]);
        }
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_39 = 1; i_39 < 15; i_39 += 1) 
            {
                var_72 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? ((~(1928199923407257964LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)14737)))));
                var_73 = arr_128 [i_9 - 1] [i_9] [i_38] [i_9 - 1] [i_39];
                var_74 = ((/* implicit */_Bool) min((var_74), (((/* implicit */_Bool) var_13))));
                var_75 -= ((/* implicit */unsigned short) var_15);
                var_76 = ((/* implicit */unsigned short) arr_32 [i_39]);
            }
            var_77 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 1 */
        for (long long int i_40 = 0; i_40 < 18; i_40 += 4) 
        {
            arr_139 [i_9] [i_9] = ((/* implicit */unsigned int) min((-8356498485429833890LL), (((/* implicit */long long int) (_Bool)1))));
            var_78 = ((/* implicit */unsigned short) max((var_78), (arr_85 [i_9] [i_40])));
        }
        var_79 = ((/* implicit */long long int) (+((~((~(((/* implicit */int) arr_44 [i_9] [i_9]))))))));
    }
    for (_Bool i_41 = 1; i_41 < 1; i_41 += 1) /* same iter space */
    {
        var_80 = ((/* implicit */unsigned int) max((var_80), (((/* implicit */unsigned int) arr_1 [i_41] [i_41 - 1]))));
        var_81 = ((/* implicit */long long int) (_Bool)1);
        arr_142 [2LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 7054432410033737002LL)) ? (((/* implicit */int) arr_107 [i_41] [i_41] [i_41 - 1])) : (((/* implicit */int) arr_107 [15] [(unsigned short)5] [i_41 - 1])))) : (((var_5) ? (((/* implicit */int) var_14)) : (((int) var_0))))));
    }
}
