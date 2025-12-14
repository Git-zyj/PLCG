/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5763
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
    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))));
    var_12 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((((/* implicit */_Bool) 8522449253597835867ULL)) ? (11ULL) : (11ULL))), (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_13 ^= ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_2 [i_3])))))));
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_3)))) << (((var_9) - (15952932240762083598ULL)))));
                    }
                    for (long long int i_4 = 4; i_4 < 21; i_4 += 4) 
                    {
                        var_14 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_4 - 3] [i_4] [i_1] [i_4] [i_0 + 1])) : (((/* implicit */int) var_2))))) : ((~(arr_8 [i_4] [i_2] [i_1] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4 - 1] [i_4] [i_2 + 3] [i_4] [i_0 - 1])) + (((/* implicit */int) arr_12 [i_4 + 1] [i_1] [i_2 - 1] [i_1] [i_0 + 1])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_7)) - (8068))))));
                            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_4] [i_5])) ? (arr_6 [(unsigned short)10] [i_1] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_4])))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_1])) ? (arr_6 [i_0] [i_1] [i_4 - 3] [i_5]) : (arr_2 [i_0])))));
                            var_17 = ((/* implicit */unsigned long long int) ((arr_5 [i_2 + 2] [i_4 - 1]) | (arr_2 [i_0])));
                            var_18 ^= ((((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_6 [i_5] [i_0] [i_2] [i_0]))) >> (((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))) - (4086862606903159292ULL))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_21 [3ULL] [i_4 - 3] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 1401516811011996938LL)) ? (((/* implicit */unsigned long long int) -2871804713189140359LL)) : (8522449253597835867ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)45216))))))) ? (8820645613508008179ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775802LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46514))))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((min((max((arr_11 [(unsigned short)0] [(unsigned short)0] [(unsigned short)6] [(unsigned short)5]), (arr_17 [i_0] [17ULL] [i_2] [i_4] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_6] [i_2] [i_4] [i_2] [i_1] [i_1])) && (((/* implicit */_Bool) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6] [i_1] [i_1] [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_2] [i_4] [i_0] [(unsigned short)1])) : (((/* implicit */int) var_6))))))))))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_20 &= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((arr_23 [(unsigned short)15] [(unsigned short)15] [i_2] [i_2] [i_2] [i_8]) & (var_0)))) ^ (max((var_5), (arr_14 [i_0] [i_0] [i_2] [i_7] [i_8] [12ULL] [i_1])))))));
                            arr_28 [i_0] = max(((unsigned short)25), ((unsigned short)4203));
                        }
                        var_21 = ((/* implicit */unsigned long long int) var_3);
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_9] [i_9 + 2] [i_9 - 1] [i_9] [i_9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9] [i_9] [i_9 - 3])))))) ? (min((((/* implicit */unsigned long long int) min((var_7), (arr_12 [(unsigned short)19] [(unsigned short)19] [i_2] [i_0] [i_9])))), (max((var_8), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_29 [i_0] [i_2 + 2] [i_9 - 2] [i_9 - 3])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_2 - 1] [i_2 + 2] [i_9 - 2])))))));
                            arr_31 [i_0] [i_7] [i_2] [i_2] [13LL] [i_0] = ((/* implicit */unsigned short) (~(arr_2 [i_0])));
                            var_23 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (arr_2 [i_1])))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_1] [15LL])), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) arr_18 [(unsigned short)15] [i_0 + 1] [i_1] [i_2] [i_2 + 1] [i_9])) ? (arr_30 [i_1] [i_2] [i_9]) : (var_9)))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_24 += ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_24 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2 + 3])), (max((((/* implicit */int) ((unsigned short) arr_26 [i_10]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))));
                            var_25 *= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_5) : (arr_25 [i_10] [i_7] [i_1] [i_1] [i_0] [i_0 + 1]))), (((/* implicit */unsigned long long int) (((-(arr_23 [i_0] [i_1] [i_2] [10LL] [i_10] [i_10]))) < (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_7)))))))));
                            var_26 = ((/* implicit */unsigned short) max(((-(max((arr_22 [i_0] [i_1] [i_2] [i_7] [i_10] [i_10]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_0 - 1] [i_0] [10ULL] [i_0 - 1] [i_7])))));
                            arr_35 [i_10] [i_0] [i_10] [i_10] [i_10] [i_2 + 2] = var_5;
                        }
                        arr_36 [i_0] [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) arr_0 [10ULL]))))) ? (max((var_0), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [i_1]), (var_2)))))))), (((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [10LL] [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_26 [i_0])))))));
                    }
                    arr_37 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max((var_9), (((((/* implicit */_Bool) min((var_1), (arr_18 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [5LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) : (max((var_9), (var_8)))))));
                    var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0])) : (var_5)))) && (((/* implicit */_Bool) max((arr_33 [i_0]), (var_2))))))), (arr_25 [i_2] [(unsigned short)13] [(unsigned short)13] [i_0 + 1] [i_1] [i_0 + 1])));
                }
            } 
        } 
        var_28 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0])), (max((arr_27 [i_0] [(unsigned short)20] [i_0] [(unsigned short)20] [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_2 [12LL]))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) / (var_8)))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [i_0] [5ULL] [i_0] [i_0 + 1] [6ULL] [i_0] [i_0])) ? (arr_17 [i_0] [10LL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [4LL]))))), (((/* implicit */unsigned long long int) max((var_1), (var_4))))))) ? (max((((/* implicit */unsigned long long int) 1401516811011996958LL)), (14878896963981531997ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [(unsigned short)7] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((-(((/* implicit */int) var_4)))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_11 [i_11] [i_11] [i_11] [i_11])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (arr_17 [i_11] [i_11] [i_11] [i_11] [i_11])))));
        arr_43 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [(unsigned short)0] [i_11] [14ULL] [i_11])))))) ? (min((((/* implicit */unsigned long long int) min((arr_12 [i_11] [i_11] [i_11] [2LL] [i_11]), (arr_39 [i_11])))), (min((((/* implicit */unsigned long long int) arr_23 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])), (var_5))))) : (((((/* implicit */_Bool) var_6)) ? (arr_32 [0LL]) : (arr_40 [i_11]))));
    }
    var_30 = ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
}
