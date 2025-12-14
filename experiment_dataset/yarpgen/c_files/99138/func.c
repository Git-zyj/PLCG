/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99138
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */int) max((min((var_9), ((_Bool)1))), (min(((_Bool)1), ((_Bool)1)))))), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((arr_8 [i_1] [i_1] [i_1]) ? (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) : (min((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) var_11))))))));
                                var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = max(((!((_Bool)1))), ((_Bool)1));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [(_Bool)1] = arr_7 [i_0] [i_0] [i_5];
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((arr_14 [i_5] [i_0] [(_Bool)1] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) (_Bool)0)))), ((((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_5]))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_18 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [(_Bool)1] [i_7] [i_8 - 1] [i_7])) ^ (((/* implicit */int) arr_20 [i_6 - 1] [i_6] [i_8 - 1]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) << (((/* implicit */int) (_Bool)1))))))))))));
                            arr_29 [i_5] [(_Bool)0] [i_0] [i_8] = arr_5 [i_6 - 1];
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */_Bool) ((((((arr_26 [i_0] [i_5] [i_9] [(_Bool)1] [i_11] [i_10]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) + ((((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_3 [(_Bool)1])))))));
                            var_21 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_22 &= (_Bool)1;
                arr_38 [i_9] [i_0] [i_9] = var_7;
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */_Bool) (+(((((((/* implicit */int) arr_37 [i_13] [i_0] [i_13] [i_0] [i_13])) * (((/* implicit */int) var_6)))) * (((/* implicit */int) arr_42 [i_0] [(_Bool)1] [(_Bool)1] [i_0]))))));
                            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_12]))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [(_Bool)1]))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((var_12) ? ((((_Bool)0) ? (((/* implicit */int) arr_23 [i_0] [i_15 - 1] [i_14 - 1] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_15 - 1] [i_14 - 1] [i_0])))) : (max((((arr_40 [i_12] [(_Bool)1] [i_15]) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_14] [i_14])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_13] [i_0] [i_14 - 1] [i_15])))), (((/* implicit */int) arr_1 [i_13]))))));
                        }
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_35 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_16 - 1] [i_14 - 1] [i_16 - 1])))) * (((((/* implicit */int) arr_46 [i_14 - 1] [i_16 - 1] [i_16] [i_16 - 1])) * (((/* implicit */int) arr_46 [i_14 - 1] [i_16 - 1] [i_16] [i_16]))))));
                            arr_51 [i_0] [i_0] [i_0] [(_Bool)1] = ((_Bool) (_Bool)1);
                            var_26 *= arr_26 [i_16 - 1] [i_14] [i_13] [(_Bool)1] [i_16 - 1] [i_0];
                            var_27 = (!(min((arr_31 [(_Bool)0] [i_14 - 1]), (((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)0)))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (arr_49 [(_Bool)1] [i_14])));
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                            arr_54 [i_0] [i_12] [i_14] [i_13] [i_13] [i_12] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) arr_2 [i_14 - 1] [i_17 - 1]))))) ? (((/* implicit */int) var_10)) : (((arr_8 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                            var_30 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_31 -= (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                        }
                        var_32 -= (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            var_33 *= ((/* implicit */_Bool) max((((((/* implicit */int) arr_46 [i_0] [i_0] [i_13] [i_14 - 1])) * (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) var_14))));
                            var_34 = (_Bool)1;
                            var_35 = ((/* implicit */_Bool) ((arr_47 [i_0] [i_0] [i_13] [i_14] [i_18]) ? (((arr_37 [i_18] [i_18] [i_14 - 1] [i_18 + 1] [i_18 + 1]) ? (((/* implicit */int) min((var_11), ((_Bool)1)))) : (((/* implicit */int) ((_Bool) (_Bool)0))))) : (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) var_4))))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [i_0] [i_12] [i_13] [i_14 - 1] [(_Bool)1] [i_0]))))) ? ((~(((/* implicit */int) arr_56 [i_0] [i_12] [i_13] [i_14 - 1] [(_Bool)1] [i_19])))) : (((((/* implicit */int) arr_56 [i_0] [i_12] [i_13] [i_14 - 1] [(_Bool)1] [(_Bool)1])) | (((/* implicit */int) arr_56 [i_0] [i_12] [i_13] [i_14 - 1] [(_Bool)1] [i_14]))))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((arr_31 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_17 [i_12] [i_13] [i_14]), (var_4))))))) ? (((/* implicit */int) arr_43 [i_0] [i_14 - 1] [i_14 - 1] [i_0] [i_14 - 1] [i_14])) : (((/* implicit */int) min(((_Bool)1), (arr_32 [i_14 - 1] [i_14] [i_14] [i_14]))))));
                            var_38 += ((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))));
                        }
                    }
                } 
            } 
            var_39 &= ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_5 [i_12])) : (((/* implicit */int) arr_41 [i_0] [i_12] [i_12])))) | (((/* implicit */int) min((arr_41 [i_0] [i_12] [i_12]), (arr_41 [i_0] [(_Bool)1] [i_12]))))));
            var_40 += ((/* implicit */_Bool) (((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) | ((-((~(((/* implicit */int) arr_35 [i_12] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))))))));
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_70 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_56 [i_0] [i_0] [i_22] [i_22 - 1] [i_0] [i_20])) << (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_22 - 1] [(_Bool)1] [i_21]))))));
                            var_41 = ((/* implicit */_Bool) (~((~(((/* implicit */int) max((arr_68 [i_0] [i_0] [i_20] [i_20] [i_21] [i_22]), (var_14))))))));
                            var_42 = ((/* implicit */_Bool) min((var_42), (var_7)));
                        }
                    } 
                } 
            } 
        }
        var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_58 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1])))), (((((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) * (((/* implicit */int) (_Bool)1)))))))));
        arr_71 [i_0] [i_0] = ((/* implicit */_Bool) (((((_Bool)1) && (var_10))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) max((arr_8 [i_0] [i_0] [(_Bool)1]), (((((/* implicit */int) var_12)) < (((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_69 [i_23] [i_23] [i_24] [i_23] [i_23]))) << (((/* implicit */int) ((_Bool) min((arr_32 [i_23] [i_23] [i_23] [i_23]), ((_Bool)0)))))));
                    var_45 = ((((/* implicit */int) min(((_Bool)1), (arr_24 [i_23])))) < (min((((arr_1 [i_23]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_7 [(_Bool)1] [i_24] [i_25]), (arr_39 [i_23] [(_Bool)1])))))));
                    arr_79 [i_23] [i_24] = (!((_Bool)0));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                {
                    var_46 *= (_Bool)0;
                    arr_85 [(_Bool)1] [i_26 + 1] [i_27] [i_23] = arr_83 [i_23] [i_23] [i_27];
                    arr_86 [i_23] [i_23] = ((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max((arr_69 [i_23] [i_23] [(_Bool)1] [i_23] [(_Bool)1]), (arr_61 [i_23] [i_23] [i_26] [(_Bool)1]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) (+(((var_6) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_47 [i_26] [(_Bool)1] [i_26 + 1] [i_26 + 1] [i_27])))))))));
                        arr_89 [i_23] [i_23] [i_23] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_87 [i_26 + 1] [i_26 + 1]))))));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_48 = min((max((var_2), (arr_84 [i_26 + 1] [(_Bool)1]))), (arr_84 [i_26 + 1] [i_23]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                        {
                            arr_96 [i_23] [i_26] [i_23] [i_29] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((arr_94 [i_23] [i_26 + 1] [i_27] [i_29] [i_23]) ? (((/* implicit */int) arr_94 [i_23] [i_26 + 1] [(_Bool)1] [i_29] [i_26 + 1])) : (((/* implicit */int) arr_94 [i_29] [i_26 + 1] [i_27] [(_Bool)1] [(_Bool)1]))));
                            arr_97 [i_27] [(_Bool)1] [i_23] [(_Bool)1] [i_27] [i_27] = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
                            var_49 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_9 [i_26] [i_26] [i_26])) : (((/* implicit */int) arr_76 [i_26] [i_26] [i_26 + 1] [i_26]))));
                            arr_98 [i_30] [i_23] [i_29] [i_23] [i_26 + 1] [i_23] [i_23] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_65 [i_23] [i_23] [i_23] [i_26 + 1]))));
                        }
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            var_51 = ((/* implicit */_Bool) max((((/* implicit */int) arr_75 [i_23] [i_26] [i_27])), ((+(((/* implicit */int) max(((_Bool)1), (arr_12 [i_23] [i_23]))))))));
                        }
                        var_52 -= ((/* implicit */_Bool) max(((~(((/* implicit */int) var_1)))), ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) 
                    {
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            {
                                var_53 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                                arr_108 [i_23] [i_23] [i_23] [i_32] [i_32] [i_33] = (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_109 [i_23] = ((/* implicit */_Bool) ((max((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7)))), (((_Bool) (_Bool)0)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            var_54 = ((/* implicit */_Bool) max((var_54), (((((/* implicit */int) (!((_Bool)1)))) >= ((((~(((/* implicit */int) var_8)))) | (((/* implicit */int) min(((_Bool)1), (var_9))))))))));
            /* LoopNest 2 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    {
                        var_55 ^= (!((_Bool)1));
                        var_56 = ((((/* implicit */int) (_Bool)1)) > (((var_12) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) min(((_Bool)0), (var_5)))))));
                        arr_118 [i_23] [i_23] [i_35] [i_36] [i_23] = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_84 [i_23] [i_36])) < (((/* implicit */int) arr_46 [i_36] [(_Bool)1] [i_34] [i_23])))) ? (((/* implicit */int) (!(arr_35 [i_23] [i_23] [i_23] [i_34] [i_35] [i_36])))) : (((/* implicit */int) (_Bool)0))))));
                        var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
            {
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    {
                        arr_126 [i_23] = ((/* implicit */_Bool) min((max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) min((arr_6 [i_23] [i_34] [i_38]), ((_Bool)1))))));
                        var_58 += (!(((/* implicit */_Bool) ((arr_115 [i_23] [(_Bool)1] [(_Bool)1] [i_23] [i_23]) ? (((/* implicit */int) arr_115 [i_23] [(_Bool)1] [i_23] [i_23] [i_23])) : (((/* implicit */int) arr_115 [i_23] [(_Bool)1] [i_34] [i_37] [i_38]))))));
                        var_59 &= (!((_Bool)0));
                    }
                } 
            } 
        }
    }
    var_60 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_9))));
}
