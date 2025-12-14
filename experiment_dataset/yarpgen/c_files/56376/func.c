/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56376
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_15 += ((arr_6 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_2]) <= (arr_6 [i_0] [i_0] [i_2] [i_3]))))));
                        var_16 += ((var_9) - (arr_1 [i_2]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_1] [18ULL] [i_0] = ((((/* implicit */_Bool) 2ULL)) ? (arr_7 [i_4 - 1] [i_4 + 3] [i_1] [i_4 + 1] [i_4 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [10ULL] [10ULL] [10ULL] [i_3]) < (arr_5 [i_0] [i_0] [i_0] [16ULL]))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_2]) <= (var_5))))) != (arr_7 [i_4] [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1]))))));
                            var_18 = ((arr_11 [i_4 + 2] [i_4] [i_4 + 4] [i_4 + 2] [i_4] [i_3]) - (var_8));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_4]))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((arr_10 [i_1] [i_5 - 1]) ^ (arr_2 [i_5 + 2] [i_5 + 3]));
                            arr_17 [i_0] [i_1] [i_1] [i_0] [i_0] = arr_6 [i_0] [i_1] [i_2] [i_3];
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_6 - 1] = ((((/* implicit */_Bool) 2ULL)) ? (arr_14 [i_0] [i_1] [i_2] [i_3] [i_6] [i_0] [i_3]) : (var_12));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] = (~((+(var_10))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) arr_9 [i_2] [i_6 + 1] [i_6 + 1] [i_2] [i_2])) ? (arr_16 [i_2] [i_6 - 1] [i_6 + 3] [i_2] [i_2]) : (arr_9 [i_2] [i_6 + 2] [i_6 - 3] [i_3] [i_2])))));
                        }
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), ((~(min((var_5), (arr_7 [i_7] [i_7] [i_2] [i_7 + 1] [i_7])))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2ULL)))))) & (var_12)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), ((-(arr_19 [i_2] [i_8] [i_0] [i_0] [i_0] [i_2])))));
                            var_24 = 18446744073709551615ULL;
                            var_25 += arr_24 [i_0] [i_7] [i_7] [i_0];
                        }
                    }
                    arr_27 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) max(((~(var_1))), (arr_2 [i_0] [i_1])))) ? (((unsigned long long int) ((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (max((((((/* implicit */_Bool) var_1)) ? (arr_22 [i_1]) : (var_10))), (var_13))));
                    arr_28 [i_0] [i_1] [i_0] [i_0] = var_10;
                    var_26 = (((+(arr_9 [i_1] [i_1] [i_2] [i_2] [i_2]))) >> (((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_0] [11ULL])) ? (14870442935381356670ULL) : (var_8))) - (14870442935381356652ULL))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        var_27 = ((18446744073709551614ULL) % (arr_1 [i_9 - 3]));
                        var_28 = ((arr_18 [i_9 - 4] [i_9 - 4] [i_9 - 3] [i_1] [i_9] [i_9] [i_9]) ^ (var_14));
                        arr_33 [i_0] [i_0] [i_1] = (+(var_10));
                        var_29 = arr_8 [i_9 + 3] [i_1];
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_30 = arr_10 [i_0] [i_0];
                            arr_39 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_10] = ((/* implicit */unsigned long long int) ((arr_32 [17ULL] [i_1] [i_1] [i_1] [i_1] [i_1]) <= (arr_37 [i_1] [i_0] [i_1] [i_1] [i_0])));
                        }
                        var_31 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10 - 1])) ? (arr_37 [i_0] [i_0] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_26 [i_2]) >= (var_3)))))))) ? (((((/* implicit */_Bool) min((arr_30 [i_0] [8ULL] [i_2]), (arr_8 [i_1] [i_2])))) ? (var_2) : (max((var_9), (2437841318541024560ULL))))) : (min((((/* implicit */unsigned long long int) ((var_0) <= (var_7)))), (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]))))));
                        arr_40 [i_1] [i_2] [i_1] [i_1] = min((arr_14 [18ULL] [i_1] [i_2] [i_10] [i_1] [i_1] [i_1]), (max((3576301138328194946ULL), (var_10))));
                        var_32 = max((max((((arr_35 [i_1] [i_1]) ^ (arr_3 [i_0]))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (2130551874607521430ULL))))), (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_1] [i_2] [i_10 - 4]) : (16126125531901105517ULL))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 548381098604007921ULL)) || (((/* implicit */_Bool) max((arr_44 [i_12] [i_12]), (arr_19 [i_12] [i_15] [13ULL] [i_13] [i_13] [i_12]))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8582587205840167627ULL)) ? (arr_11 [i_12] [i_13] [i_14] [i_15] [i_15] [i_12 - 2]) : (var_8))) <= (min((14079340908938576508ULL), (1573924365473412401ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 1) 
                        {
                            var_35 += (+(((((/* implicit */_Bool) ((14079340908938576517ULL) ^ (1125899906842623ULL)))) ? (min((arr_37 [i_12] [i_13] [i_13] [i_13] [i_16 + 2]), (arr_32 [i_12] [i_13] [i_13] [i_13] [i_15] [i_13]))) : (min((var_7), (var_14))))));
                            var_36 *= ((((/* implicit */_Bool) var_11)) ? (max((var_4), (((/* implicit */unsigned long long int) ((arr_44 [i_12] [i_13]) >= (2086373407551238113ULL)))))) : (((unsigned long long int) arr_8 [i_14] [i_13])));
                            var_37 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_12] [i_13]) : (4885460922478543691ULL)))))))) & (arr_16 [i_13] [i_13] [i_13] [i_13] [i_13]));
                            arr_52 [i_12] [i_12 + 1] [i_12] [i_13] [i_12] [i_15] [i_16 - 1] = var_6;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_17 = 2; i_17 < 18; i_17 += 3) 
                        {
                            var_38 = var_14;
                            var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_12] [i_13] [i_13] [i_15] [i_17])) && (((/* implicit */_Bool) arr_5 [i_12] [i_12] [i_12 + 1] [i_17 - 1]))));
                            var_40 = ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_12] [i_12] [i_12] [i_15] [i_17]) : (arr_34 [i_17 - 2] [i_15] [i_13] [i_13] [i_12] [i_12]));
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        arr_59 [i_12 + 1] [i_12] [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((arr_6 [i_14] [i_14] [i_12] [i_12]) * (arr_5 [i_12] [i_12] [i_14] [i_12]))) : (((unsigned long long int) 4297057402890605091ULL)))))));
                        arr_60 [i_12] [i_13] [i_13] [i_18] = arr_15 [i_12 - 1] [i_12 + 1] [i_12 + 1];
                        var_41 ^= var_6;
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 2; i_19 < 17; i_19 += 3) /* same iter space */
                    {
                        var_42 *= var_5;
                        arr_64 [i_12] = ((((/* implicit */_Bool) arr_41 [i_12])) ? (562400197607424ULL) : (arr_14 [i_12] [i_12] [i_12] [i_12 + 1] [i_12] [i_12] [i_14]));
                    }
                    for (unsigned long long int i_20 = 2; i_20 < 17; i_20 += 3) /* same iter space */
                    {
                        arr_67 [i_12] [i_12] = arr_65 [i_14] [i_12];
                        /* LoopSeq 3 */
                        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                        {
                            arr_70 [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_42 [i_12] [i_12]))))))));
                            var_43 -= (~(var_1));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 2) /* same iter space */
                        {
                            var_44 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_0) : (16095424187722741928ULL))), (((((/* implicit */_Bool) 8126464ULL)) ? (arr_73 [i_12] [i_12] [6ULL] [i_20] [i_22]) : (arr_25 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))) ? ((-(((arr_1 [i_12]) << (((274877906432ULL) - (274877906378ULL))))))) : ((+(((((/* implicit */_Bool) arr_37 [i_12] [i_13] [i_12] [i_12] [i_22])) ? (arr_15 [i_12] [i_13] [i_13]) : (var_14))))));
                            var_45 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_12] [i_20 + 1]) > (arr_35 [i_12] [i_20 - 1]))))) / (((unsigned long long int) var_2)));
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (arr_29 [i_12] [i_12] [i_12] [i_14] [i_14] [i_22])));
                            arr_74 [i_12] [i_13] [i_14] [i_20] [i_12] = min((arr_65 [i_12] [i_13]), (((((/* implicit */_Bool) ((arr_23 [i_12] [i_13] [i_13] [i_13]) * (arr_61 [i_12] [i_13] [i_14] [i_20] [i_12])))) ? ((~(arr_3 [i_20]))) : (arr_5 [i_20 - 1] [i_20] [i_20 + 2] [i_20 - 1]))));
                            arr_75 [i_12] [i_12] [i_12] [i_13] [i_12] = 13766611287117612768ULL;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 2) /* same iter space */
                        {
                            arr_79 [i_12] [i_13] [i_12] [i_20 + 2] [i_23] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18413270659284226991ULL))));
                            var_47 = ((/* implicit */unsigned long long int) max((var_47), (((arr_32 [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_20 - 1] [i_23]) % (arr_55 [i_23])))));
                        }
                    }
                    arr_80 [i_13] [i_13] &= 16872819708236139214ULL;
                    arr_81 [i_13] [i_13] &= ((arr_78 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 2] [i_12 - 1]) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_50 [i_12] [i_13] [i_13] [i_14] [i_14]))))), (var_8))));
                    var_48 &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 3706125797410274942ULL))))), (min((arr_65 [i_12] [i_12 - 2]), (arr_47 [i_12] [i_13] [i_12] [i_12]))));
                    var_49 = (-(var_5));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
    {
        var_50 ^= (-(max((((((/* implicit */_Bool) arr_45 [10ULL] [4ULL] [10ULL])) ? (var_7) : (arr_62 [i_24] [10ULL] [i_24] [i_24]))), ((-(var_2))))));
        var_51 = ((((/* implicit */_Bool) min((var_6), (arr_8 [i_24] [6ULL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((933439241208013302ULL) < (0ULL)))) : (((/* implicit */int) ((16035423752357301941ULL) == (arr_68 [i_24] [i_24] [i_24] [i_24] [i_24]))))))) : (var_3));
    }
}
