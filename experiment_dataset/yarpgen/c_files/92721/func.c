/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92721
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_2))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (~(((unsigned long long int) max((((/* implicit */unsigned long long int) -549316634)), (var_14)))))))));
        arr_4 [i_0] = max((max((var_5), (((((/* implicit */_Bool) var_5)) ? (4397505092862738486ULL) : (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0]) : (14616675359195961320ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */int) ((unsigned long long int) var_1));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), ((-(4856669259353770911ULL)))));
                            arr_15 [i_0] [i_1] [i_0] [i_3 + 1] [5ULL] = ((-1102917512) ^ (49152));
                        }
                    } 
                } 
            } 
            var_18 = ((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]));
        }
        for (int i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            var_19 = ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_5] [i_5]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1878099669)) ? (((/* implicit */int) ((868073235527949789ULL) != (((/* implicit */unsigned long long int) 1995249911))))) : ((~(arr_1 [i_0] [i_5 - 1]))))))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-((+(-18)))))) : (((((var_10) > (var_2))) ? (max((((/* implicit */unsigned long long int) -1475578580)), (var_14))) : (((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_5 - 1] [i_7])))));
                            arr_28 [i_0] [i_5 + 1] [11ULL] [i_7] [2ULL] = ((int) -1995249911);
                        }
                    } 
                } 
                arr_29 [i_0] [i_0] [i_6] = ((unsigned long long int) var_2);
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (((((((/* implicit */unsigned long long int) var_1)) * (var_5))) * ((+(4397505092862738486ULL))))))))));
            }
            var_22 = ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) 120)));
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        var_23 = (~(var_3));
                        arr_40 [2ULL] [2ULL] [i_11] [i_12] = ((int) ((int) var_6));
                        var_24 = ((((/* implicit */_Bool) var_13)) ? (((arr_37 [i_9]) / (var_11))) : (((-1995249929) & (arr_35 [2] [i_11]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 856400087)) ? (-566923078) : (67043328)))) || (((/* implicit */_Bool) ((0ULL) >> (((arr_38 [i_9] [3] [i_9] [2] [i_13]) - (3249742770991321946ULL)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) (((+((-(2224974769771304556ULL))))) < (((7613087550351346858ULL) - (11971678418799842005ULL)))));
                            arr_46 [i_9] [i_10] [i_10] [6ULL] [i_13] [i_9] [i_14 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (min((((/* implicit */unsigned long long int) arr_42 [i_9] [i_9])), (18446744073709551615ULL)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13930846295920535892ULL) != (arr_33 [i_14 - 1]))))));
                            arr_47 [i_9] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_9)) * (arr_36 [1ULL] [1ULL] [i_11] [2ULL])))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 4) /* same iter space */
                        {
                            var_27 |= min((((/* implicit */unsigned long long int) ((16842436396017804236ULL) <= (18446744073709551615ULL)))), (18446744073709551615ULL));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) -1253484238)) : (min((arr_49 [i_9] [i_10]), (((/* implicit */unsigned long long int) -1842486465))))));
                            var_29 = ((((/* implicit */_Bool) (-(17066214963429336844ULL)))) ? (min((var_7), (var_11))) : (((/* implicit */int) ((var_14) <= (arr_43 [i_11] [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 2] [i_15])))));
                        }
                        arr_50 [i_9] [i_9] [i_10] [i_9] [i_13] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1740015585), (var_10)))) && (((/* implicit */_Bool) var_14))))), ((-((+(2202899909179382007ULL))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_45 [i_9] [8ULL] [8ULL] [i_13] [2]))));
                        var_31 -= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 6607989942096849928ULL)))) ? (arr_45 [i_9] [i_10] [i_11] [i_13] [i_11]) : (((/* implicit */int) (!(((/* implicit */_Bool) -2058176526)))))))) ? (((int) arr_30 [i_9] [i_9])) : (((/* implicit */int) ((((/* implicit */_Bool) -1774057667)) && (((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [i_13]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 2) 
                        {
                            {
                                arr_57 [i_17] [i_16] [i_11] [i_10] [0ULL] = ((/* implicit */int) ((unsigned long long int) ((((unsigned long long int) var_8)) | (((/* implicit */unsigned long long int) ((int) 8644247135665378648ULL))))));
                                arr_58 [i_9] [3] [i_9] [7ULL] [4ULL] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_9] [5] [i_11] [i_16] [i_17])) ? (((unsigned long long int) 29360128)) : (((unsigned long long int) arr_44 [8ULL] [i_16] [i_11] [i_10] [i_10] [i_9] [i_9]))))) ? (var_12) : (((/* implicit */unsigned long long int) var_0))));
                                var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_4)), (arr_43 [9ULL] [i_10] [8ULL] [i_16] [i_17] [i_10]))), (arr_34 [9] [i_10]))))));
                                var_33 = ((/* implicit */unsigned long long int) var_0);
                                var_34 = (~(((unsigned long long int) (~(var_10)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 -= -76771663;
}
