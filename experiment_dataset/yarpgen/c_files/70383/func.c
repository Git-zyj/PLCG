/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70383
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
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)59776);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((int) -9199071862301329423LL));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (_Bool)1))));
            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1 - 2])), (arr_1 [(signed char)15] [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-123))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35880)) != (((/* implicit */int) (signed char)-62)))))));
            var_23 *= ((/* implicit */short) (unsigned short)35899);
        }
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (unsigned int i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]);
                        arr_16 [i_0] [i_3] [13ULL] [i_3] [i_5 + 1] = ((/* implicit */_Bool) var_0);
                        arr_17 [i_0] [i_0] [i_0] [(signed char)4] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((unsigned char) (unsigned char)234)));
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -9199071862301329441LL)) : (18446744073709551615ULL)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(9199071862301329422LL)))) ? (arr_9 [i_3 - 2] [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)13)))))))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])) : (var_15))))))))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 9199071862301329422LL))));
                            arr_26 [i_3] [i_7] [i_7] [i_3] [i_7] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) -3284515442307002740LL)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_6 [(short)16])))), (((/* implicit */int) ((((/* implicit */_Bool) -3284515442307002711LL)) || (((/* implicit */_Bool) arr_0 [i_6] [(unsigned char)2]))))))), (((/* implicit */int) arr_23 [i_0] [i_7]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1] [i_0] [i_9])))))));
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    for (short i_12 = 3; i_12 < 16; i_12 += 3) 
                    {
                        {
                            var_30 ^= ((/* implicit */int) -1LL);
                            var_31 ^= ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_32 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)38021))));
                var_33 |= ((/* implicit */unsigned char) (-((+(((((/* implicit */int) (signed char)126)) >> (((/* implicit */int) (_Bool)1))))))));
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_9 + 1] [i_9 + 1] [i_13])) ? ((~(((/* implicit */int) (unsigned short)29660)))) : (((/* implicit */int) (_Bool)1))));
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) : (312736636U)))) ? (5971030976484221197LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_15 = 4; i_15 < 15; i_15 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (+(-6810342260991159105LL))))));
                    var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_15 + 1] [i_14] [i_15 + 1]))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (~(3822626000U))))));
                    var_39 *= ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_15 - 2])) + (((/* implicit */int) arr_36 [i_15] [i_14] [i_14] [i_15] [i_15 - 2] [(_Bool)1] [i_17]))));
                    var_40 = (signed char)-65;
                    var_41 ^= ((/* implicit */long long int) ((unsigned short) 3822626004U));
                }
                for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        var_42 = ((/* implicit */int) arr_1 [i_19] [i_14]);
                        var_43 = ((/* implicit */unsigned int) arr_33 [i_14] [i_15 - 3] [16ULL] [16ULL]);
                    }
                    var_44 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) arr_47 [i_15 + 2] [i_15 - 4] [i_15 + 2] [i_15]))));
                    var_45 = ((/* implicit */unsigned long long int) var_1);
                }
                var_46 += ((/* implicit */short) ((long long int) ((long long int) (signed char)7)));
                var_47 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8105)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_15] [i_15 - 1])) : (((/* implicit */int) arr_34 [i_0] [(_Bool)1] [i_0] [i_15 - 3]))));
            }
            for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                arr_59 [i_14] [(signed char)15] = ((/* implicit */unsigned int) ((unsigned short) (signed char)(-127 - 1)));
                arr_60 [i_0] [i_14] [i_0] &= ((/* implicit */unsigned short) -9199071862301329422LL);
                arr_61 [i_20] [i_14] [i_20] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) (unsigned char)25)) ? (-9199071862301329425LL) : (((/* implicit */long long int) 3822626030U)))))) > (min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)55))))), (min((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL))))))));
                var_48 = ((/* implicit */short) arr_28 [i_0] [i_0]);
            }
            arr_62 [i_14] [i_14] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_28 [i_0] [i_0])))) >= (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) arr_55 [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned char)28)) : ((((_Bool)1) ? (((/* implicit */int) arr_52 [i_0] [9ULL] [i_14] [i_14] [(_Bool)0] [i_14])) : (((/* implicit */int) var_4))))))));
            var_49 = ((/* implicit */signed char) ((((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)62)), ((short)-5921)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)237))))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (3871725474U)))) ? (arr_54 [i_0] [i_0] [i_14] [i_0] [i_0]) : (max((549755813887LL), (((/* implicit */long long int) (short)7168))))))));
        }
        /* LoopSeq 4 */
        for (signed char i_21 = 3; i_21 < 17; i_21 += 2) 
        {
            arr_65 [i_0] [i_21] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 423241835U)) ? (max((((/* implicit */int) var_0)), (((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) arr_18 [(short)4] [(short)4] [i_21])))))) : (((/* implicit */int) arr_42 [i_0]))));
            /* LoopSeq 2 */
            for (long long int i_22 = 4; i_22 < 17; i_22 += 4) /* same iter space */
            {
                var_51 ^= ((/* implicit */unsigned short) max((((/* implicit */short) ((_Bool) 5971030976484221182LL))), ((short)32746)));
                var_52 *= ((/* implicit */signed char) (unsigned short)57120);
                var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)99)))))));
                var_54 = ((/* implicit */unsigned char) ((((long long int) arr_7 [i_22 - 2] [i_22 - 4] [i_22 - 4])) != (((/* implicit */long long int) max((((/* implicit */int) var_11)), (arr_8 [i_21 + 1] [i_21 - 1]))))));
            }
            /* vectorizable */
            for (long long int i_23 = 4; i_23 < 17; i_23 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    arr_75 [i_23] [i_23] [i_23] = ((/* implicit */unsigned long long int) arr_46 [(signed char)13] [i_21 - 2] [(signed char)13]);
                    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_69 [i_0] [i_21 - 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (-3113834225497065093LL))))))));
                    var_56 += ((/* implicit */short) arr_29 [i_0]);
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) ((arr_66 [i_0] [i_23 - 3] [i_25] [i_25]) | (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    var_58 *= ((/* implicit */signed char) arr_56 [i_0] [i_0] [i_23] [i_0]);
                    arr_78 [i_0] = ((/* implicit */unsigned int) arr_72 [16ULL] [(_Bool)1] [i_23] [(_Bool)1] [(_Bool)1]);
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) arr_52 [i_23 + 1] [i_23 + 1] [(signed char)4] [i_23 - 4] [i_23] [i_0]))));
                    arr_81 [i_0] [i_0] [i_0] [i_0] [i_23 - 4] [i_0] = ((/* implicit */unsigned char) arr_12 [i_21]);
                    var_60 += ((/* implicit */signed char) ((arr_51 [i_23] [i_21 - 2]) | (arr_51 [i_0] [i_21 - 3])));
                    var_61 = ((/* implicit */short) ((arr_76 [i_21] [i_26]) * (((/* implicit */unsigned long long int) 8733715807792159042LL))));
                    var_62 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 423241821U)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (unsigned char)242))))));
                }
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 18; i_27 += 1) 
                {
                    for (long long int i_28 = 0; i_28 < 18; i_28 += 4) 
                    {
                        {
                            var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
                            arr_88 [i_0] [i_0] [0U] [0U] = ((/* implicit */long long int) 2768744134390755691ULL);
                            arr_89 [i_0] = ((/* implicit */unsigned int) ((unsigned char) 3075572372177115207LL));
                        }
                    } 
                } 
            }
            arr_90 [i_0] [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_21 - 1] [i_21] [i_0]))));
        }
        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
        {
            var_64 |= ((/* implicit */long long int) arr_71 [i_0] [i_0] [i_0] [i_29]);
            /* LoopSeq 1 */
            for (long long int i_30 = 0; i_30 < 18; i_30 += 3) 
            {
                var_65 += ((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_29 - 1] [i_29 - 1]);
                var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-5077062719126738294LL) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (52)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)242)))))) : (((/* implicit */int) ((_Bool) arr_94 [i_0] [i_29 - 1] [i_0] [i_0])))));
                arr_95 [i_0] [i_29 - 1] [i_30] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (signed char)-69)))));
                var_67 ^= ((/* implicit */short) arr_82 [i_29 - 1]);
                var_68 += ((/* implicit */long long int) ((unsigned long long int) arr_57 [i_30] [i_30] [i_29] [i_0]));
            }
            /* LoopNest 3 */
            for (signed char i_31 = 0; i_31 < 18; i_31 += 4) 
            {
                for (signed char i_32 = 4; i_32 < 17; i_32 += 4) 
                {
                    for (unsigned int i_33 = 0; i_33 < 18; i_33 += 4) 
                    {
                        {
                            arr_106 [i_0] [i_29] [i_31] [i_32 + 1] [i_33] = ((/* implicit */long long int) (~(var_12)));
                            var_69 *= ((/* implicit */unsigned short) 5077062719126738305LL);
                            var_70 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_101 [i_0] [i_0] [i_29 - 1] [(short)7] [(unsigned short)17] [i_33])) >= (((/* implicit */int) (signed char)-22)))) ? (((/* implicit */int) arr_15 [i_31] [i_31] [i_31] [i_31])) : (((/* implicit */int) max(((signed char)-63), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1LL)) == (530574327411546034ULL)))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            arr_109 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28544)) ? (3948834908742986490LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))));
            var_71 = ((/* implicit */short) min((var_71), (((/* implicit */short) max(((~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)30)), ((unsigned short)63841)))))), (((/* implicit */int) (!(arr_38 [i_34] [i_34])))))))));
            arr_110 [i_0] [i_0] &= (((+(arr_56 [i_0] [i_34] [i_34] [i_34]))) >= (((((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (arr_32 [i_0] [i_0] [i_34] [i_0] [i_34]))));
            var_72 &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)121))));
        }
        for (unsigned short i_35 = 0; i_35 < 18; i_35 += 4) 
        {
            var_73 ^= ((/* implicit */long long int) (+(((((/* implicit */int) arr_18 [i_0] [i_35] [i_35])) >> (((((/* implicit */int) arr_33 [i_35] [i_35] [i_0] [i_0])) + (99)))))));
            var_74 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
        }
    }
    var_75 = ((/* implicit */unsigned int) (signed char)-20);
}
