/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87656
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
    for (signed char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0 + 1] [i_0 - 3]);
                            arr_11 [i_1] [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */signed char) (+(arr_4 [i_0 - 4] [i_0 - 1] [i_0 - 1])));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_4])))) : (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0 - 4] [i_0 - 2]), (((/* implicit */short) arr_3 [i_0] [i_0]))))))))));
                    var_17 = ((/* implicit */unsigned int) -2012259918);
                    var_18 = ((/* implicit */int) max(((+(arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_0 - 1]))), (arr_10 [(unsigned short)4] [(unsigned short)4] [i_0 - 2] [i_1])));
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_19 = ((/* implicit */int) arr_6 [(signed char)6] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_0 - 1] [i_0 - 4] [i_0 - 4] [i_0] [i_6] [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_7] [i_7] [i_5])) : (max((((/* implicit */int) arr_22 [i_0] [i_6] [i_5] [i_0 - 4] [i_7 - 2])), (arr_7 [i_0] [i_7 - 2])))));
                                arr_25 [i_6] [i_6] = arr_8 [i_0] [i_1] [i_5] [i_5];
                                arr_26 [i_6] = ((/* implicit */short) min((((max((arr_14 [i_1] [i_1]), (((/* implicit */long long int) arr_18 [i_1] [i_6])))) != (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [(unsigned char)1]))))), (((((/* implicit */int) (signed char)92)) >= (((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_0] [i_1] [i_5] [i_6] [i_6])), ((unsigned char)218))))))));
                                var_20 *= ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 - 3] [i_7 - 2]))))) : ((+(arr_10 [i_0 - 3] [i_7 - 2] [i_7 - 2] [i_7 - 2]))));
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_5] [i_1] [i_0] = ((/* implicit */short) ((signed char) min((var_1), (((/* implicit */unsigned int) var_4)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_9 [i_0 - 1] [i_5] [i_5] [i_5] [i_5]), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])))) & (min((((/* implicit */int) ((((/* implicit */_Bool) -4150947212465378473LL)) && (((/* implicit */_Bool) var_3))))), ((+(((/* implicit */int) var_4))))))));
                }
                for (unsigned int i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    arr_31 [i_8] [i_1] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) var_0);
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((signed char)-59), (((/* implicit */signed char) arr_16 [i_0] [i_1] [i_0] [i_10 + 1])))))));
                                arr_39 [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned short) max((((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 3]))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) arr_6 [(signed char)10] [i_9] [i_1] [i_1])))))))));
                                var_23 = ((/* implicit */short) (+(0ULL)));
                                var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_8)) ? (-127994524) : (((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */int) (+(min((max((((/* implicit */long long int) var_5)), (-1509346016606421589LL))), (var_3)))));
}
