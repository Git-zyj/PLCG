/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83054
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((arr_6 [i_1] [i_1 + 1] [i_1]) + (arr_11 [i_0] [i_0] [i_0] [i_0]))) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_2])))))));
                        arr_13 [i_0] &= ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_3 - 2] [i_3 + 1] [i_1 + 2] [i_2 - 2])) != (arr_10 [i_0] [i_1] [i_3 - 2] [i_2 + 1])));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned short) (-(arr_3 [i_2] [i_0] [i_0])));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) (~(arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((arr_15 [i_4]), (var_3)))) ^ (((/* implicit */int) arr_2 [i_4])))), (((/* implicit */int) arr_4 [i_4] [i_4]))));
                arr_21 [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23284))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)58931)))) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_5 - 1])) - (arr_18 [i_5 + 1] [i_5 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 3; i_7 < 7; i_7 += 4) 
                    {
                        {
                            arr_28 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */short) ((unsigned int) arr_27 [i_7] [i_5] [i_7 - 1] [i_5 - 1] [i_5 - 1] [i_6]));
                            var_17 = ((/* implicit */_Bool) min((((/* implicit */int) arr_20 [i_4])), ((-(((/* implicit */int) arr_20 [i_4]))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                            {
                                arr_31 [i_4] [i_4] [i_4] [i_7] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 + 4] [i_5 - 1]))) ^ (((18446744073709551615ULL) | (0ULL)))));
                                var_18 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                            for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                            {
                                var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_7 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_4] [i_5 - 1]))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_10 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 - 3]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])))))) : (((((/* implicit */_Bool) arr_10 [i_7 - 1] [i_7 - 3] [i_7 + 4] [i_7 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_7 - 3] [i_7 + 4] [i_7 - 2] [i_7 + 2]))))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                            {
                                arr_38 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_11))) == ((+(((/* implicit */int) (_Bool)1))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((985346339) ^ (((/* implicit */int) (unsigned char)255)))) != ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4]))) & (((((/* implicit */_Bool) arr_25 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5 + 1]))) : (((((/* implicit */_Bool) 5077537660851240764LL)) ? (arr_11 [i_4] [i_5] [i_4] [i_4]) : (arr_22 [i_4] [i_4] [i_4] [i_5])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_7);
    var_24 = ((/* implicit */unsigned short) max((var_2), ((~(((2994950488301885629ULL) | (((/* implicit */unsigned long long int) 1466675935686108538LL))))))));
}
