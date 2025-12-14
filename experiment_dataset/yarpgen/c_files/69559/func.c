/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69559
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
    var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 63ULL))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_7 [9ULL] [i_0 + 2] [i_2] [i_2] = (~(((7029914318964642678ULL) >> (((9676208976981120158ULL) - (9676208976981120142ULL))))));
                arr_8 [i_0] = min((((((/* implicit */_Bool) min((arr_6 [10ULL] [i_1] [i_1] [i_0]), (var_1)))) ? (min((arr_0 [i_2] [5ULL]), (arr_4 [5ULL] [i_0 + 3] [i_1 + 1] [i_2]))) : (min((arr_0 [i_0 - 1] [i_2]), (var_2))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_2])) ? (arr_2 [i_0] [2ULL] [i_2]) : (arr_2 [i_1 + 2] [i_1 + 2] [2ULL]))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_17 = max((min((min((arr_2 [i_3] [i_0 - 1] [i_0 - 1]), (var_5))), (((arr_1 [i_0]) - (arr_9 [i_4] [i_4] [i_2]))))), (min((((arr_1 [i_4]) - (arr_1 [i_0]))), (arr_2 [i_3] [i_2] [i_0]))));
                            arr_14 [i_3] [i_3] = min((max((min((5465033862847471992ULL), (8229829109629574049ULL))), (((unsigned long long int) arr_6 [8ULL] [i_1] [i_1] [i_1 + 1])))), (((((/* implicit */_Bool) min((var_1), (var_5)))) ? (min((arr_3 [i_4] [6ULL]), (arr_3 [7ULL] [7ULL]))) : (arr_11 [i_0] [i_0 + 3] [i_1 + 1] [i_1 - 1] [i_4] [i_3] [i_4]))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((arr_11 [i_0 + 1] [i_0 + 2] [i_0 + 3] [i_0 - 1] [i_1 + 2] [i_5] [i_6 + 2]) == (arr_11 [i_0] [i_0 + 1] [i_0 + 3] [4ULL] [i_1 + 1] [i_5] [i_6 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
                    {
                        var_19 = (~(arr_4 [i_0] [i_1 - 1] [i_5] [i_6]));
                        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_1] [i_1] [i_5] [i_5] [i_5]) <= (arr_17 [i_0] [i_0] [i_6] [i_5]))))) | (arr_16 [i_1 - 1] [i_1 + 2]));
                        var_21 = ((arr_12 [i_0 + 1] [i_6 + 2] [i_5] [i_1] [i_7]) % (arr_20 [i_0 - 1] [i_1 + 1] [i_6 + 1] [i_7 + 2]));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((var_5) != (arr_5 [i_8 - 1] [i_1 - 1] [i_0] [6ULL])));
                        arr_26 [i_0] [6ULL] [i_8] [3ULL] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 3] [i_8] [i_0 + 3])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0 - 1] [i_8] [i_0 - 1]))));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_23 |= (+((~(((unsigned long long int) arr_12 [i_0] [i_1 + 2] [i_5] [i_1 + 2] [i_9])))));
                    var_24 -= ((/* implicit */unsigned long long int) (((((-(var_8))) > (((unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1] [i_0])))) || (((/* implicit */_Bool) (+(arr_27 [i_0]))))));
                }
                arr_30 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (arr_13 [6ULL] [i_1] [i_1] [i_1 + 1] [6ULL] [6ULL] [6ULL]))))) <= (((((/* implicit */_Bool) 8229829109629574049ULL)) ? (8770535096728431458ULL) : (11ULL)))))), (((((((/* implicit */_Bool) var_3)) ? (var_14) : (var_7))) >> ((((~(13567340198681009921ULL))) - (4879403875028541633ULL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_22 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]) <= ((-(arr_4 [i_0] [i_1] [i_0] [7ULL])))))) << (((min((max((arr_3 [i_0] [i_1]), (var_10))), (((((/* implicit */_Bool) arr_18 [2ULL])) ? (arr_5 [i_0] [i_1] [i_5] [i_10]) : (var_14))))) - (10338425805244765728ULL)))));
                    var_26 = arr_29 [i_10];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_27 = min((arr_6 [i_0] [i_5] [i_10] [i_11 + 1]), (min((arr_33 [i_11] [i_11] [i_11 - 1] [i_1 + 1] [i_11] [1ULL]), (arr_33 [i_11] [i_11] [i_11] [i_1 + 1] [i_11] [i_0 + 1]))));
                        var_28 -= ((((/* implicit */_Bool) (+(arr_13 [4ULL] [i_0 + 1] [3ULL] [2ULL] [i_0] [i_0 + 2] [i_10])))) ? (max((arr_33 [i_1 - 1] [i_10] [2ULL] [i_0 + 3] [i_11] [i_10]), (min((arr_16 [9ULL] [i_1 + 2]), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((10216914964079977568ULL), (17134011142259184213ULL))) != (var_11))))));
                        arr_36 [i_11] [i_10] [i_11] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7202683947925987350ULL))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [9ULL] [i_0] [7ULL] [7ULL] [i_0] = min((max((4772502917884527362ULL), (18446744073709551615ULL))), (arr_31 [i_12] [i_5] [i_1 + 2] [i_0]));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), ((((!(((/* implicit */_Bool) arr_38 [i_5] [i_1 + 2])))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 11940705503139726626ULL)) ? (12104398194957325289ULL) : (10216914964079977592ULL))))))))))));
                        var_30 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_1 + 2] [2ULL])))))) | ((~(arr_13 [i_0] [2ULL] [8ULL] [i_10] [i_10] [2ULL] [i_0])))));
                        var_31 += ((max((arr_17 [i_0 + 1] [i_1 - 1] [i_12 - 1] [3ULL]), (arr_2 [i_0 + 1] [i_1 - 1] [i_12 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_38 [i_0 - 1] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_39 [i_0] [i_0] [i_0] [i_0 + 3] [i_0]) <= (var_5))))))))));
                        var_32 = ((((unsigned long long int) arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_12 - 1] [i_1 - 1])) * (max((arr_20 [i_0 + 2] [i_1] [i_12] [i_12 + 1]), (arr_20 [i_0 + 3] [i_1 + 2] [i_5] [i_12 + 1]))));
                    }
                    var_33 = arr_9 [7ULL] [7ULL] [i_0];
                }
            }
            for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
            {
                var_34 = max((18446744073709551601ULL), (7902167013565412115ULL));
                arr_43 [6ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_24 [i_13 + 1] [i_13] [i_1] [i_1] [i_0])), (arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 2])))) || (((/* implicit */_Bool) min((arr_27 [i_0 + 2]), (arr_27 [i_0 + 3]))))));
                var_35 = min((max((arr_12 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [8ULL]), (arr_12 [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_1 + 1] [i_1]))), (((arr_12 [i_0] [i_1] [i_0 + 3] [i_1] [i_0]) / (arr_12 [i_0] [i_0] [i_0 + 3] [i_13] [4ULL]))));
                arr_44 [i_0 + 2] [i_0] [i_1] [9ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (arr_19 [6ULL])))))))) != ((+(((unsigned long long int) arr_4 [i_1] [i_1] [i_13] [i_1 + 2]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
            {
                var_36 = ((arr_24 [i_14 + 2] [4ULL] [5ULL] [i_0 + 1] [i_0 + 1]) + (arr_39 [i_1] [i_1] [i_1 - 1] [i_1] [i_1]));
                arr_48 [8ULL] [i_1] [i_1 + 2] [i_1] = var_1;
                var_37 ^= ((unsigned long long int) arr_47 [i_0 + 2]);
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [2ULL] [i_0 + 2] [i_1 + 2] [i_14 + 1] [i_14 + 1])) && (((/* implicit */_Bool) arr_33 [i_0 + 2] [4ULL] [4ULL] [i_1 - 1] [i_14 + 1] [i_1 - 1])))))));
                arr_49 [i_0 + 3] [i_0 + 3] = ((unsigned long long int) arr_17 [i_0 + 1] [i_0 - 1] [i_1] [8ULL]);
            }
            arr_50 [i_0] [i_1 + 2] = ((unsigned long long int) min((arr_34 [i_1] [i_1 + 1] [i_0 + 1] [i_0 + 3] [i_1 + 2]), (arr_34 [i_0] [i_1 + 1] [i_0] [i_0 + 2] [i_1 + 1])));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 1) /* same iter space */
        {
            arr_53 [i_15 - 1] [i_15] [i_0] = ((((/* implicit */_Bool) arr_35 [i_0 + 1] [3ULL] [i_15] [0ULL] [i_15] [i_15])) ? (arr_46 [i_15 - 1] [i_15] [i_15] [i_0 + 3]) : (arr_38 [i_0 + 2] [i_0 - 1]));
            arr_54 [6ULL] [2ULL] [1ULL] = ((((/* implicit */_Bool) arr_20 [i_0] [i_15 + 1] [i_0] [i_15])) ? (var_8) : (arr_22 [i_0 + 1] [i_15 - 1] [i_0] [i_0] [i_0 + 3]));
        }
        arr_55 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0])) || (((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 2] [6ULL] [6ULL])))))) != ((+(((arr_0 [3ULL] [i_0 + 3]) | (arr_13 [i_0] [i_0 - 1] [9ULL] [i_0] [9ULL] [i_0] [i_0 + 2])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_16 = 3; i_16 < 10; i_16 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 4; i_17 < 9; i_17 += 3) 
            {
                arr_61 [i_16] = ((unsigned long long int) arr_4 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_17 + 2]);
                var_39 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_17] [i_17] [i_16 - 2] [4ULL] [i_0 - 1])))))) - (var_10));
                var_40 = var_6;
            }
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                arr_64 [5ULL] [i_16] [i_18] [i_0] = arr_18 [10ULL];
                arr_65 [i_16] = ((unsigned long long int) arr_31 [i_16 + 1] [i_0 + 3] [i_0 + 2] [i_0 + 1]);
            }
            for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_41 = (-(var_11));
                var_42 = ((/* implicit */unsigned long long int) ((arr_46 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_16 - 3]) <= (arr_58 [i_16])));
            }
            for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                var_43 = ((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_20])) ? (arr_3 [i_16] [i_20]) : (arr_33 [i_0] [i_16] [i_0] [i_0] [i_16 + 1] [i_20]));
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    arr_73 [i_21] [i_16] [i_16] [i_0] = ((/* implicit */unsigned long long int) ((var_2) > (arr_25 [i_0 + 3] [i_0])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        var_44 -= ((((/* implicit */_Bool) 17858373446281822187ULL)) ? (0ULL) : (7702635957904806763ULL));
                        arr_76 [8ULL] [i_21] [i_16] [i_16] [i_16] [i_0 + 3] = ((/* implicit */unsigned long long int) ((var_0) <= (arr_60 [i_16])));
                        arr_77 [i_16] [i_16] [i_20] [i_21] [i_22] = ((unsigned long long int) var_1);
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((((/* implicit */_Bool) ((arr_56 [8ULL] [i_20] [8ULL]) ^ (arr_32 [i_0] [i_0 - 1] [i_0])))) ? (arr_18 [i_0 + 2]) : (arr_34 [i_0] [i_16 + 1] [i_0 + 3] [i_16] [i_16 - 3])))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 3) /* same iter space */
                    {
                        var_46 = (-(var_14));
                        var_47 = ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_16 + 1] [i_16 - 3]) : (arr_3 [i_16 - 3] [i_16 - 2]));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
                    {
                        var_48 = ((((/* implicit */_Bool) 10544577060144139503ULL)) ? (5665099003597922272ULL) : (13ULL));
                        arr_82 [i_0] [i_0] [0ULL] [0ULL] [i_16] [i_0] = arr_63 [i_16] [i_20] [i_24];
                        arr_83 [i_0 + 3] [i_16] [9ULL] [i_21] [i_24] = arr_25 [i_20] [i_20];
                    }
                    arr_84 [i_16] = var_14;
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_25 = 3; i_25 < 9; i_25 += 3) 
                {
                    var_49 = ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]));
                    var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_0] [i_0 + 1] [i_16])) && (((/* implicit */_Bool) arr_11 [i_25] [i_16 + 1] [i_0 + 2] [i_16 + 1] [i_16] [i_16] [i_25 + 2]))));
                }
                for (unsigned long long int i_26 = 1; i_26 < 9; i_26 += 3) 
                {
                    var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    var_52 = ((unsigned long long int) arr_89 [i_26] [3ULL] [i_0] [i_0] [i_0]);
                }
                for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 2) 
                    {
                        arr_94 [i_0] [i_16] [i_20] [i_20] = (+(arr_1 [i_0 - 1]));
                        var_53 += ((arr_81 [9ULL] [i_16 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 3]) ^ (arr_42 [i_16] [i_0 - 1] [i_0] [i_0 + 2]));
                        var_54 = ((((/* implicit */_Bool) var_5)) ? (arr_45 [i_0 + 3] [i_16 - 3] [i_16 - 3]) : (arr_45 [i_0 + 2] [i_16 - 2] [i_20]));
                    }
                    arr_95 [i_0] [i_16 - 2] [i_0] [i_16] = ((/* implicit */unsigned long long int) ((((arr_51 [i_0] [i_0] [5ULL]) % (arr_68 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0]))) > (arr_10 [i_0 + 3] [0ULL] [i_20] [i_27] [i_16])));
                    arr_96 [i_0] [i_16] [i_16] [i_16] [i_20] = ((((var_14) & (var_8))) ^ ((~(arr_91 [2ULL] [i_16] [i_16] [i_16] [5ULL] [i_27]))));
                }
                arr_97 [i_0] [i_0] [i_16] = arr_29 [i_16 - 3];
            }
            var_55 = var_8;
            /* LoopNest 3 */
            for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 1) 
                {
                    for (unsigned long long int i_31 = 1; i_31 < 10; i_31 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                            arr_104 [6ULL] [i_0 + 3] [i_16] [i_29] [i_30] [6ULL] &= ((arr_60 [0ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_0] [6ULL] [i_29] [i_16 - 1] [i_0]) == (arr_52 [i_0]))))));
                        }
                    } 
                } 
            } 
            var_57 = ((/* implicit */unsigned long long int) ((arr_67 [1ULL] [i_0 + 2] [i_16 + 1]) > (arr_67 [8ULL] [i_0 + 1] [i_16 - 2])));
        }
        var_58 = ((min((((/* implicit */unsigned long long int) ((arr_51 [9ULL] [i_0] [4ULL]) != (arr_62 [2ULL] [10ULL] [i_0])))), (min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [8ULL] [i_0]), (arr_27 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_100 [8ULL] [4ULL]) : (arr_29 [i_0 + 2]))) > (arr_32 [i_0] [i_0] [0ULL]))))));
    }
    for (unsigned long long int i_32 = 0; i_32 < 15; i_32 += 3) 
    {
        var_59 = (+(min((min((arr_106 [i_32] [i_32]), (arr_106 [14ULL] [i_32]))), (((var_5) / (arr_106 [i_32] [i_32]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_33 = 0; i_33 < 15; i_33 += 1) 
        {
            var_60 = arr_105 [i_33];
            arr_109 [i_32] [i_33] [i_32] = ((max(((~(arr_108 [i_33] [i_33] [i_33]))), (var_1))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((10216914964079977571ULL) | (7304204126685292987ULL)))))))));
            var_61 *= (~(max((arr_105 [i_32]), (arr_105 [i_33]))));
        }
    }
    for (unsigned long long int i_34 = 0; i_34 < 18; i_34 += 1) 
    {
        arr_112 [i_34] [i_34] = (-(arr_110 [i_34]));
        /* LoopSeq 1 */
        for (unsigned long long int i_35 = 0; i_35 < 18; i_35 += 3) 
        {
            arr_116 [i_34] [i_35] [14ULL] |= ((max((arr_110 [i_35]), (arr_110 [i_35]))) - (min((arr_110 [i_34]), (arr_110 [i_34]))));
            var_62 = ((((arr_113 [i_35]) - (arr_110 [i_34]))) | (((unsigned long long int) 13542262604873823466ULL)));
        }
        var_63 = (~(min((max((15815605699344130547ULL), (arr_115 [i_34] [14ULL] [i_34]))), (16109930402402218562ULL))));
        var_64 = min(((~(arr_111 [i_34]))), (min((arr_114 [8ULL]), (arr_114 [16ULL]))));
        arr_117 [i_34] = ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((unsigned long long int) arr_111 [i_34])) : (((unsigned long long int) ((arr_115 [i_34] [0ULL] [i_34]) | (arr_111 [7ULL])))));
    }
    for (unsigned long long int i_36 = 0; i_36 < 15; i_36 += 3) 
    {
        var_65 = ((((unsigned long long int) ((13480189847522237281ULL) << (((10544577060144139502ULL) - (10544577060144139473ULL)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_120 [i_36] [i_36]), (arr_107 [12ULL] [12ULL] [i_36]))))))));
        var_66 = ((/* implicit */unsigned long long int) min((var_66), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4816291985333452478ULL))))), (((arr_118 [i_36]) << (((arr_118 [i_36]) - (8665582256589905819ULL)))))))));
    }
}
