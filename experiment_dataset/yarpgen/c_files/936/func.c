/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/936
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [i_0] [(_Bool)1] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((((arr_16 [i_1] [i_1 - 1] [i_2] [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_16 [(short)3] [i_1 - 1] [i_2] [i_2 + 1] [i_3])) : (((/* implicit */int) arr_16 [(_Bool)1] [i_1 - 1] [i_2] [i_2 + 1] [i_4])))), (((arr_16 [0ULL] [i_1 - 1] [i_2] [i_2 + 1] [0ULL]) ? (((/* implicit */int) arr_16 [i_1] [i_1 - 1] [i_2] [i_2 - 1] [(short)1])) : (((/* implicit */int) var_6))))));
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (8ULL)))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned short) arr_13 [(_Bool)1] [i_5])))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_0)))))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) << (((((/* implicit */int) max((var_1), (var_1)))) - (37666)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_22 [i_0] [6ULL] [i_0] [(unsigned short)7] [i_3] [i_3] [(unsigned short)7])), (arr_13 [(unsigned short)4] [i_6])))), (var_2))))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (arr_16 [(short)8] [i_3] [i_6] [i_1] [i_0])));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((arr_19 [i_0] [i_0] [(_Bool)1] [(unsigned short)4]) ? (((/* implicit */int) arr_7 [(short)1] [i_3 + 1] [i_3 + 1] [i_3])) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_4 [i_6] [i_0]))))))))))));
                        }
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((min((var_7), (var_1))), (var_4))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_4)))) ? (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [(_Bool)1] [(short)4] [i_2] [i_2] [i_2] [i_0] [i_1])))) : (((/* implicit */int) var_0))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((arr_19 [0ULL] [(_Bool)1] [i_2] [(_Bool)1]) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_15 [(_Bool)1] [i_2 - 1] [i_2] [i_1 - 1] [(short)7])) * (((/* implicit */int) var_10)))))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1] [i_8] [i_2 - 1])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_26 [(short)0] [i_8] [i_2])))))));
                        var_22 = ((/* implicit */unsigned short) var_8);
                        var_23 = ((/* implicit */short) max((var_23), (var_3)));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_8] [(_Bool)1] [i_2] [i_2 - 1] [(short)6])) ^ (((/* implicit */int) ((_Bool) var_4)))))) ? (((((/* implicit */int) arr_14 [1ULL] [i_2] [i_2] [i_0])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_1] [(_Bool)1] [i_2] [i_8]))))))) : ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) min((arr_1 [i_2]), (arr_9 [(short)9] [(short)9] [(short)0])))) : (((/* implicit */int) var_4))))));
                        arr_28 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 12520336205351275138ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65525))))));
                    }
                    arr_29 [(_Bool)1] [i_2] [(short)8] = ((short) arr_15 [i_2] [9ULL] [i_0] [i_0] [(_Bool)1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 2; i_9 < 17; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 4; i_10 < 15; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    {
                        var_25 = arr_36 [i_10 - 4] [(_Bool)1] [(short)17];
                        arr_41 [(short)11] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-23521)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (_Bool)0)))));
                        arr_42 [i_10] [(short)17] [(short)17] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_35 [i_9] [i_9] [(_Bool)1] [i_12]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8191)))) : (((/* implicit */int) var_8)))));
                        var_26 = ((/* implicit */short) ((((_Bool) arr_35 [i_10] [i_9 + 1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
                        var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) var_4))), (((((/* implicit */_Bool) 12520336205351275119ULL)) ? (17953280675770974674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5082)))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
    }
    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10)))))))));
}
