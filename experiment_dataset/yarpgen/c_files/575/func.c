/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/575
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
    var_14 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((short)(-32767 - 1)), ((short)-29823)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_3)) : (var_8))), (((/* implicit */unsigned int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
        var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_4)))))) ? (var_13) : (((long long int) var_4))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (4870355308503167370LL) : (((/* implicit */long long int) var_8))))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((long long int) ((4870355308503167350LL) == (((/* implicit */long long int) (~(var_1))))))))));
                    }
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)114))))) ? (min((((/* implicit */int) var_11)), ((-(((/* implicit */int) arr_11 [i_3])))))) : (((/* implicit */int) ((((long long int) 658305787U)) == (var_0))))));
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35679)) ? (((/* implicit */int) (signed char)114)) : (1474898122))))));
                    var_21 = ((/* implicit */short) (+(var_9)));
                    var_22 |= (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_2 - 1]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_23 ^= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (7046692680466023824LL)))));
            var_24 = (signed char)16;
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (557905659U) : (var_10)))) ? (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) arr_11 [i_1 + 1]))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)9))))) | (arr_12 [i_1] [i_5] [i_1 + 1])))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1] [i_5] [(signed char)8] [i_1] [i_5])) >= (((/* implicit */int) (signed char)117))));
        }
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 4; i_7 < 11; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_1 - 1])) && (((/* implicit */_Bool) arr_11 [i_1 + 1])))) ? (((((/* implicit */_Bool) 2207111668U)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) arr_11 [i_1 - 1])))) : (((/* implicit */int) min((arr_11 [i_1 + 1]), (((/* implicit */unsigned short) var_6)))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            var_28 |= ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-56))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : ((-(2189225841U))))) == (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-65)))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)32767)))) - (var_3)))) ? ((-(((var_13) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */long long int) (((-(((/* implicit */int) var_11)))) + (((/* implicit */int) ((signed char) var_10))))))));
                        }
                        var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1] [i_7 - 2]))))), (((unsigned int) (~(var_9))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_12), (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (signed char)-117))))) || (((/* implicit */_Bool) arr_14 [i_7 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6] [i_7 + 1] [i_6] [i_6] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) arr_26 [i_8] [i_8] [5LL] [5LL] [i_6] [i_1 - 1])))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_2)))))));
            var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) -1790644284)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (7046692680466023839LL))), (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_19 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (3601533644U) : (2502048351U)))) : (arr_7 [i_1] [i_6])))));
        }
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_34 = ((/* implicit */unsigned int) (unsigned short)63481);
            var_35 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)30)), (var_4)));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(var_13)))) ? ((~(var_7))) : (((/* implicit */long long int) 2236773520U)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_1 - 1] [i_11])))))) : (((7046692680466023824LL) << (((((/* implicit */int) arr_19 [i_1])) - (16457)))))))));
                        var_37 = ((/* implicit */short) ((((((/* implicit */long long int) var_8)) != (4337594234610622627LL))) || (((/* implicit */_Bool) (~(4870355308503167370LL))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 3; i_13 < 10; i_13 += 4) 
        {
            for (unsigned int i_14 = 2; i_14 < 9; i_14 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned int) var_6);
                    var_39 -= ((/* implicit */unsigned int) (((~(arr_39 [i_1 + 1] [i_14]))) > (((/* implicit */int) var_6))));
                    var_40 += max((((((/* implicit */_Bool) arr_30 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1 - 1]))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (signed char)-71)), (arr_27 [i_1] [i_13 + 1] [i_13 + 2] [i_13] [i_14 + 3])))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_5)) : (var_0)))))));
                    var_41 = max((max((max((var_4), (arr_16 [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_1 + 1] [i_1] [i_14]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_8 [i_13] [i_13]))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1])))))));
                }
            } 
        } 
    }
    for (int i_15 = 2; i_15 < 13; i_15 += 4) 
    {
        var_42 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) (-(var_3))))), (((unsigned int) arr_46 [i_15 + 1] [i_15 + 2]))));
        var_43 = ((/* implicit */short) max((var_5), (((/* implicit */int) ((min((((/* implicit */long long int) var_12)), (var_13))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_15 + 2]))))))));
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4870355308503167364LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (-4337594234610622628LL)));
        var_45 = var_6;
    }
    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            var_46 = ((/* implicit */long long int) ((59467176) - ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_16])))))))));
            var_47 = arr_51 [i_17] [i_16];
        }
        /* vectorizable */
        for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 19; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 3; i_20 < 18; i_20 += 1) 
                {
                    var_48 = (~(((2199023255551LL) & (((/* implicit */long long int) var_2)))));
                    var_49 = ((/* implicit */signed char) (+(var_10)));
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_57 [i_20 - 2] [i_20 - 3] [i_20 - 2] [i_20] [i_20 - 1])) : (((/* implicit */int) (unsigned short)40154))));
                    var_51 = ((/* implicit */unsigned int) (~(arr_51 [13] [i_20 - 3])));
                }
                /* LoopSeq 2 */
                for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-8)) || (((/* implicit */_Bool) (signed char)16))));
                    var_53 = ((/* implicit */signed char) arr_51 [(signed char)2] [i_18]);
                }
                for (signed char i_22 = 1; i_22 < 16; i_22 += 4) 
                {
                    var_54 = (+(((((/* implicit */_Bool) -4337594234610622628LL)) ? (-2199023255551LL) : (2199023255555LL))));
                    var_55 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_52 [i_16] [i_22])))));
                    var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) ((arr_54 [(short)0] [i_19] [i_16]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [9U] [(signed char)13] [(signed char)13] [18U])) ? (3463787213U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))))))))));
                    var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) var_11))));
                }
            }
            var_58 -= ((/* implicit */unsigned short) -9223372036854775802LL);
        }
        for (long long int i_23 = 0; i_23 < 19; i_23 += 2) 
        {
            var_59 = ((/* implicit */unsigned int) min((var_59), (max((((((/* implicit */_Bool) 1726933307U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (var_8))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 1337385233)) >= (arr_54 [i_16] [i_16] [i_23]))))))));
            /* LoopSeq 3 */
            for (int i_24 = 0; i_24 < 19; i_24 += 4) /* same iter space */
            {
                var_60 = max((max((min((0U), (8388607U))), (var_2))), (((((/* implicit */_Bool) min(((signed char)-123), (arr_61 [i_23] [i_16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (min((464510508U), (((/* implicit */unsigned int) (signed char)-34)))))));
                /* LoopSeq 3 */
                for (signed char i_25 = 0; i_25 < 19; i_25 += 4) 
                {
                    var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_57 [i_16] [i_23] [i_24] [i_25] [i_16])), (var_9))), (((/* implicit */unsigned int) var_3))))) > ((-(7046692680466023824LL))))))));
                    var_62 = ((/* implicit */unsigned int) var_13);
                }
                for (long long int i_26 = 0; i_26 < 19; i_26 += 4) 
                {
                    var_63 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)40132))))) | ((-(4337594234610622608LL))));
                    var_64 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)55137)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_16] [i_16] [i_16] [i_16] [i_16]))) : (-4337594234610622608LL))) & (max((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_11)))))))));
                    var_65 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_70 [i_26] [i_24] [i_23] [i_16] [i_16]))) ? (max((3695752373U), (((/* implicit */unsigned int) (unsigned short)55686)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_70 [i_26] [i_26] [i_24] [i_23] [i_16])) < (var_4)))))));
                    var_66 -= ((/* implicit */long long int) 1040187392);
                }
                /* vectorizable */
                for (unsigned int i_27 = 1; i_27 < 17; i_27 += 4) 
                {
                    var_67 = ((/* implicit */short) (~(arr_73 [i_27 + 2])));
                    var_68 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -1040187392)) ? (-1) : (((/* implicit */int) (unsigned short)10393))));
                    var_69 |= ((/* implicit */short) ((-1) + (((/* implicit */int) ((signed char) var_3)))));
                }
                var_70 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_53 [i_24])) ? (var_4) : (((/* implicit */long long int) 2145705521))))))));
            }
            for (int i_28 = 0; i_28 < 19; i_28 += 4) /* same iter space */
            {
                var_71 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_3)))))))) : ((-(2145705515)))));
                var_72 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_8)) ? (-1500609541) : (1040187392))))) > (((int) var_2))));
                var_73 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1500609524)), (arr_50 [i_28] [i_28])))) ? (((((/* implicit */long long int) var_1)) & (arr_50 [i_16] [i_16]))) : (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_10) - (217667024U))))))));
            }
            for (int i_29 = 0; i_29 < 19; i_29 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_30 = 0; i_30 < 19; i_30 += 2) 
                {
                    var_74 = ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (2563098744U) : (((/* implicit */unsigned int) -2145705522))));
                    var_75 = ((/* implicit */unsigned int) min((var_75), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_16] [i_30])) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (-1025803989) : (((/* implicit */int) var_11))))))))));
                    var_76 = ((/* implicit */signed char) ((unsigned int) (+(var_3))));
                    var_77 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)29794)) & (((/* implicit */int) (short)-1))));
                }
                for (unsigned int i_31 = 1; i_31 < 16; i_31 += 3) 
                {
                    var_78 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_16] [i_23] [i_29] [i_29] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16128))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_23]))) : (((((/* implicit */_Bool) (short)32767)) ? (4294967295U) : (3378829029U)))))) ? ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -2145705521)) : (-4337594234610622603LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29879)) ? (((/* implicit */unsigned int) var_3)) : (var_2)))) ? (((/* implicit */long long int) (+(1040187392)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_8)) : (var_4)))))));
                    var_79 = ((/* implicit */signed char) (+(arr_79 [i_31 - 1] [i_16] [i_16])));
                }
                var_80 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (signed char)-12)) == (((/* implicit */int) arr_83 [i_16] [i_23] [i_29] [i_29])))));
                /* LoopSeq 2 */
                for (signed char i_32 = 0; i_32 < 19; i_32 += 4) 
                {
                    var_81 = ((/* implicit */int) 19U);
                    var_82 = max((((/* implicit */long long int) max((((/* implicit */unsigned int) max(((short)-29879), ((short)1868)))), (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) -1040187392))))))), (max((((/* implicit */long long int) arr_73 [i_23])), (max((((/* implicit */long long int) (short)-383)), (var_0))))));
                }
                for (signed char i_33 = 0; i_33 < 19; i_33 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_34 = 0; i_34 < 19; i_34 += 3) 
                    {
                        var_83 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (short)29801))) != (((((/* implicit */_Bool) -9223372036854775788LL)) ? (2145705521) : (var_3)))));
                        var_84 &= ((/* implicit */unsigned short) var_13);
                        var_85 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_95 [i_29] [i_23] [i_29] [(short)6] [i_34])) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) -2145705537)))) : (var_2)));
                    }
                    var_86 = ((/* implicit */signed char) max((var_86), (((/* implicit */signed char) ((((/* implicit */_Bool) 4337594234610622602LL)) ? ((+(((((/* implicit */_Bool) 2951041464456952670LL)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (short)1868)))))) : (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)65535)) : (2145705521))))))));
                    var_87 = ((/* implicit */long long int) 238381028);
                    var_88 = ((/* implicit */int) var_9);
                    var_89 = var_6;
                }
            }
        }
        var_90 |= ((/* implicit */long long int) ((unsigned int) 446805268U));
        var_91 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2145705501), (((/* implicit */int) (unsigned short)64516))))) ? (((/* implicit */long long int) (+(((int) 626183368))))) : (min(((~(var_13))), (((/* implicit */long long int) (+(var_5))))))));
        var_92 = ((/* implicit */signed char) var_2);
        /* LoopNest 3 */
        for (long long int i_35 = 1; i_35 < 18; i_35 += 2) 
        {
            for (short i_36 = 0; i_36 < 19; i_36 += 4) 
            {
                for (signed char i_37 = 0; i_37 < 19; i_37 += 1) 
                {
                    {
                        var_93 = ((((/* implicit */long long int) ((/* implicit */int) max((arr_60 [i_35 + 1] [i_35 - 1] [i_35] [i_35 - 1]), (arr_60 [i_35 + 1] [i_35 - 1] [i_35] [i_35 + 1]))))) & (((long long int) (~(var_7)))));
                        var_94 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29879)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)63389))))) - (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
                        var_95 = ((/* implicit */long long int) max((var_95), (((/* implicit */long long int) var_10))));
                        var_96 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_93 [i_16]))))), (4337594234610622608LL)));
                    }
                } 
            } 
        } 
    }
}
