/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63841
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 463524691))));
    var_20 = ((/* implicit */unsigned short) var_14);
    var_21 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) arr_1 [i_0] [i_0 + 1]);
        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_10) % (var_16)))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_13)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) var_14)) : (var_2)))) ? (min((0ULL), (var_8))) : (var_8)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_25 = (~(var_5));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_2] [i_3 + 3] [i_2]))))) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_4 + 2])))) : (((/* implicit */int) arr_13 [i_4 - 2] [i_4 - 2] [i_3] [i_4 - 2] [i_3])));
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_1] = (-(arr_14 [i_3] [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 2] [i_3]));
                            arr_16 [i_3] [i_5] [i_4] [i_3 - 1] [i_3] [i_2] [i_3] = ((/* implicit */short) var_12);
                            var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) var_14))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))))));
            arr_18 [i_2] = ((/* implicit */int) 11371937720640615750ULL);
            var_28 = ((/* implicit */short) (+(arr_11 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1])));
        }
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_29 += ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_7 [i_6] [i_1])), (var_16)))));
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_13);
            var_30 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_6] [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_9))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((/* implicit */_Bool) (+(arr_7 [i_1] [i_6])))) ? (arr_8 [i_1] [i_6] [i_7]) : ((~((~(11371937720640615764ULL)))))))));
                var_32 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_2 [i_7])) : (arr_20 [i_7] [i_6] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1]))) : (var_1)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    var_33 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_13)) : (17602412961207669018ULL))));
                    var_34 &= ((/* implicit */int) (+(arr_23 [i_8 + 1] [i_7] [i_1])));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 7074806353068935866ULL)) ? (7074806353068935884ULL) : (((/* implicit */unsigned long long int) -988519550))))))));
                }
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9] [i_6] [i_9] [i_9] [i_9] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_2)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_24 [i_9]))));
                arr_28 [i_1] = ((/* implicit */short) ((arr_26 [i_1]) ^ (var_13)));
                arr_29 [i_9] [i_9] [i_6] [i_1] = ((((/* implicit */_Bool) 324490184852376758ULL)) ? (var_1) : (7074806353068935884ULL));
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_9])) ? (((/* implicit */int) var_17)) : (var_11)));
            }
            for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (~(var_16))))));
                arr_33 [i_10] [i_6] = var_4;
                var_39 = ((/* implicit */int) (-(((((/* implicit */_Bool) 7074806353068935884ULL)) ? (arr_25 [i_10 - 1] [i_10 + 1]) : (var_3)))));
            }
            for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) 
            {
                arr_36 [i_11] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_6)), (var_4))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_6] [i_6] [i_11] [i_11]))))))) : (var_7));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 4) 
                {
                    arr_39 [i_1] [i_6] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_1)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_2))))))), (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_6])))));
                    var_40 |= ((/* implicit */short) min((min((((((/* implicit */unsigned long long int) var_11)) % (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))))), (max((max((var_10), (((/* implicit */unsigned long long int) var_9)))), (min((11371937720640615753ULL), (7074806353068935884ULL)))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    arr_42 [i_1] [i_6] [i_11 - 1] [i_6] [i_13] = (-(8826542367946453566ULL));
                    arr_43 [i_13] [i_11] [i_6] = ((/* implicit */short) min(((-(var_5))), (((((/* implicit */_Bool) arr_30 [i_13] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */unsigned long long int) arr_40 [i_6] [i_6] [i_11] [i_11 - 1])) : (var_7)))));
                }
                var_41 = max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)7680)) : (var_13)))))), (max((max((((/* implicit */unsigned long long int) arr_37 [i_1] [i_1] [i_11 + 1] [i_1])), (var_2))), (7074806353068935871ULL))));
            }
        }
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_5), (((/* implicit */unsigned long long int) arr_2 [i_1])))), (((/* implicit */unsigned long long int) var_9))))) ? (max((((/* implicit */unsigned long long int) min(((unsigned short)63), (((/* implicit */unsigned short) var_17))))), ((~(var_5))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 9528088343953692151ULL)) ? (var_14) : (((/* implicit */int) var_15))))))))))));
        var_43 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (var_14))) : (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_6)) - (9454)))))));
    }
}
