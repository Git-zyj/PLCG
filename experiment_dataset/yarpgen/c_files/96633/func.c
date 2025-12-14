/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96633
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
    var_18 = var_17;
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)152))))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) ((short) (short)-25908))) & (((((/* implicit */_Bool) (short)154)) ? (((/* implicit */int) (short)-153)) : (((/* implicit */int) (short)21177))))))));
                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_2 [(short)5] [i_0] [i_1 + 2])) : (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_2)) + (14765))))))) & ((~(((((/* implicit */_Bool) (short)8741)) ? (((/* implicit */int) (short)152)) : (((/* implicit */int) (short)-32764))))))));
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    arr_8 [i_0] [(short)16] [(short)16] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((short)32256), (var_1))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_2 - 1] [i_3] = (short)32256;
                        arr_14 [i_1 + 3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)32264)) / (((/* implicit */int) arr_7 [i_0]))));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        var_22 -= arr_7 [i_4];
                        /* LoopSeq 3 */
                        for (short i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            var_23 ^= var_11;
                            arr_20 [(short)4] [i_0] [(short)11] [i_0] [i_0] = (short)32767;
                            arr_21 [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)174))))) ? (min((((/* implicit */int) ((short) arr_19 [i_0 + 1] [i_0] [i_0 + 1] [i_0]))), ((+(((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_0])))))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) min(((short)32256), ((short)-32757))))))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_25 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_4] [(short)6] [(short)11] [i_0] = ((short) (-((+(((/* implicit */int) arr_9 [i_4] [i_0] [i_1] [i_0]))))));
                            var_24 = max(((short)-151), (arr_22 [(short)2] [i_0 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_2 - 1]));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)5414))));
                            arr_26 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) min((max((((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) arr_18 [i_0] [i_1] [(short)7] [i_2] [i_0] [i_6])) - (7513))))), (((/* implicit */int) arr_3 [i_2 - 1])))), (((/* implicit */int) var_8))))) : (((/* implicit */short) min((max((((((((/* implicit */int) var_13)) + (2147483647))) >> (((((((/* implicit */int) arr_18 [i_0] [i_1] [(short)7] [i_2] [i_0] [i_6])) - (7513))) + (11785))))), (((/* implicit */int) arr_3 [i_2 - 1])))), (((/* implicit */int) var_8)))));
                        }
                        for (short i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            arr_29 [i_2] [i_1] [i_2] [i_0] [i_4] [i_1] [i_4] = ((/* implicit */short) min((((/* implicit */int) arr_27 [i_0 - 1])), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-151))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-152))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)20600)) || (((/* implicit */_Bool) (short)22298)))))))));
                            arr_30 [i_0] [(short)18] [i_0] [(short)2] [i_0] [i_0] = var_10;
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20589)) + (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_7 + 1]))))) ? (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_4] [i_7 - 2])) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0 - 1] [(short)8] [i_1] [i_7 + 2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_19 [(short)18] [i_1] [(short)18] [i_1]))));
                            arr_31 [(short)11] [i_4] [i_0 + 1] [i_7] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_2))))));
                            var_27 = arr_17 [i_2 - 2] [i_7 - 2] [i_2 - 2];
                        }
                        arr_32 [i_0] [i_1 + 2] [i_0] = var_0;
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-24722))));
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                    {
                        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((((/* implicit */int) (short)21083)) >> (((((/* implicit */int) (short)320)) - (318))))))) : (((/* implicit */int) var_2))));
                        var_30 |= min((((short) max(((short)4559), ((short)-10458)))), ((short)-6141));
                        var_31 = arr_12 [i_1 + 3] [i_2];
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) max((((/* implicit */int) (short)320)), (((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_1 + 3] [i_1 + 3] [i_1]))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_0] [i_0 - 1] [i_2 - 2] [i_8])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0])))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(short)4] [i_0] [(short)10] [i_1])) ? (((((/* implicit */_Bool) min(((short)255), (arr_27 [i_1 + 2])))) ? ((~(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_13)))) : (((/* implicit */int) max((var_6), ((short)-24722))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_19 [i_1 - 1] [i_1] [i_1 + 2] [i_1]), (var_3)))) ? (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_1 - 1] [(short)6] [i_1 + 2] [(short)15])) : (((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_1 + 2] [(short)15]))))));
                        }
                        for (short i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? ((-(((/* implicit */int) arr_28 [i_0 - 1] [i_10] [i_2 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) : (((/* implicit */int) max((arr_28 [i_0] [i_10] [i_2 - 1] [i_0] [i_0 - 1] [i_0 - 1]), ((short)-2461)))))))));
                            arr_40 [(short)4] [(short)18] [i_2 + 1] [i_0] [i_8] [i_10] [i_10] = ((/* implicit */short) (((~(((/* implicit */int) min((arr_28 [i_0] [i_0] [i_0] [i_0] [i_8] [(short)5]), (var_10)))))) - ((+(((/* implicit */int) (short)-9591))))));
                        }
                        for (short i_11 = 3; i_11 < 16; i_11 += 1) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((((short) (short)-31607)), (min(((short)-1), (arr_2 [i_0 - 1] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)3] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */int) (short)-31312)) & (((/* implicit */int) (short)-25086)))) : (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_11])))) : ((-(((/* implicit */int) var_4))))));
                            var_37 = ((/* implicit */short) max((((((/* implicit */int) arr_27 [i_0 + 1])) / (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0 - 1])))))));
                            arr_44 [i_0 + 1] [i_2] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_0])))), (((((((/* implicit */int) arr_19 [i_0 - 1] [(short)13] [i_8] [i_11 + 3])) + (2147483647))) >> (((((/* implicit */int) var_6)) + (6082)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22054)) ? (((/* implicit */int) arr_33 [i_2] [i_2 - 1] [i_8] [i_8])) : (((/* implicit */int) arr_33 [(short)17] [i_2 + 1] [i_8] [i_11 + 3])))))));
                        }
                    }
                }
                for (short i_12 = 1; i_12 < 16; i_12 += 4) 
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (-((~(((/* implicit */int) arr_42 [i_0] [(short)14] [i_12 + 2] [i_1] [i_0 + 1] [(short)14])))))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [(short)10] [i_1 + 1] [i_12] [i_14] [i_14]))))) ? (((/* implicit */int) (short)9572)) : (((/* implicit */int) var_15))));
                                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)5432)) ^ (((/* implicit */int) (short)-11758)))) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_46 [i_1] [(short)14])) : (((/* implicit */int) min(((short)0), (arr_33 [i_0 + 1] [(short)3] [i_0] [i_0 + 1]))))));
                                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) max((((/* implicit */int) arr_11 [i_0 + 1] [i_1] [(short)16] [i_13])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_22 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_12 + 2] [i_14] [i_14] [i_14])))))))));
                            }
                        } 
                    } 
                }
                for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 1; i_16 < 17; i_16 += 1) 
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1837)) ? (((/* implicit */int) (short)-18335)) : (((/* implicit */int) (short)6280))))) ? (((/* implicit */int) arr_22 [i_16 + 1] [i_16] [i_16 + 1] [(short)6] [i_1 - 1] [i_1 - 1] [i_0 - 1])) : (((((/* implicit */_Bool) min(((short)1024), (arr_39 [i_0] [i_1] [(short)16] [i_15] [i_16])))) ? (((/* implicit */int) arr_50 [(short)0])) : (((/* implicit */int) arr_45 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
                        var_43 = ((/* implicit */short) ((((((((/* implicit */int) min((arr_7 [i_0]), (var_14)))) + (2147483647))) >> (((((/* implicit */int) arr_46 [(short)4] [i_0])) + (3067))))) & (((((/* implicit */_Bool) (short)1890)) ? (((/* implicit */int) (short)-16873)) : (((/* implicit */int) (short)16873))))));
                    }
                    for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        var_44 &= ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_49 [i_1] [i_1] [i_1] [i_1]), (arr_38 [(short)14] [(short)14] [i_0] [i_0] [i_1] [(short)0] [(short)8])))) ? (((((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_35 [i_15])) - (21126))))) : (((/* implicit */int) (short)(-32767 - 1))))), (min((((((/* implicit */int) var_9)) / (((/* implicit */int) var_1)))), (((/* implicit */int) arr_2 [i_0 - 1] [(short)10] [i_0 - 1]))))));
                        var_45 = arr_35 [i_0];
                        var_46 = arr_55 [(short)4] [i_0];
                        arr_61 [i_0] [i_1] [i_0] [i_17] = ((/* implicit */short) ((((/* implicit */int) (short)8690)) >> (((((/* implicit */int) (short)1837)) - (1818)))));
                    }
                    var_47 = (short)-25086;
                }
                /* LoopNest 2 */
                for (short i_18 = 1; i_18 < 16; i_18 += 2) 
                {
                    for (short i_19 = 4; i_19 < 16; i_19 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */int) var_5)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((var_10), (var_3))))))));
                            /* LoopSeq 3 */
                            for (short i_20 = 2; i_20 < 16; i_20 += 4) /* same iter space */
                            {
                                arr_71 [i_0] [i_1] [i_1] [i_18 + 2] [i_19 - 3] [i_19] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_58 [i_0])) ? (((/* implicit */int) arr_10 [i_20 + 2] [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_58 [i_0])))) | (((/* implicit */int) arr_10 [i_20 + 3] [i_1 + 3] [i_0 + 1] [i_0]))));
                                var_49 = ((/* implicit */short) min((((((/* implicit */int) max(((short)-24722), (arr_46 [i_19] [(short)16])))) | (((/* implicit */int) var_17)))), (((/* implicit */int) min((arr_55 [i_0] [i_0]), (var_9))))));
                                var_50 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_0])) || (((/* implicit */_Bool) arr_58 [i_0]))))) & (((((((/* implicit */int) arr_67 [i_0 - 1] [i_0] [i_18 + 2] [i_19 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_58 [i_0])) + (26776)))))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_0])) || (((/* implicit */_Bool) arr_58 [i_0]))))) & (((((((/* implicit */int) arr_67 [i_0 - 1] [i_0] [i_18 + 2] [i_19 + 2])) + (2147483647))) >> (((((((/* implicit */int) arr_58 [i_0])) + (26776))) - (13531))))))));
                            }
                            for (short i_21 = 2; i_21 < 16; i_21 += 4) /* same iter space */
                            {
                                arr_74 [i_0] [i_21 + 3] [i_0] [i_19 - 4] [(short)8] [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12896)) ? (((/* implicit */int) (short)2457)) : (((/* implicit */int) (short)-9))))) ? (((/* implicit */int) arr_62 [i_0 + 1] [i_19 + 2] [i_0])) : (((/* implicit */int) min((arr_17 [i_0] [i_0] [i_0]), (arr_60 [i_21] [i_0 - 1] [i_18] [i_19 - 1] [i_19]))))))));
                                var_51 = arr_73 [(short)12] [(short)5] [i_18];
                                arr_75 [i_0] = min((max((min(((short)-760), (arr_60 [i_0] [i_1] [(short)16] [i_19] [i_21 - 1]))), (arr_72 [i_0 - 1] [(short)18] [i_1] [i_18 - 1] [i_21] [i_19]))), (arr_4 [i_0]));
                            }
                            for (short i_22 = 0; i_22 < 19; i_22 += 2) 
                            {
                                var_52 = ((/* implicit */short) (~(((/* implicit */int) (short)-24722))));
                                var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-6732)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_50 [i_0])) : (((/* implicit */int) arr_51 [i_0] [i_22] [i_18] [i_18 + 3] [i_1 - 1] [i_1 - 1]))))))) ? (((/* implicit */int) ((short) (short)8737))) : (((/* implicit */int) arr_19 [(short)15] [i_1 + 3] [i_1 + 3] [i_1 + 3]))));
                                arr_79 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_2)) / (((/* implicit */int) max((max((arr_73 [i_22] [i_19 + 2] [i_18]), (arr_27 [i_0 + 1]))), (var_8))))));
                            }
                            var_54 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1 + 3] [i_0] [i_19]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_27 [i_0 - 1])) : (((/* implicit */int) min((var_6), (var_14))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_55 = ((/* implicit */short) ((((/* implicit */int) min((max((var_6), (var_16))), (max((var_8), (var_8)))))) < (((/* implicit */int) ((short) ((((/* implicit */int) (short)-3981)) != (((/* implicit */int) var_12))))))));
}
