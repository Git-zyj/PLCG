/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84222
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
    var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), (((((/* implicit */int) var_8)) & (((/* implicit */int) var_13))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_6 [i_0])))));
                var_17 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))));
                var_18 = ((/* implicit */unsigned char) (!((_Bool)1)));
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(var_7)));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_1] [i_1] [i_5]))));
                            var_20 = ((/* implicit */long long int) (((-(15438178024523123370ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))))));
                            var_21 ^= ((/* implicit */unsigned int) var_0);
                            var_22 = ((/* implicit */short) (unsigned char)192);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 ^= 5826238104534330956LL;
                            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((15438178024523123370ULL) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775788LL))) + (42LL)))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 7094149548614879338LL)) * (arr_23 [i_0] [i_0] [i_3] [i_6])));
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)44))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned char i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_0])))) <= (((/* implicit */int) ((unsigned short) arr_26 [i_0] [i_0] [i_0])))));
                            var_25 = ((/* implicit */_Bool) (~(arr_15 [i_10 + 1] [i_9 - 2] [i_10 + 1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) (short)-18823)) : (((/* implicit */int) (unsigned char)190)))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        var_28 = ((/* implicit */signed char) ((unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]));
                    }
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_8]))));
                }
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))) | (arr_22 [i_1] [i_1] [i_0] [i_1] [i_0])))));
            }
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_0])))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_33 ^= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) 3008566049186428245ULL)))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 9; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) -6971181701255192259LL);
                            var_35 = ((/* implicit */_Bool) (-(arr_21 [i_15] [i_15] [i_15] [i_0] [i_15])));
                        }
                    } 
                } 
                var_36 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (unsigned char)15)))));
            }
        }
        for (short i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_17] [i_17] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_18 = 2; i_18 < 11; i_18 += 1) /* same iter space */
            {
                arr_57 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))));
                arr_58 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((2040) <= (((/* implicit */int) arr_30 [i_17] [i_17]))))) : ((~(((/* implicit */int) arr_32 [i_0])))));
                arr_59 [i_0] = ((/* implicit */short) (!((_Bool)1)));
                var_38 = ((/* implicit */_Bool) ((short) -4331838145424012896LL));
            }
            for (unsigned char i_19 = 2; i_19 < 11; i_19 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_20 = 2; i_20 < 8; i_20 += 3) /* same iter space */
                {
                    arr_66 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_42 [i_0])) ? (((/* implicit */int) arr_31 [i_19 - 1] [i_0] [i_19 - 1])) : (((/* implicit */int) (unsigned char)24)));
                    var_39 = ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) (+((-(-3010480694382441474LL)))));
                        arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) : (-8613780212360546553LL)))));
                        var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1097583114617778668LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66)))))) ? (((((/* implicit */_Bool) -6971181701255192239LL)) ? (arr_54 [i_21] [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (-(8307861883964983686LL))))));
                        var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_0]))));
                    }
                    arr_70 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_19 - 1])) >> (((-1000419328) + (1000419340)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_0] [i_0] [i_19 - 1])) + (2147483647))) >> (((-1000419328) + (1000419340))))));
                }
                for (unsigned char i_22 = 2; i_22 < 8; i_22 += 3) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned short) (-(var_5)));
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        var_44 ^= ((/* implicit */unsigned char) ((((int) (unsigned short)39130)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_17] [i_17] [i_17])))))));
                        arr_77 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 8613780212360546552LL);
                        var_45 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_76 [i_0] [i_0] [i_0] [i_0] [i_17])) ? (((/* implicit */unsigned long long int) 4620527813508257057LL)) : (0ULL)));
                    }
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-7094149548614879338LL) : (8613780212360546552LL)));
                    /* LoopSeq 2 */
                    for (signed char i_24 = 4; i_24 < 8; i_24 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) arr_32 [i_0]);
                        var_48 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_19 [i_17] [i_17] [i_17] [i_17]))))));
                    }
                    for (unsigned short i_25 = 1; i_25 < 8; i_25 += 4) 
                    {
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_80 [i_19] [i_19] [i_19] [i_19 - 2] [i_19 - 2] [i_19 - 2] [i_19 - 2])) ? (arr_74 [i_0] [i_17] [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 33554431ULL)) ? (((/* implicit */int) arr_13 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_17 [i_17] [i_17] [i_17]))))))))));
                        var_50 ^= ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)42898)))) + ((+(((/* implicit */int) (short)-3069))))));
                    }
                    arr_82 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_22 + 2] [i_22 - 2] [i_22 - 2] [i_22 + 2] [i_0]))));
                }
                arr_83 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
                /* LoopSeq 2 */
                for (long long int i_26 = 1; i_26 < 10; i_26 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (6971181701255192239LL) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_52 ^= ((/* implicit */signed char) ((unsigned int) (unsigned char)122));
                        var_53 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                        arr_89 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_47 [i_26 + 1] [i_26 + 1] [i_19] [i_19]))));
                    }
                    for (unsigned char i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        arr_93 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_87 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_94 [i_17] [i_0] [i_0] [i_17] = arr_15 [i_0] [i_0] [i_0];
                        arr_95 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))));
                        arr_96 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_28] [i_26 - 1] [i_26 - 1] [i_28] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_2))))) : (var_7)));
                    }
                    for (short i_29 = 0; i_29 < 12; i_29 += 4) 
                    {
                        var_55 = ((/* implicit */signed char) arr_84 [i_0]);
                        arr_101 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) - (7094149548614879338LL))));
                    }
                    var_56 ^= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_12)))));
                    var_57 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8620243557525143281LL))));
                    /* LoopSeq 2 */
                    for (long long int i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        arr_104 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_19])) ? (arr_39 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (arr_23 [i_17] [i_19 - 1] [i_17] [i_17])));
                        var_58 = ((/* implicit */unsigned short) (+(arr_103 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_105 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1000419327)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3))))));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) -1000419338))))))));
                        arr_109 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65503))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96))))));
                    }
                    var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_76 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_108 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                }
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 3) 
                {
                    var_61 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0]))));
                    var_62 = ((/* implicit */unsigned char) arr_85 [i_0] [i_0] [i_0] [i_0]);
                }
                /* LoopNest 2 */
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (signed char i_34 = 1; i_34 < 11; i_34 += 3) 
                    {
                        {
                            var_63 = ((/* implicit */signed char) (unsigned char)108);
                            arr_119 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_74 [i_34] [i_0] [i_0] [i_34] [i_34 - 1] [i_0]));
                            arr_120 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_87 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_121 [i_0] [i_0] [i_0] [i_0] = (_Bool)0;
            }
            var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) ((short) arr_10 [i_0] [i_0] [i_0] [i_0])))));
            arr_122 [i_0] [i_0] = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0]);
        }
        var_65 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) ((signed char) arr_80 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((+(((/* implicit */int) (unsigned short)65535))))));
    }
    var_66 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
}
