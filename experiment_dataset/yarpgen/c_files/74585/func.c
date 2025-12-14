/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74585
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
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))) % (var_14)))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1] [i_0] [i_0]), (arr_4 [i_0] [4U] [i_1]))))))) >> (((((var_4) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_1))))))) - (297869764ULL))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_11));
                                var_18 += ((/* implicit */signed char) max((((/* implicit */short) var_0)), (max((((/* implicit */short) (!(var_7)))), (max((arr_3 [i_0] [i_2]), (((/* implicit */short) var_7))))))));
                                var_19 |= ((/* implicit */short) (~(16425248396395352423ULL)));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((var_9) + (((/* implicit */int) arr_2 [i_3] [i_1] [i_1])))))) >= (((/* implicit */int) var_1)))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((var_3) - (6119095689114783262ULL)))))), (max((((/* implicit */unsigned long long int) var_11)), (var_15)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_0] [i_0] [i_0]))))));
                var_22 |= ((/* implicit */unsigned char) max((max((var_5), (((/* implicit */unsigned long long int) var_12)))), (max((max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])), (var_4))), (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) (((-(var_15))) <= (((/* implicit */unsigned long long int) max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 1668387289U)))), (max((((/* implicit */long long int) arr_6 [(short)3])), (arr_1 [i_5] [i_5]))))))));
                    arr_19 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) ((min((arr_1 [i_5] [i_6]), (((/* implicit */long long int) arr_2 [i_6] [i_6 - 1] [i_5 + 1])))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))))) & (max((var_14), (((/* implicit */unsigned int) var_7)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_7] [5ULL] [i_7] [i_7])) < (((/* implicit */int) arr_2 [i_5] [i_6] [i_5]))))) >= (((/* implicit */int) ((short) var_10)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1668387289U)) && (((/* implicit */_Bool) 2626580022U)))))));
                        arr_22 [i_5 - 3] [i_5] [i_7] [i_5] = ((/* implicit */long long int) var_14);
                        var_25 = (+(((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 - 2] [i_5 + 1] [i_6 - 2] [i_6] [i_5 + 1]))) : (arr_15 [i_5] [i_5] [i_5]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_25 [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) var_14)) : (var_15)))) ? ((-(arr_15 [i_5] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (var_4)))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_5 [i_5] [(signed char)4] [i_5 - 1]) < (var_5)))) == (((/* implicit */int) arr_2 [i_6] [i_7] [i_9]))));
                            arr_26 [i_9] [i_9] [i_5] [6LL] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((unsigned short) arr_1 [i_6 + 3] [i_6]));
                        }
                        var_27 = arr_5 [i_5] [(short)6] [i_7];
                    }
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_29 [i_7] |= (-((-(((var_2) ? (arr_28 [(short)8] [(short)8] [(short)8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        var_28 |= ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_7] [i_7] [i_6])) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_28 [i_5] [i_7] [i_6] [i_7]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_11)))) && (((/* implicit */_Bool) arr_8 [i_5] [i_6 - 2] [i_7] [i_5] [i_10]))))));
                        arr_30 [i_5] [i_5] [i_5] [(short)4] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_5] [i_6 + 2] [i_5] [i_5 + 2]), (arr_10 [i_5] [i_6 + 2] [i_7] [i_5 + 2])))) ? (((((/* implicit */int) arr_10 [i_5] [i_6 + 2] [i_5] [i_5 + 2])) - (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_10 [i_5] [i_6 + 2] [i_7] [i_5 + 2]))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (-735211767)))) - (((/* implicit */int) ((((/* implicit */int) arr_8 [i_5] [i_6] [i_7] [i_10] [i_7])) == (((/* implicit */int) max((((/* implicit */short) arr_2 [i_5 - 1] [i_5] [i_5])), (var_1)))))))));
                    }
                }
            } 
        } 
    } 
}
