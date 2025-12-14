/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69954
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
    var_20 = ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10));
    var_21 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) (signed char)120);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1343486330)))))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (+(arr_4 [i_0] [5])));
            arr_7 [21] [i_0] [(_Bool)1] = ((/* implicit */int) ((long long int) var_10));
            var_24 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0])) && (var_16))))) / (127LL)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 24; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min(((signed char)36), (((signed char) arr_10 [i_3 + 1] [i_3 + 1] [i_0]))));
                        var_27 = arr_1 [1LL] [i_0];
                        /* LoopSeq 3 */
                        for (signed char i_5 = 2; i_5 < 24; i_5 += 2) 
                        {
                            var_28 = (((((!(var_13))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_4])) >= (((/* implicit */int) (signed char)17))))))) / ((+(((/* implicit */int) arr_17 [i_5 - 2] [(signed char)13] [i_5 - 2])))));
                            arr_18 [(_Bool)1] [i_2] [(signed char)14] [i_4] [i_0] = (signed char)36;
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [11] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_3] [i_3 - 1] [i_0])) >= (-2974487109806276332LL))))));
                            arr_23 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) min((var_2), (((/* implicit */signed char) (_Bool)1))))) & (((/* implicit */int) (signed char)36))));
                            var_29 = ((/* implicit */int) var_6);
                            arr_24 [i_2] [i_2] [13] [i_0] [i_2] = (~(((/* implicit */int) var_2)));
                            var_30 *= arr_15 [(_Bool)1] [(signed char)10] [24LL] [(_Bool)1];
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_31 -= ((/* implicit */long long int) arr_2 [i_7] [i_4]);
                            var_32 *= ((/* implicit */_Bool) 2801590459126682046LL);
                            var_33 = ((/* implicit */_Bool) (signed char)36);
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_27 [i_2] [i_3] [i_7] [i_3 - 1] [i_3] [i_4] [(signed char)0]))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 2; i_10 < 24; i_10 += 2) 
                {
                    arr_35 [i_0] = ((/* implicit */_Bool) arr_29 [i_8] [i_0] [i_8 + 2]);
                    var_35 = ((/* implicit */int) (signed char)76);
                }
                arr_36 [i_0] [(signed char)4] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_18)), (min((var_19), (arr_26 [19LL] [22] [i_0] [2] [i_0] [i_9]))))) / (((/* implicit */long long int) 626870632))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 2; i_12 < 24; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_8] [i_8])) ^ (arr_8 [i_8 - 1] [i_8] [i_8 + 2])));
                        var_37 = ((/* implicit */long long int) var_11);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) var_10))));
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-36)) % (((/* implicit */int) (signed char)1)))))));
                        var_40 = ((/* implicit */long long int) (_Bool)1);
                    }
                    var_41 = ((/* implicit */_Bool) arr_0 [i_0] [i_8 - 1]);
                    /* LoopSeq 2 */
                    for (signed char i_14 = 3; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_43 = ((/* implicit */int) ((_Bool) arr_10 [i_8 - 1] [i_8] [i_0]));
                        arr_45 [i_0] [6] [i_9] [i_11] [i_0] = ((/* implicit */signed char) 9223372036854775807LL);
                    }
                    for (signed char i_15 = 3; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */long long int) arr_47 [i_15] [(_Bool)1] [i_15] [i_15] [5] [i_15 + 2] [i_15]);
                        var_45 = ((/* implicit */int) ((((/* implicit */int) var_17)) <= (var_12)));
                    }
                    arr_49 [i_0] [i_11] [i_9] [20LL] [i_11] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_0 [i_0] [i_8 - 1])))) ? (arr_0 [i_0] [i_8 + 1]) : (((long long int) var_15))));
                    var_46 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [(signed char)6] [(signed char)6] [(_Bool)1]))) & (var_5)));
                }
                var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) var_8))));
            }
            for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                arr_52 [16LL] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 281474976710655LL))) ? (((/* implicit */int) (_Bool)1)) : (max((var_14), ((-(-1041429892)))))));
                var_48 = ((/* implicit */long long int) (signed char)-37);
                var_49 = (signed char)4;
            }
            var_50 = ((/* implicit */long long int) arr_48 [i_8] [i_8] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_18 = 4; i_18 < 23; i_18 += 1) 
                {
                    var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((arr_56 [(signed char)7] [i_18] [(_Bool)1] [i_8] [i_0] [i_0]), (((/* implicit */long long int) var_14)))) << (((((int) 1006168644016922073LL)) - (46390732)))))))))));
                    arr_59 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-78))));
                    arr_60 [i_0] [i_8] [i_17] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_11 [i_0] [i_0]), (arr_9 [(signed char)2] [(signed char)14]))))));
                }
                arr_61 [i_0] [i_8] [i_0] = min((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0]))))), (((((/* implicit */_Bool) 274877906432LL)) ? (-8264624755482399300LL) : (-8088710959181776516LL))));
            }
            arr_62 [i_0] = ((signed char) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0] [i_8 - 1])) : (((/* implicit */int) arr_9 [i_8] [i_8 + 1]))));
            var_52 = ((/* implicit */_Bool) max((var_52), (((((arr_50 [i_0] [20] [19] [i_0]) / ((~(var_11))))) > (((((((/* implicit */_Bool) 752035506201778700LL)) || (var_13))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 348663315879750018LL)) ? (((/* implicit */int) (_Bool)0)) : (1727561411)))))))));
        }
    }
    for (int i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        var_53 *= (!(((/* implicit */_Bool) (~(-348663315879750018LL)))));
        var_54 = ((/* implicit */int) 4742566208883909883LL);
        arr_66 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-1252578255) : (((/* implicit */int) ((((/* implicit */_Bool) 2079378216443021436LL)) || (((/* implicit */_Bool) var_14)))))))) ? ((~((~(var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        /* LoopSeq 3 */
        for (signed char i_20 = 4; i_20 < 12; i_20 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_27 [22LL] [8] [(_Bool)1] [i_20] [i_20] [i_21] [i_21]))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_56 [5] [5] [i_21] [(signed char)6] [i_20 + 1] [19])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) ((((/* implicit */long long int) var_11)) <= (var_4)))), (max((6348897028061265742LL), (((/* implicit */long long int) var_2)))))))))));
                var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((((((/* implicit */int) arr_34 [20])) + (2147483647))) << (((729720818) - (729720818))))) * (((/* implicit */int) var_13))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((long long int) arr_33 [24])))))))));
                var_57 &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1009913553))))) >> (((/* implicit */int) max((((/* implicit */signed char) arr_67 [1] [i_20 - 2])), (var_0))))));
                var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((int) (_Bool)1)))));
                var_59 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_75 [i_19] [i_19] [i_19] [i_19] = max((4113889689266777089LL), (752035506201778700LL));
                arr_76 [i_19] = ((/* implicit */_Bool) ((long long int) 2468917806347557518LL));
            }
            arr_77 [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */long long int) arr_29 [i_19] [i_19] [i_20 + 1])) != (-6348897028061265742LL)));
        }
        for (int i_23 = 2; i_23 < 13; i_23 += 1) 
        {
            arr_82 [i_19] = ((/* implicit */long long int) arr_27 [(_Bool)1] [(signed char)6] [i_19] [3] [i_19] [6LL] [15LL]);
            /* LoopSeq 3 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
            {
                arr_87 [i_19] [i_19] = ((/* implicit */int) var_1);
                var_60 = ((/* implicit */signed char) (_Bool)1);
                var_61 = (~(((/* implicit */int) max((arr_53 [1] [i_23 - 1] [i_23 - 2] [i_19]), ((!(((/* implicit */_Bool) -274877906432LL))))))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_26 = 4; i_26 < 12; i_26 += 4) 
                {
                    arr_92 [i_19] [i_23] [i_25] [i_26] = (!(((/* implicit */_Bool) arr_46 [i_26] [i_26 - 2] [i_26 - 4] [i_26] [i_26] [(signed char)7])));
                    var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6348897028061265742LL)) ? (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_1))))) : (arr_91 [i_19] [i_23] [9] [i_26 - 2] [i_25] [i_23 + 1])));
                    arr_93 [i_26] [(_Bool)1] [i_26] [(_Bool)1] [(_Bool)1] [i_26] |= ((/* implicit */int) arr_43 [i_26] [i_26] [(_Bool)1] [i_23] [i_19]);
                }
                for (long long int i_27 = 0; i_27 < 14; i_27 += 2) 
                {
                    var_63 = ((/* implicit */int) (signed char)-32);
                    var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) (-(0LL))))));
                }
                for (int i_28 = 2; i_28 < 12; i_28 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_29 = 2; i_29 < 12; i_29 += 1) 
                    {
                        var_65 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)81))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5402648634505944417LL))))) : (((/* implicit */int) (signed char)1))));
                        var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_19] [i_19] [i_25] [i_28])))))));
                    }
                    for (long long int i_30 = 0; i_30 < 14; i_30 += 3) /* same iter space */
                    {
                        var_67 = ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
                        var_68 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) min(((_Bool)0), (var_13)))))));
                    }
                    for (long long int i_31 = 0; i_31 < 14; i_31 += 3) /* same iter space */
                    {
                        var_69 = ((/* implicit */long long int) min((var_69), (min((7192418211395549830LL), (((/* implicit */long long int) (_Bool)0))))));
                        arr_109 [i_19] [i_23] [i_19] [i_28] [i_31] = ((/* implicit */int) (signed char)-72);
                        arr_110 [i_19] [i_19] [i_25] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (((var_13) ? (-6348897028061265742LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_19] [i_19] [i_25] [i_28] [(signed char)3] [i_31])))))))) >> (((var_14) - (1748158961)))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        arr_114 [(signed char)2] [(signed char)2] [i_19] = arr_42 [i_19] [(_Bool)1] [8LL] [i_19] [3];
                        var_70 = ((/* implicit */long long int) min((var_70), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (((~((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_89 [i_19] [i_23] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-3)))))))))))));
                        arr_115 [i_19] [i_19] [i_19] [4LL] [9] = ((/* implicit */int) ((long long int) min(((-(-1733658263))), (((/* implicit */int) (_Bool)1)))));
                        var_71 = ((/* implicit */int) max((var_71), (max((((/* implicit */int) (_Bool)1)), (arr_10 [i_23 - 2] [(_Bool)1] [(_Bool)1])))));
                    }
                    for (signed char i_33 = 0; i_33 < 14; i_33 += 1) 
                    {
                        var_72 += ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
                        arr_120 [i_19] = ((/* implicit */_Bool) var_5);
                    }
                    /* vectorizable */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_73 = ((((/* implicit */int) var_9)) ^ (arr_108 [i_34] [i_28 + 2] [i_25] [i_23 - 2] [(signed char)11]));
                        arr_124 [i_19] [i_19] [i_23] [i_23] [i_23] [i_19] [0LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_35 = 0; i_35 < 14; i_35 += 3) 
                    {
                        arr_127 [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0LL))));
                        var_74 &= (-(min((var_19), (3046781413638634275LL))));
                        arr_128 [i_19] [i_19] [i_25] [(_Bool)1] [i_19] = ((signed char) max((((((/* implicit */_Bool) arr_86 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)116)))), (((/* implicit */int) arr_86 [i_23 + 1] [i_23] [i_23] [(_Bool)1]))));
                        var_75 ^= ((/* implicit */int) var_13);
                    }
                    arr_129 [i_19] = ((/* implicit */int) (!(((4014240036895207140LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_37 = 1; i_37 < 11; i_37 += 3) /* same iter space */
                    {
                        arr_134 [i_19] [i_25] [i_23] [i_19] = var_7;
                        arr_135 [(_Bool)1] [i_36] [i_19] [i_19] [7] [i_19] = var_9;
                    }
                    /* vectorizable */
                    for (int i_38 = 1; i_38 < 11; i_38 += 3) /* same iter space */
                    {
                        arr_140 [(signed char)9] [i_19] = ((/* implicit */signed char) ((((-7192418211395549831LL) + (9223372036854775807LL))) >> (((arr_25 [i_19] [(_Bool)1] [i_19] [i_23] [i_23 + 1]) + (999272382)))));
                        var_76 = (_Bool)1;
                    }
                    for (int i_39 = 1; i_39 < 11; i_39 += 3) /* same iter space */
                    {
                        var_77 = ((/* implicit */int) max((var_77), ((~(var_11)))));
                        var_78 |= ((/* implicit */long long int) ((((/* implicit */int) arr_84 [i_19] [i_23] [i_19] [i_36])) - (((/* implicit */int) (signed char)31))));
                        arr_143 [i_19] [i_23] [i_23] = ((/* implicit */_Bool) 1272640254);
                        var_79 = ((/* implicit */long long int) max((var_79), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_40 [i_23] [i_23] [i_36] [i_39 - 1] [(signed char)16] [i_39])))) ^ (((((/* implicit */int) arr_133 [i_36] [i_36] [i_39] [i_39 + 1] [i_39] [i_39])) - (((/* implicit */int) arr_40 [i_23] [i_23 - 1] [(_Bool)1] [i_39 - 1] [i_39] [i_39 - 1])))))))));
                    }
                    var_80 = ((/* implicit */signed char) max((var_80), (((/* implicit */signed char) (+((+(((/* implicit */int) var_6)))))))));
                }
            }
            for (long long int i_40 = 0; i_40 < 14; i_40 += 1) 
            {
                var_81 = ((/* implicit */signed char) max((max((((/* implicit */int) arr_122 [i_23 + 1] [i_23 - 2])), (arr_31 [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_23 - 1]))), (-582897444)));
                var_82 = var_9;
            }
            arr_147 [i_19] [i_19] = ((((long long int) arr_106 [(_Bool)1] [i_19] [i_23 - 2] [i_23 - 2] [i_23 + 1])) | (((/* implicit */long long int) ((((/* implicit */int) arr_98 [i_23 - 2] [4LL] [i_19])) ^ (((/* implicit */int) arr_98 [i_23] [(signed char)3] [i_19]))))));
        }
        for (int i_41 = 0; i_41 < 14; i_41 += 1) 
        {
            var_83 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_119 [i_19] [i_41] [i_41] [(_Bool)1] [i_41] [8LL] [i_19]))));
            var_84 = ((/* implicit */_Bool) ((long long int) var_4));
        }
    }
    var_85 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-117))));
}
