/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75731
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_1] [i_1] [0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [(unsigned char)3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)92);
                }
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_0] [i_1])))));
                var_12 &= ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((1734785601), (((/* implicit */int) arr_0 [i_0] [i_1])))))))), (min((arr_2 [i_1]), (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 3864363695292420483LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_4 - 1] [i_4 - 2]), (arr_0 [i_4 - 1] [i_4 - 1]))))) : (max((((/* implicit */unsigned long long int) arr_14 [(unsigned short)2] [(unsigned char)11] [i_3] [i_4] [i_4] [i_4 - 2])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [(short)2] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_3] [i_0])) ? (arr_5 [i_4 + 1] [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                            var_15 &= ((/* implicit */long long int) (~(((((((/* implicit */long long int) -1734785610)) < (var_5))) ? (max((var_1), (var_0))) : (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                            {
                                arr_18 [i_3] [i_1] [i_3] [i_1] [i_5] &= ((/* implicit */unsigned long long int) var_8);
                                var_16 = ((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1] [i_1]);
                            }
                            for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_3] [i_6]))))) && (((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                            {
                                arr_25 [i_1] [i_4] [i_4] [i_4 - 2] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (arr_7 [i_0] [i_1])))), (14974163946090463817ULL)))));
                                arr_26 [i_0] [i_1] [4ULL] [i_1] [i_7] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) : (((((/* implicit */int) var_8)) | (((/* implicit */int) arr_14 [i_7] [i_4] [i_4 - 2] [i_3] [i_1] [i_0]))))))) ? (((/* implicit */int) var_11)) : ((-(arr_20 [(signed char)12] [i_4 + 1] [i_4] [i_4 + 1])))));
                                arr_27 [i_1] [i_1] [(signed char)0] [i_3] [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) min((min(((unsigned short)2047), (((/* implicit */unsigned short) arr_22 [i_1] [i_1] [i_1] [i_4 - 2] [i_1])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_0] [i_4 - 2] [i_7])) || (((/* implicit */_Bool) arr_22 [i_1] [i_3] [i_3] [i_4 + 1] [i_4])))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (unsigned char)223);
                            var_19 = min((min((2147483644), (((/* implicit */int) arr_23 [i_0] [i_1] [i_8] [i_8] [i_9] [i_9] [(short)17])))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_8] [i_1] [i_1] [i_9] [i_0] [i_8] [i_1])) != (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)4]))))));
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */short) max((((((/* implicit */_Bool) max((-1875742293948934048LL), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) var_9)) ? (-2147483644) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((var_0), (var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_10 = 1; i_10 < 24; i_10 += 4) 
    {
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            {
                arr_41 [i_11] = ((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned long long int) arr_33 [i_10]))));
                var_22 = ((/* implicit */_Bool) ((short) var_2));
            }
        } 
    } 
}
