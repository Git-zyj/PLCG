/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65208
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
    var_12 = ((/* implicit */long long int) var_3);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -585579894254043534LL)) && (((/* implicit */_Bool) 585579894254043534LL)))))) == (var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))));
                var_14 = ((/* implicit */long long int) min((var_14), (arr_1 [i_0])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        arr_10 [i_2] = ((((/* implicit */_Bool) (-(arr_9 [i_2 - 1] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) && (((/* implicit */_Bool) var_4)))))))) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (4793277782078705504ULL))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_0 [i_2])) <= (((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (arr_2 [i_2 - 2]) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 1]))))));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_2]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_20 [i_5] [i_4] [i_2] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                        arr_21 [i_3] [1ULL] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_8);
                        arr_22 [i_2 - 3] [1LL] [i_3] [10LL] [i_3] [i_2] = ((/* implicit */long long int) ((max((arr_19 [i_2 + 2]), (arr_19 [i_4 + 2]))) >= (((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [i_5]) : (arr_19 [i_2])))));
                        arr_23 [i_2] [i_4 + 3] = ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_4 - 2] [i_2 - 1])) ? (min((arr_14 [i_4] [i_3] [i_4 + 2] [i_2 - 2]), (arr_14 [i_2] [i_3] [i_4 + 2] [i_2 - 1]))) : (var_1));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_24 [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2 - 3]))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_28 [i_2] [i_2] [i_8] [i_8]) ^ (arr_28 [i_2 + 2] [12ULL] [i_7] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) var_11))))))))));
                            arr_34 [i_2] [i_2] [i_8] [i_7] [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) ^ (arr_15 [i_2] [i_2 - 3] [i_9 + 1] [i_2 - 3]));
                            arr_35 [i_2] = ((((/* implicit */_Bool) (~(((arr_2 [i_2]) ^ (var_2)))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2]))))), ((~(arr_3 [i_2] [i_6] [i_6]))))) : (arr_31 [i_2] [i_2] [i_2] [i_2] [i_9]));
                        }
                    } 
                } 
                arr_36 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */long long int) arr_31 [i_2] [i_2 - 3] [i_2] [i_6] [i_7]);
                var_18 = var_4;
                arr_37 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_29 [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_29 [i_2 + 2])) : (13653466291630846111ULL)))));
            }
            arr_38 [i_2] [i_2] = arr_33 [i_2] [i_2] [i_6] [i_6] [i_6];
        }
        for (long long int i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            var_19 = ((/* implicit */long long int) min(((-(249035061612573353ULL))), (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((var_2) - (var_2))) : (((unsigned long long int) var_11))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                arr_44 [i_2] [i_10 + 1] [i_11] = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_11]);
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 12; i_12 += 2) 
                {
                    arr_47 [i_2] [i_10 - 1] [i_2] [i_10 - 1] [i_12] = ((var_3) * (arr_13 [i_2]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) arr_33 [i_2] [i_10] [i_12] [i_2] [i_10 - 1]);
                        var_21 ^= arr_0 [i_2 + 2];
                        var_22 ^= arr_31 [i_2] [i_2] [i_11] [i_2] [i_13];
                        var_23 &= ((arr_17 [12LL] [i_12 + 1]) >> (((arr_3 [i_2 - 3] [i_10 + 2] [i_12 + 1]) - (339516145689880627ULL))));
                    }
                    arr_50 [i_11] [i_10] [i_2] [i_11] = (-(arr_6 [i_2 - 2] [i_12 - 1]));
                }
            }
            arr_51 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10] [i_2 - 1] [i_2 - 1] [6LL])) ? (var_11) : (arr_43 [i_2])))) ? (((((/* implicit */_Bool) arr_39 [i_2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_2 [i_2 + 2]))) : (((/* implicit */unsigned long long int) ((long long int) var_7)))))) ? (var_1) : (min((13653466291630846104ULL), (((/* implicit */unsigned long long int) -585579894254043534LL)))));
        }
    }
    for (long long int i_14 = 1; i_14 < 11; i_14 += 4) 
    {
        var_24 = ((/* implicit */long long int) max((var_24), (max((7705785082397723459LL), (-8669698766831081079LL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_16 = 1; i_16 < 12; i_16 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 1) 
                {
                    var_25 = ((/* implicit */long long int) arr_49 [i_14 + 1] [i_14] [i_16] [i_14] [i_16] [i_16]);
                    var_26 |= ((/* implicit */unsigned long long int) arr_43 [i_14 + 2]);
                    arr_62 [i_14] [i_15] [i_15] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_48 [i_15] [i_14] [i_17 + 3])) >= (arr_31 [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1] [i_14 - 1])));
                }
                /* vectorizable */
                for (long long int i_18 = 2; i_18 < 11; i_18 += 2) 
                {
                    arr_65 [i_15] [i_16 + 1] [i_14] = ((/* implicit */long long int) var_10);
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (var_0) : (var_7))) >= (((/* implicit */unsigned long long int) ((long long int) var_1))))))));
                    arr_66 [i_14] [i_18 + 2] [i_18 + 2] [i_18 + 2] = arr_55 [i_14] [i_14];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_14 + 1] [i_14 - 1]))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(arr_52 [i_18]))))));
                    }
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        var_30 = arr_1 [i_20];
                        var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_32 [i_20] [i_14] [i_16] [i_14])))) ? (arr_13 [i_18 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8669698766831081079LL)) ? (-585579894254043553LL) : (-4325974253285328916LL))))));
                        var_32 = ((((/* implicit */_Bool) arr_63 [i_14 + 1] [i_14 + 2] [i_14 + 1])) ? (arr_63 [i_14 + 1] [i_14 + 2] [i_14 + 1]) : (arr_63 [i_14 + 1] [i_14 + 2] [i_14 + 1]));
                    }
                    for (unsigned long long int i_21 = 1; i_21 < 10; i_21 += 4) 
                    {
                        var_33 = ((var_3) & (arr_60 [i_14 + 1]));
                        arr_75 [i_14 + 2] [i_15] [i_16] [i_14] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_49 [i_14 + 1] [i_14 + 1] [i_16] [i_18] [i_21 + 2] [2ULL])) ? (arr_67 [i_14] [i_14] [i_14 - 1] [i_14 + 2] [i_14 - 1] [i_14] [i_14 - 1]) : (arr_46 [i_14 + 1] [i_15] [i_16] [i_15] [i_21] [0LL]))) >= (arr_46 [i_14] [i_14 - 1] [i_16 - 1] [i_16 - 1] [i_21 + 2] [i_21])));
                        arr_76 [i_21] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */long long int) arr_60 [i_14 + 2]);
                    }
                }
                arr_77 [i_14] [i_14] [i_14] = ((var_2) >> (((arr_59 [i_16 + 1] [8ULL] [8ULL]) - (5463723521657329958LL))));
            }
            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_71 [i_14] [i_15] [i_14] [i_15] [i_14]) - (arr_27 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1]))))));
            var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_57 [i_14 - 1])) ? (arr_57 [i_14 - 1]) : (arr_57 [i_14 + 2]))) > (arr_57 [i_14 - 1])));
        }
        arr_78 [i_14] [i_14] = ((/* implicit */long long int) ((unsigned long long int) arr_48 [i_14] [i_14] [i_14]));
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 2) 
        {
            for (long long int i_23 = 3; i_23 < 10; i_23 += 4) 
            {
                for (long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    {
                        arr_87 [i_14] = ((((((/* implicit */_Bool) 281474708275200LL)) ? (min((((/* implicit */unsigned long long int) arr_27 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1])), (6327422577252934848ULL))) : (((/* implicit */unsigned long long int) 585579894254043526LL)))) >> (((arr_74 [i_14] [i_23 + 1] [8ULL] [i_14]) - (5269952473992059885LL))));
                        arr_88 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) arr_54 [i_14] [i_14])) ^ (var_2))) : (var_3)))) ? (((((/* implicit */_Bool) arr_56 [i_23 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_14] [i_14] [i_22] [i_22] [i_14] [i_24] [i_24])) ? (var_8) : (arr_7 [i_14])))) : (max((arr_84 [3LL] [i_22] [6ULL] [i_22] [i_22]), (((/* implicit */unsigned long long int) arr_27 [i_14] [i_22] [i_22] [i_24])))))) : (((/* implicit */unsigned long long int) var_5))));
                    }
                } 
            } 
        } 
    }
}
