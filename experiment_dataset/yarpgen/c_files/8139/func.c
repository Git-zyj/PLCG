/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8139
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((((/* implicit */_Bool) arr_4 [11ULL] [5ULL])) ? (max((arr_12 [8ULL] [i_3 - 1] [8ULL] [i_3 - 1]), (((/* implicit */unsigned long long int) (short)0)))) : (((max((((/* implicit */unsigned long long int) (short)-20795)), (8087433582059578616ULL))) ^ (max((12439798590703327412ULL), (4758219368412540522ULL)))))))));
                                var_11 -= min((((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 + 3])) ? (((arr_3 [(short)9] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)2]))))) : (arr_9 [i_1] [i_2] [i_3 - 1] [i_4]))), (max((arr_12 [8ULL] [i_3 - 1] [i_3 + 3] [i_3 - 1]), (4292870144ULL))));
                                arr_14 [0ULL] [0ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_5 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [4ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7863)) || (((/* implicit */_Bool) (short)6144)))))))) ? (((((/* implicit */_Bool) ((short) (short)-31007))) ? (((/* implicit */int) arr_10 [i_3 + 3] [i_3] [12ULL] [i_3 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744069416681494ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)8] [i_1] [2ULL] [i_3])) ? (((/* implicit */int) arr_10 [11ULL] [7ULL] [i_2] [i_3 + 3])) : (((/* implicit */int) (short)19241))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_5])))) == (((((/* implicit */_Bool) 18446744069416681472ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [10ULL]))) : (arr_17 [i_0] [i_0] [(short)8] [10ULL])))))), (((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_0 [i_6])))) ? (((7510777177146253940ULL) % (arr_12 [(short)6] [(short)12] [(short)12] [(short)12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1804921116675057096ULL)) || (((/* implicit */_Bool) arr_1 [i_0])))))))))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_8 [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) 1099511627775ULL))) || (((/* implicit */_Bool) (short)-4682)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [6ULL] [i_0]))) : (18446742974197923841ULL)))) ? (arr_9 [i_5 + 3] [3ULL] [i_5] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 - 1] [i_5 + 2])))))));
                            /* LoopSeq 1 */
                            for (short i_7 = 4; i_7 < 13; i_7 += 2) 
                            {
                                arr_23 [(short)13] [(short)13] = min((((((/* implicit */_Bool) 18446744069416681480ULL)) ? (min((9699298980049376293ULL), (((/* implicit */unsigned long long int) (short)28676)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [i_1] [8ULL] [i_6] [(short)7])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(short)1] [i_5 + 1] [i_5 + 1] [i_6 - 1] [(short)9] [i_7 - 2]))) + (max((1099511627775ULL), (arr_2 [i_0]))))));
                                arr_24 [i_0] [i_1] [i_5] [i_1] [i_7 - 3] = ((/* implicit */short) max((18446742974197923841ULL), (((/* implicit */unsigned long long int) (short)21604))));
                            }
                        }
                    } 
                } 
                arr_25 [i_1] = ((((((((/* implicit */_Bool) (short)10976)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0]))) : (arr_15 [i_0]))) >> (((((unsigned long long int) (short)-27980)) - (18446744073709523618ULL))))) & (((unsigned long long int) max((arr_16 [i_0] [(short)5] [0ULL]), (((/* implicit */unsigned long long int) (short)27418))))));
                var_14 = arr_5 [i_0];
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    var_15 -= ((/* implicit */short) (-(min((max((arr_3 [i_0] [(short)1]), (arr_17 [i_0] [i_0] [i_0] [(short)8]))), (((1308941226856623256ULL) >> (((8747445093660175323ULL) - (8747445093660175269ULL)))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (arr_17 [(short)12] [i_1] [i_8 + 2] [(short)12])));
                    var_17 -= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-26663)) ? (arr_15 [11ULL]) : (arr_11 [i_0] [i_1] [i_0] [(short)2] [(short)12] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15439069964894968891ULL)) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [8ULL])))))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) 28ULL)) ? (18446742974197923840ULL) : (arr_22 [i_0] [i_0] [i_0] [(short)12] [i_0] [i_0]))) : (arr_12 [8ULL] [i_1] [(short)6] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)13244), (((short) arr_3 [i_0] [i_0])))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (short i_11 = 1; i_11 < 13; i_11 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((short) 0ULL));
                                arr_35 [i_0] [i_0] [i_0] [(short)8] [i_0] |= ((unsigned long long int) arr_19 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [11ULL] [i_11 - 1]);
                                arr_36 [i_10] [(short)5] = ((/* implicit */short) ((unsigned long long int) (-((-(arr_3 [7ULL] [i_1]))))));
                                arr_37 [i_10] [i_0] [i_0] [i_0] [0ULL] [(short)12] [4ULL] = ((/* implicit */short) ((max((arr_32 [i_11 + 1] [i_10] [i_11 - 1] [i_11] [i_11 - 1]), (arr_32 [i_11 + 1] [i_10] [i_11 - 1] [i_11] [i_11 + 1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [9ULL] [9ULL])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_12 = 2; i_12 < 13; i_12 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_11 [(short)12] [i_1] [3ULL] [i_9] [i_12 + 1] [i_12]), (1152921229728940032ULL)))) ? (max((arr_31 [i_12] [i_12 + 1] [i_12 + 1]), (((/* implicit */unsigned long long int) arr_19 [i_0] [(short)8] [i_0] [i_0] [(short)6] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3652))))), (max((max((((/* implicit */unsigned long long int) arr_7 [8ULL])), (39970183418161742ULL))), (((/* implicit */unsigned long long int) ((arr_32 [(short)6] [4ULL] [i_12 + 1] [i_12] [(short)8]) < (arr_32 [i_12] [(short)8] [(short)2] [(short)8] [i_0]))))))));
                        var_20 -= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((short) (short)-5546))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)12657)) : (((/* implicit */int) arr_0 [8ULL])))))) * (((((/* implicit */int) ((arr_11 [i_12] [10ULL] [i_12] [i_12] [i_12] [i_12 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8ULL])))))) ^ (((/* implicit */int) arr_8 [12ULL] [i_12] [i_12 - 2] [i_12 - 2]))))));
                        var_21 = arr_9 [(short)6] [i_1] [(short)6] [i_12];
                    }
                    /* vectorizable */
                    for (short i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_9]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            var_23 = ((arr_39 [i_9] [i_13 - 1] [i_13 + 1] [i_13 - 2]) ^ (arr_39 [i_9] [i_13 - 1] [9ULL] [i_13]));
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) 4559974577067638962ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14] [i_13] [i_0]))) & (arr_22 [i_0] [i_1] [(short)12] [i_0] [12ULL] [i_14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17740)))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [3ULL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_13 - 1] [(short)9] [i_13] [i_13])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13256)) ? (arr_11 [5ULL] [3ULL] [i_9] [i_9] [i_1] [i_0]) : (39970183418161753ULL))))));
                            arr_48 [i_1] [i_9] [0ULL] [i_14] = ((/* implicit */short) (((-(((/* implicit */int) (short)-18894)))) * (((/* implicit */int) arr_1 [i_0]))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            arr_51 [i_15] [i_15] [(short)12] [i_15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_15])) ? (arr_49 [i_13 - 2] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_29 [i_13] [(short)4] [(short)6]))))));
                            var_25 = ((/* implicit */short) max((var_25), (((short) arr_39 [i_13 - 2] [i_13 - 1] [i_13 - 1] [i_13 - 1]))));
                        }
                    }
                    for (short i_16 = 4; i_16 < 12; i_16 += 3) 
                    {
                        var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_28 [2ULL] [i_9] [i_9])), (min((((((/* implicit */_Bool) 18446744073709551610ULL)) ? (arr_50 [i_16 - 1] [(short)12] [(short)4] [i_9] [(short)4] [i_0] [i_0]) : (1099511627775ULL))), ((+(arr_2 [i_0])))))));
                        var_27 |= ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [9ULL] [(short)10] [i_9] [i_16 - 4] [i_16])) && (((/* implicit */_Bool) (short)17742))))), ((short)21604)))) ? (arr_49 [i_0] [i_1]) : (9830197561508310977ULL));
                        arr_54 [(short)1] [i_1] [i_9] [(short)13] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_16 - 4])) ? (((/* implicit */int) arr_33 [2ULL] [i_1])) : (((/* implicit */int) arr_33 [12ULL] [i_1])))), (((((/* implicit */_Bool) (short)17753)) ? (((/* implicit */int) arr_13 [i_16 - 1])) : (((/* implicit */int) arr_13 [i_16 - 1]))))));
                    }
                }
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_18 = 4; i_18 < 13; i_18 += 1) 
                    {
                        for (short i_19 = 1; i_19 < 13; i_19 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-29866)) && (((/* implicit */_Bool) arr_19 [i_0] [i_19 + 1] [i_17] [i_18 - 1] [i_19] [(short)2])))) ? (((((unsigned long long int) arr_61 [i_17] [(short)5] [i_17] [i_17] [(short)11] [i_17])) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_19 - 1] [i_19 + 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1] [10ULL] [8ULL])) ? (((/* implicit */int) arr_61 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])) : (((/* implicit */int) arr_61 [i_19 - 1] [i_19 + 1] [4ULL] [i_19] [i_19 - 1] [i_19])))))));
                                var_29 = arr_59 [i_0];
                                arr_66 [i_0] [i_0] [i_0] [i_19] [0ULL] = ((/* implicit */unsigned long long int) min((((short) ((((/* implicit */int) (short)17742)) / (((/* implicit */int) (short)-18485))))), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_0] [i_1] [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_19]))) : (arr_12 [i_19] [i_17] [i_18 - 1] [i_19])))))))));
                                var_30 -= ((((/* implicit */_Bool) arr_2 [i_18])) ? (((unsigned long long int) arr_9 [i_19] [i_0] [i_1] [i_0])) : (min((((/* implicit */unsigned long long int) arr_19 [7ULL] [i_1] [i_17] [i_1] [i_18 - 4] [i_19 + 1])), (arr_2 [i_0]))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) arr_55 [i_17] [7ULL] [8ULL] [i_0]);
                    var_32 = ((/* implicit */short) max((((unsigned long long int) max((((/* implicit */unsigned long long int) arr_10 [(short)12] [i_1] [(short)7] [i_1])), (17873661021126656ULL)))), (((((/* implicit */_Bool) arr_10 [i_17] [i_17] [i_1] [(short)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))) : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_17])))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) var_9);
    var_34 = max((max((((((/* implicit */_Bool) 16295228953469870931ULL)) ? (var_0) : (13874336214356527373ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-17739))))))), (((/* implicit */unsigned long long int) var_9)));
}
