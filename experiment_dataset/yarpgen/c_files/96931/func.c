/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96931
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
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (((((/* implicit */int) arr_10 [i_0] [(signed char)1] [i_2 - 1])) * (((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2 + 2])) % (((/* implicit */int) arr_3 [i_3 - 1] [7LL] [i_1]))))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (max((-6), (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_2 - 1] [i_3 - 1] [i_2 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_0])) & (min((8152492608540355240LL), (((/* implicit */long long int) (unsigned char)183))))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */int) ((signed char) 768ULL));
                        var_16 ^= ((/* implicit */int) -13LL);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = (((-(var_12))) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))));
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (_Bool)1);
                            arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) -1083330928);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_5] [i_0] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) (~(((unsigned long long int) arr_8 [i_0] [4] [i_2] [i_3 - 1] [i_3] [i_5])))));
                            var_18 = ((/* implicit */signed char) (unsigned char)0);
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (16098781811772493749ULL) : (4063435758477766873ULL)));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_6] [i_0] = ((/* implicit */int) ((-411150147) != (((/* implicit */int) (unsigned char)17))));
                            var_20 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            var_21 *= ((/* implicit */int) (!(((((/* implicit */_Bool) max((6847296438136900239ULL), (((/* implicit */unsigned long long int) 534773760LL))))) || (((/* implicit */_Bool) min((7902735161570162211LL), (((/* implicit */long long int) (unsigned char)7)))))))));
                            arr_26 [i_0] = ((/* implicit */unsigned char) max((5854612339718597669LL), (((/* implicit */long long int) (unsigned char)13))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_22 += ((/* implicit */long long int) arr_0 [(_Bool)1]);
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (long long int i_10 = 3; i_10 < 19; i_10 += 4) 
                {
                    {
                        var_23 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [(signed char)16]))) + (var_12))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_32 [16LL] [16LL])) ^ (((/* implicit */int) var_13))))))));
                    }
                } 
            } 
            arr_35 [i_0] = ((/* implicit */signed char) (+(var_6)));
            var_25 *= ((/* implicit */signed char) -1065363674);
        }
        /* LoopNest 2 */
        for (signed char i_11 = 2; i_11 < 19; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [8ULL] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1]))))))) : (((unsigned long long int) ((16963472223724895086ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))))))));
                    var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned char)57))))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [13] [13] [i_11] [i_11])) : (((((/* implicit */int) ((var_9) > (((/* implicit */int) arr_34 [i_0 - 2] [i_11 + 1] [i_12] [i_11 + 1] [(signed char)9] [i_11]))))) * (((/* implicit */int) ((arr_36 [i_12 + 1]) < (((/* implicit */unsigned long long int) arr_40 [i_0] [i_11] [(signed char)4])))))))));
                }
            } 
        } 
        var_28 -= ((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_0 - 2] [9LL] [i_0]);
        arr_42 [i_0] = ((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned char) ((signed char) var_8))))), (((unsigned char) min(((unsigned char)73), ((unsigned char)7))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_43 [i_13] [i_13]))))) : (18014398492704768ULL))))));
                                var_30 = (-(((/* implicit */int) ((unsigned char) ((signed char) 177966616)))));
                                arr_55 [i_13] [i_14] [i_15] [i_13] [i_17 + 1] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)13))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) -177966633)) : (18446744073709550843ULL))))))), (((((/* implicit */int) (signed char)-96)) + (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    arr_56 [i_13] [i_13] = ((/* implicit */long long int) ((max((arr_41 [i_13]), (arr_41 [i_13]))) ? (((/* implicit */int) ((_Bool) (unsigned char)6))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_46 [i_13] [i_13])), ((unsigned char)251))))));
                    arr_57 [12] [i_13] [i_13] = ((/* implicit */long long int) arr_23 [i_13] [i_15] [i_15] [i_15] [i_13]);
                }
            } 
        } 
        arr_58 [i_13] = ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                {
                    var_31 |= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) -8676157410135295638LL)), (18428729675216846847ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [i_13] [i_19])))))));
                    var_32 -= min((((((/* implicit */unsigned long long int) arr_0 [i_18])) >= (max((((/* implicit */unsigned long long int) arr_4 [i_19])), (arr_23 [i_13] [i_13] [i_19] [i_19] [i_19]))))), (min((arr_63 [i_13] [i_18] [i_19]), (arr_63 [i_19] [i_18] [i_13]))));
                    var_33 *= ((/* implicit */unsigned char) (!((((+(((/* implicit */int) arr_43 [i_13] [i_18])))) != (((/* implicit */int) min(((unsigned char)1), (((/* implicit */unsigned char) arr_3 [3ULL] [i_18] [i_19])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 4; i_20 < 12; i_20 += 3) 
        {
            for (long long int i_21 = 2; i_21 < 12; i_21 += 1) 
            {
                {
                    var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */int) (signed char)96)), (var_9)))))) - (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6571600919120860223ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [i_13] [(unsigned char)16] [i_21] [i_13] [i_21 - 1])), (var_9)))) : (((((/* implicit */_Bool) arr_21 [i_13] [(unsigned char)9] [i_21 + 1] [i_13] [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13]))) : (arr_23 [i_13] [i_20 + 1] [i_21] [i_21 - 2] [i_13]))))));
                    arr_68 [i_13] [i_20] [(signed char)10] &= ((/* implicit */int) min((((2747212912180964633LL) >> (((117118273) - (117118261))))), (((/* implicit */long long int) (_Bool)1))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) arr_6 [(unsigned char)12] [6])) : (((/* implicit */int) arr_13 [i_22] [6ULL])))) != (((/* implicit */int) ((arr_69 [i_22] [i_22]) != (((/* implicit */long long int) arr_9 [i_22] [i_22] [i_22] [i_22] [8ULL] [i_22])))))));
        /* LoopSeq 3 */
        for (long long int i_23 = 0; i_23 < 13; i_23 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_24 = 2; i_24 < 11; i_24 += 4) 
            {
                for (signed char i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_12)))));
                            arr_84 [i_22] [i_23] [i_23] [(_Bool)0] [i_26] [i_24 - 1] [i_22] = ((/* implicit */int) (-(arr_70 [i_24 + 1])));
                            arr_85 [i_22] [i_23] [i_24] [i_24] [i_24] [10LL] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_24 + 1] [i_25] [i_24 + 1]))));
                            var_37 = ((/* implicit */long long int) (((_Bool)1) ? (535590363) : (1386616551)));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) 32767)));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [(signed char)0])) << (((arr_0 [0ULL]) + (262950837)))));
            /* LoopNest 2 */
            for (long long int i_28 = 0; i_28 < 13; i_28 += 2) 
            {
                for (long long int i_29 = 0; i_29 < 13; i_29 += 3) 
                {
                    {
                        var_40 &= ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_5))) > (arr_86 [i_22])))));
                        var_41 = ((/* implicit */signed char) ((5348877818969681262LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-92)))));
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-95))))) ? (arr_59 [i_22] [i_28]) : (((/* implicit */long long int) var_9))));
                        arr_95 [i_22] [i_22] [i_22] = ((arr_77 [i_22] [10LL]) >= (((int) -2747212912180964609LL)));
                    }
                } 
            } 
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 2; i_31 < 12; i_31 += 4) 
            {
                for (long long int i_32 = 2; i_32 < 10; i_32 += 1) 
                {
                    for (signed char i_33 = 2; i_33 < 12; i_33 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */int) arr_45 [i_31 - 2] [i_32 + 3] [i_33 + 1]);
                            arr_105 [i_22] [i_22] [i_30] [i_30] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) arr_37 [i_31 - 2] [i_32 - 1] [i_33 - 2]));
                            arr_106 [i_22] [i_30] [i_31 - 1] [i_31] [i_33 + 1] [i_33 + 1] &= ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)93))))) * (((/* implicit */int) arr_103 [i_31 - 2] [i_32 + 3] [i_33] [i_33] [i_33] [i_33 + 1])));
                        }
                    } 
                } 
            } 
            var_44 -= (~(((/* implicit */int) var_7)));
        }
    }
    var_45 = ((/* implicit */int) var_2);
    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) var_5))));
    var_47 *= ((/* implicit */long long int) var_10);
}
