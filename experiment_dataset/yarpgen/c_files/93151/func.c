/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93151
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((signed char) (signed char)0));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) ((arr_3 [i_0] [i_1] [i_0]) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_1);
    var_14 *= ((/* implicit */unsigned short) var_2);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) << ((~(((/* implicit */int) (signed char)-1)))))))));
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_16 = ((/* implicit */long long int) (-((~(((/* implicit */int) ((signed char) arr_6 [i_2])))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                for (int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) * ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                        arr_14 [i_2] [4LL] [i_4] [i_5 + 1] = ((7921869849897377441LL) / (((/* implicit */long long int) arr_9 [i_2])));
                    }
                } 
            } 
        } 
        var_18 &= ((/* implicit */signed char) (~(max(((-(((/* implicit */int) (signed char)1)))), (((/* implicit */int) (signed char)0))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), ((+((-(((/* implicit */int) arr_17 [15LL]))))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    {
                        var_20 += ((/* implicit */unsigned short) ((_Bool) arr_16 [i_8]));
                        var_21 = ((/* implicit */_Bool) arr_18 [i_6]);
                        var_22 = arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9];
                    }
                } 
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (long long int i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (signed char)4)))));
                    arr_37 [i_11] [i_11] [(_Bool)1] &= ((/* implicit */long long int) ((((int) arr_34 [i_12 - 1] [(unsigned short)18] [i_12])) >> (((((/* implicit */int) arr_30 [i_10] [i_10] [i_10])) - (41159)))));
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                    {
                        var_25 = 228125760;
                        var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10]))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) -1997196029);
                            arr_44 [i_11] [i_11] = ((/* implicit */_Bool) -1LL);
                        }
                        arr_45 [i_11] [i_11] [i_12 + 1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(arr_42 [i_11] [i_11] [i_11])))))) && (((/* implicit */_Bool) (signed char)-19))));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                    {
                        var_28 = min(((+(((/* implicit */int) arr_39 [i_10] [i_12 + 2] [i_10] [i_12 + 2] [i_12 + 2])))), (((arr_31 [i_12 + 3]) << (((arr_31 [i_12 + 3]) - (1532871628))))));
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) ((arr_35 [i_10] [i_11] [i_15] [i_15]) / (arr_32 [i_15] [i_11] [i_11])))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_16 = 1; i_16 < 20; i_16 += 3) 
        {
            var_30 = ((/* implicit */long long int) ((signed char) ((int) -1807007156)));
            arr_50 [i_10] [(signed char)6] &= ((/* implicit */_Bool) ((int) (~(arr_42 [i_10] [i_16] [16LL]))));
        }
        for (int i_17 = 1; i_17 < 23; i_17 += 3) 
        {
            arr_55 [i_10] [i_10] [i_17] = (~(((int) (!(((/* implicit */_Bool) -1148377426))))));
            var_31 = (+(((max((1662462888), (arr_53 [i_10] [i_17 - 1]))) - ((-(arr_28 [i_10]))))));
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((unsigned short) (((!(((/* implicit */_Bool) 2147483643)))) && (((/* implicit */_Bool) min((-3185973689222637089LL), (((/* implicit */long long int) arr_41 [i_10] [(_Bool)0] [i_17])))))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_33 = ((/* implicit */unsigned short) ((arr_49 [i_18]) << ((((~(-2128771780))) - (2128771779)))));
                var_34 = ((((arr_28 [i_10]) + (2147483647))) >> (((arr_28 [i_10]) + (894562887))));
                arr_62 [i_10] [i_18] [i_18] [i_19] = (~(((((arr_28 [i_10]) + (2147483647))) >> (((464028838) - (464028823))))));
            }
            for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                var_35 ^= ((/* implicit */signed char) arr_43 [i_10] [i_18] [i_18] [i_20] [i_10]);
                var_36 |= ((/* implicit */int) ((((arr_51 [i_20]) + (9223372036854775807LL))) >> (((arr_51 [i_20]) + (5701015114499157298LL)))));
                /* LoopSeq 4 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_70 [i_10] [i_18] [i_18] [i_18] [i_20] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [(signed char)18] [i_21])) && (((/* implicit */_Bool) (signed char)2))));
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) -2128771780))));
                }
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    var_38 = (+(((-1570276608) + (1662462888))));
                    var_39 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_22 - 1] [i_20] [i_20]))));
                }
                for (long long int i_23 = 1; i_23 < 21; i_23 += 3) 
                {
                    arr_78 [i_10] [i_18] [i_20] [i_18] = -2128771787;
                    var_40 = ((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) arr_76 [i_20] [i_10] [i_20] [i_23]))));
                    var_41 = ((((/* implicit */_Bool) arr_36 [i_18])) && (((/* implicit */_Bool) arr_36 [i_18])));
                }
                for (signed char i_24 = 0; i_24 < 24; i_24 += 2) 
                {
                    var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_81 [i_10])) && (((/* implicit */_Bool) arr_76 [i_10] [i_18] [i_20] [i_24])))))));
                    /* LoopSeq 2 */
                    for (int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_74 [i_10] [i_18] [i_20] [i_24] [i_25] [i_25]))));
                        var_44 = ((/* implicit */signed char) ((int) (~(0LL))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (arr_86 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                        arr_89 [i_26] [i_20] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
                        var_46 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 170046170))));
                    }
                }
                arr_90 [i_18] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_42 [4] [i_18] [i_20])) && (((/* implicit */_Bool) arr_36 [i_20])))));
            }
            for (int i_27 = 0; i_27 < 24; i_27 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_28 = 2; i_28 < 23; i_28 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_29 = 1; i_29 < 22; i_29 += 3) 
                    {
                        var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) -357117683))));
                        arr_99 [i_10] [i_10] [i_27] [i_10] [(signed char)14] [i_29] [i_29 - 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3713)) && (((/* implicit */_Bool) (unsigned short)65525)))))) * (((((-3185973689222637106LL) + (9223372036854775807LL))) >> (((2147483647) - (2147483626)))))));
                    }
                    for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                    {
                        arr_103 [i_10] [i_10] [i_27] [i_28] [i_28] [22] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_10] [i_18] [i_10] [5LL])) && (((/* implicit */_Bool) (signed char)-3))))) << (((/* implicit */int) (signed char)2)));
                        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_18] [i_30]))))) && ((!(((/* implicit */_Bool) arr_69 [i_10] [i_18] [i_18] [i_28 - 2]))))));
                        arr_104 [i_18] = ((/* implicit */int) ((((3185973689222637089LL) >> (((1662462886) - (1662462850))))) << (((arr_68 [i_30 - 1] [i_18] [i_10] [i_27] [i_18] [i_10]) - (1681972097)))));
                    }
                    for (int i_31 = 0; i_31 < 24; i_31 += 1) 
                    {
                        var_49 += ((/* implicit */unsigned short) arr_102 [i_31] [i_28] [i_28] [i_27] [i_27] [i_18] [i_10]);
                        var_50 = ((/* implicit */long long int) 2147483647);
                    }
                    arr_107 [i_18] [i_18] [i_18] [i_18] [i_28 - 1] [i_27] = (((((-(arr_38 [i_10] [i_27] [i_10]))) + (2147483647))) >> (((/* implicit */int) ((unsigned short) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_32 = 1; i_32 < 21; i_32 += 2) /* same iter space */
                    {
                        var_51 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_77 [i_32] [i_27] [i_18] [i_10])) && (((/* implicit */_Bool) arr_91 [i_10]))))));
                        var_52 = ((/* implicit */signed char) -1148377453);
                        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) arr_85 [i_10] [i_32 + 3] [(signed char)12] [(signed char)12] [i_28 - 2]))));
                        var_54 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_32 - 1])) && (((/* implicit */_Bool) 34351349760LL))))));
                    }
                    for (int i_33 = 1; i_33 < 21; i_33 += 2) /* same iter space */
                    {
                        arr_114 [i_10] [i_18] [i_10] [i_18] [i_33 + 1] [i_33 + 1] = ((/* implicit */unsigned short) ((int) arr_67 [i_10] [i_18] [i_33] [i_28 + 1]));
                        var_55 *= ((/* implicit */_Bool) ((long long int) arr_100 [i_10] [i_27] [i_28] [i_33]));
                    }
                }
                for (long long int i_34 = 2; i_34 < 23; i_34 += 1) /* same iter space */
                {
                    arr_117 [i_10] [i_18] [i_27] [i_27] [i_34 - 2] = ((/* implicit */_Bool) (~(-1273441348)));
                    var_56 = ((/* implicit */_Bool) (unsigned short)12830);
                    var_57 = ((/* implicit */long long int) ((int) ((((-17) + (2147483647))) << (((((((/* implicit */int) (signed char)-3)) + (13))) - (10))))));
                    /* LoopSeq 4 */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        arr_121 [i_18] [i_34 + 1] = (+((~(arr_59 [i_10] [i_10]))));
                        arr_122 [i_10] [i_18] [i_10] [i_34 + 1] [i_35] [i_27] = ((/* implicit */long long int) arr_102 [i_35] [i_34] [i_27] [i_27] [i_18] [i_10] [i_10]);
                    }
                    for (int i_36 = 0; i_36 < 24; i_36 += 3) 
                    {
                        var_58 = ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63484))))));
                        var_59 = (~((-(1148377434))));
                    }
                    for (int i_37 = 0; i_37 < 24; i_37 += 1) /* same iter space */
                    {
                        arr_128 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (~(arr_38 [i_18] [i_27] [i_37])));
                        var_60 += ((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)0)) * (arr_36 [i_18]))));
                    }
                    for (int i_38 = 0; i_38 < 24; i_38 += 1) /* same iter space */
                    {
                        var_61 = ((/* implicit */int) min((var_61), (arr_111 [i_18] [i_18])));
                        arr_133 [i_10] [i_18] [i_27] [i_34 + 1] [i_38] = ((((((int) -374704672)) + (2147483647))) << (((((6177524673792098291LL) >> (((((/* implicit */int) arr_123 [i_10] [i_18] [i_38] [i_38] [i_38])) - (41812))))) - (2809212LL))));
                        var_62 &= ((/* implicit */_Bool) ((arr_112 [i_38] [i_38] [i_34 + 1] [i_34 - 1] [i_34 - 2]) | (arr_112 [i_38] [i_38] [i_34 + 1] [i_34 - 1] [i_34 + 1])));
                    }
                    arr_134 [i_34] [i_27] [i_18] [i_10] = ((/* implicit */int) (-(-5646029960365250372LL)));
                }
                for (int i_39 = 0; i_39 < 24; i_39 += 3) 
                {
                    var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) (~(((/* implicit */int) arr_136 [i_10] [i_18] [i_18] [i_27] [i_27] [i_39])))))));
                    var_64 = ((/* implicit */signed char) (~(((int) 1662462886))));
                    arr_138 [i_10] [i_27] [i_39] = ((/* implicit */long long int) (+(((73156886) >> (((1662462884) - (1662462859)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
                    {
                        var_65 = ((/* implicit */int) arr_116 [i_10] [i_10] [i_10] [i_10]);
                        arr_141 [i_39] = arr_108 [i_40 + 1] [i_10] [i_39] [i_10] [i_10];
                    }
                    for (int i_41 = 3; i_41 < 22; i_41 += 3) 
                    {
                        var_66 = ((/* implicit */unsigned short) (~(((long long int) arr_85 [i_10] [i_18] [i_27] [i_39] [i_41]))));
                        var_67 = arr_32 [i_41] [i_39] [i_18];
                        var_68 = ((/* implicit */int) arr_43 [i_10] [i_10] [i_27] [i_39] [i_10]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_42 = 2; i_42 < 23; i_42 += 3) 
                    {
                        var_69 = ((/* implicit */unsigned short) 4323455642275676160LL);
                        arr_148 [i_10] [i_18] [i_39] [i_18] [i_42] = ((/* implicit */long long int) ((int) (_Bool)1));
                        arr_149 [i_10] [i_39] [i_39] [i_39] [i_42] [i_10] = ((/* implicit */int) arr_91 [i_27]);
                    }
                }
                var_70 = ((/* implicit */unsigned short) max((var_70), (((/* implicit */unsigned short) (+(508742027))))));
                var_71 = ((/* implicit */unsigned short) ((long long int) -1));
                /* LoopNest 2 */
                for (long long int i_43 = 1; i_43 < 23; i_43 += 3) 
                {
                    for (int i_44 = 0; i_44 < 24; i_44 += 4) 
                    {
                        {
                            var_72 = ((/* implicit */_Bool) max((var_72), (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (_Bool)1))))))));
                            var_73 = ((/* implicit */int) (!(((/* implicit */_Bool) 1662462891))));
                        }
                    } 
                } 
                arr_154 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_150 [i_10] [i_18] [i_27] [i_27]))));
            }
            arr_155 [(unsigned short)4] = ((/* implicit */unsigned short) ((((int) arr_152 [i_18] [i_10] [i_10] [i_10])) / (((int) arr_92 [i_10] [i_18]))));
        }
        /* LoopNest 3 */
        for (int i_45 = 3; i_45 < 23; i_45 += 1) 
        {
            for (_Bool i_46 = 1; i_46 < 1; i_46 += 1) 
            {
                for (signed char i_47 = 0; i_47 < 24; i_47 += 3) 
                {
                    {
                        var_74 &= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_126 [i_10] [i_10] [i_10] [i_10] [i_10]))) << (((((((((/* implicit */int) arr_74 [i_10] [i_10] [i_46] [i_46 - 1] [i_47] [i_47])) + (2147483647))) << (0))) - (2147483603)))));
                        arr_164 [i_46] [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_139 [i_10] [i_10] [i_10] [(_Bool)1] [i_10] [i_10] [i_10]);
                    }
                } 
            } 
        } 
    }
}
