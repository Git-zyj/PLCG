/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60833
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) var_12);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3174240919U)) ? (min((((/* implicit */long long int) (_Bool)1)), ((~(-4383099828185771792LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((long long int) var_4)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_19 *= ((/* implicit */int) (_Bool)1);
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((((arr_6 [(_Bool)1] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) 2147483647)) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)12] [i_2]))) : (-7089675274096069583LL)))));
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) 4719790323849940293LL);
                var_23 = ((/* implicit */long long int) var_7);
                var_24 = ((/* implicit */_Bool) arr_5 [i_2]);
            }
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-7089675274096069571LL)));
                var_26 = (~(((/* implicit */int) var_7)));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    var_27 = ((/* implicit */int) ((long long int) (_Bool)1));
                    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_4] [16U])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_1] [i_2] [i_4] [i_4] [i_5]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (-2147483647))))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_12 [i_1] [i_2] [i_5]) : (((/* implicit */long long int) var_16))));
                }
                for (long long int i_6 = 4; i_6 < 16; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_30 = var_4;
                        var_31 = var_4;
                        var_32 = var_12;
                        var_33 ^= ((/* implicit */long long int) (-(var_13)));
                    }
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_35 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_6 - 1]))));
                    }
                    var_36 = ((/* implicit */int) ((3142878287U) * (((/* implicit */unsigned int) arr_4 [i_6]))));
                    var_37 = var_13;
                }
                for (long long int i_9 = 2; i_9 < 17; i_9 += 4) 
                {
                    var_38 = ((/* implicit */int) ((((((/* implicit */_Bool) 2387298981610085932LL)) || (((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_4] [i_9])))) ? (arr_19 [i_9 - 1] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [3U] [(unsigned short)11])) ? (((/* implicit */int) (_Bool)1)) : (var_5))))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_9 - 1])) : (((/* implicit */int) arr_15 [i_9 + 1]))));
                    var_40 &= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) & (var_2));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_41 = ((/* implicit */signed char) var_2);
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_9] [i_1] [i_9 - 2] [i_9] [i_2])) ? (arr_13 [i_10] [i_2] [i_9 + 1] [i_9] [i_10]) : (arr_13 [8] [(signed char)6] [i_9 - 2] [i_9] [i_10])));
                        var_43 = arr_8 [i_9 - 2] [i_9 - 1] [i_9 - 1];
                        var_44 = ((/* implicit */signed char) ((arr_11 [i_9 - 1]) ? (arr_13 [i_1] [(signed char)1] [i_4] [i_9 + 1] [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_4])) ? (var_8) : (((/* implicit */int) var_0)))))));
                    }
                }
                var_45 = ((/* implicit */long long int) var_13);
            }
            var_46 = ((/* implicit */signed char) ((long long int) 4196558788U));
            var_47 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)54))));
        }
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
        {
            var_48 = ((/* implicit */_Bool) ((((751191902) << (((3658191701U) - (3658191700U))))) ^ (-1)));
            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) var_7))));
        }
        for (signed char i_12 = 3; i_12 < 15; i_12 += 1) 
        {
            var_50 = arr_23 [0] [i_12 + 1] [i_1] [0];
            var_51 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-6)) ? (-2402823031631976386LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_52 = (((+(((/* implicit */int) var_6)))) & (var_9));
            var_53 = ((/* implicit */long long int) ((arr_23 [i_12 + 2] [i_12 - 1] [i_12 + 1] [i_12 - 3]) + ((-(((/* implicit */int) arr_18 [i_1] [i_1] [(unsigned char)0] [i_12] [i_12]))))));
        }
        for (unsigned int i_13 = 1; i_13 < 16; i_13 += 1) 
        {
            var_54 = ((unsigned int) 261472276);
            var_55 ^= ((int) 2011005207U);
            /* LoopSeq 3 */
            for (unsigned int i_14 = 3; i_14 < 17; i_14 += 2) 
            {
                var_56 = ((/* implicit */unsigned int) var_7);
                var_57 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 4611686018427387903LL)) || (((/* implicit */_Bool) var_9)))));
                var_58 = ((/* implicit */int) ((_Bool) arr_25 [i_1]));
            }
            for (long long int i_15 = 3; i_15 < 14; i_15 += 1) 
            {
                var_59 = (-(arr_26 [i_13 - 1] [i_13 + 2] [i_13 + 1] [i_13 - 1]));
                var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (signed char)2))));
                var_61 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_5)) : (var_10))) & (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                var_62 = ((/* implicit */unsigned int) arr_35 [(signed char)7] [i_13] [i_13] [i_15]);
            }
            for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                var_63 = ((/* implicit */unsigned int) min((var_63), (var_2)));
                var_64 = ((/* implicit */_Bool) ((arr_45 [i_1] [i_1] [i_13 - 1] [i_16]) - (arr_45 [i_1] [15] [i_13 - 1] [i_16])));
                var_65 = ((/* implicit */signed char) ((int) var_6));
                var_66 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned int) 220825136)) : (545397374U)));
                /* LoopSeq 3 */
                for (int i_17 = 3; i_17 < 17; i_17 += 2) /* same iter space */
                {
                    var_67 ^= ((/* implicit */int) arr_12 [3U] [i_13] [i_13 + 2]);
                    var_68 = ((var_14) - (((/* implicit */long long int) var_15)));
                }
                for (int i_18 = 3; i_18 < 17; i_18 += 2) /* same iter space */
                {
                    var_69 = ((/* implicit */unsigned int) arr_46 [i_13 + 2] [i_18 - 3]);
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 2; i_19 < 16; i_19 += 3) /* same iter space */
                    {
                        var_70 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) (unsigned char)214))));
                        var_72 = ((/* implicit */signed char) ((var_3) ? (((/* implicit */long long int) -914515984)) : (arr_41 [i_13 + 2] [i_13] [i_19 + 2])));
                    }
                    for (unsigned int i_20 = 2; i_20 < 16; i_20 += 3) /* same iter space */
                    {
                        var_73 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -751191903)) ? (-3165462368164020381LL) : (((/* implicit */long long int) arr_23 [i_1] [(signed char)1] [i_16] [i_20]))))));
                        var_74 = ((/* implicit */int) ((_Bool) ((int) -1506555916)));
                        var_75 = ((/* implicit */unsigned int) (~(-3194615764945302109LL)));
                        var_76 = (~(((/* implicit */int) arr_18 [i_13 - 1] [i_18 + 1] [i_20 + 2] [i_20] [i_20])));
                    }
                    for (unsigned int i_21 = 2; i_21 < 16; i_21 += 3) /* same iter space */
                    {
                        var_77 = ((/* implicit */signed char) (~(arr_16 [i_21 - 2] [i_18] [i_18 - 2] [i_13 + 1])));
                        var_78 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_55 [i_1] [i_1] [10U] [i_18 - 1] [i_21 - 2] [i_21 + 1]))));
                        var_79 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-39)) + (((/* implicit */int) ((((/* implicit */_Bool) -3194615764945302125LL)) || (((/* implicit */_Bool) -2387298981610085932LL)))))));
                        var_80 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_51 [i_21] [i_18 + 1] [(signed char)4] [i_13 - 1] [i_1]))));
                        var_81 = ((arr_18 [i_18 - 1] [i_13] [i_16] [i_18 + 1] [i_16]) ? (2147483647) : (((/* implicit */int) arr_14 [i_13 - 1] [i_18 - 3] [i_21 + 2] [2LL])));
                    }
                }
                for (int i_22 = 3; i_22 < 17; i_22 += 2) /* same iter space */
                {
                    var_82 = ((/* implicit */signed char) (!((_Bool)0)));
                    var_83 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_13)) ? (var_8) : (var_4)))));
                }
            }
        }
        /* LoopNest 2 */
        for (long long int i_23 = 1; i_23 < 16; i_23 += 2) 
        {
            for (signed char i_24 = 0; i_24 < 18; i_24 += 2) 
            {
                {
                    var_84 = ((/* implicit */int) ((arr_51 [i_1] [i_23 + 1] [i_24] [i_24] [(signed char)13]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    var_85 = (~(((/* implicit */int) ((signed char) var_14))));
                    var_86 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -751191902)) ? (-4784403845749463883LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_87 = ((/* implicit */long long int) (!((_Bool)0)));
                        var_88 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_23 - 1] [i_23 - 1] [i_23 - 1])) ? (arr_64 [i_23] [i_23 + 1]) : (((/* implicit */long long int) arr_29 [i_23 + 1] [i_23 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 3; i_26 < 16; i_26 += 1) 
                        {
                            var_89 = (~(((/* implicit */int) var_11)));
                            var_90 = ((/* implicit */signed char) var_16);
                        }
                        for (int i_27 = 3; i_27 < 15; i_27 += 1) 
                        {
                            var_91 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 467151087U)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)242)))) : ((~(((/* implicit */int) (signed char)-25))))));
                            var_92 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8548509904708326747LL)) ? (arr_22 [i_23 + 2] [i_23] [3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_93 = ((/* implicit */int) (+(-4784403845749463883LL)));
                            var_94 &= ((/* implicit */_Bool) ((((var_5) + (2147483647))) >> (((((/* implicit */int) (signed char)-81)) + (89)))));
                            var_95 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_27 - 3] [i_25] [i_24] [i_1])) || (((/* implicit */_Bool) var_16))));
                        }
                    }
                }
            } 
        } 
    }
    var_96 = ((/* implicit */unsigned int) min((var_96), (((/* implicit */unsigned int) var_8))));
    var_97 = ((/* implicit */unsigned int) var_7);
}
