/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89144
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
    var_18 &= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) (short)26966)) ? (((/* implicit */int) (short)-26948)) : (((/* implicit */int) var_5))))))) - (((/* implicit */int) var_2))));
    var_19 = var_14;
    var_20 ^= ((/* implicit */signed char) (unsigned short)65521);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (unsigned short)3);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3])) ? (max((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [(signed char)21] [i_0])) % (((/* implicit */int) (signed char)69)))), (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))) : (((/* implicit */int) max((((unsigned char) (short)26980)), (((/* implicit */unsigned char) (signed char)80)))))));
                            var_22 = ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)26))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] [i_4 + 1] |= ((/* implicit */unsigned long long int) (signed char)69);
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 2]))) ? (((((/* implicit */_Bool) ((short) (short)8352))) ? (((/* implicit */int) min(((unsigned short)29), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) (signed char)63))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) (signed char)69)) || (((/* implicit */_Bool) var_7)))), (((((/* implicit */_Bool) (unsigned short)13563)) || (((/* implicit */_Bool) arr_9 [i_0] [19LL] [19LL])))))))));
                        }
                        for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            arr_19 [i_0 + 3] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_4 [i_5 + 3] [i_5] [i_5])));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_3] [i_5])), (min((min((((/* implicit */unsigned long long int) (short)17949)), (1862255708443890137ULL))), (((/* implicit */unsigned long long int) var_8)))))))));
                            arr_20 [i_2] [i_3] = ((/* implicit */unsigned char) arr_0 [i_0] [(unsigned short)21]);
                            arr_21 [i_2] [i_1] = ((/* implicit */long long int) arr_1 [i_0 + 3] [i_0]);
                        }
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_1 + 1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8349)) + (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [(unsigned short)4]))))) - (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [21ULL] [i_3])), (arr_5 [i_3] [i_2] [(unsigned short)17] [i_0]))))))))));
                    }
                    arr_22 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)11572)) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0 + 1])) : (((/* implicit */int) arr_4 [10ULL] [i_1 - 3] [i_0 + 2])))) - (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [(short)12]))));
                    var_26 = ((/* implicit */unsigned short) ((signed char) max((arr_9 [i_0] [i_0] [13LL]), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_14)), ((unsigned char)0)))))));
                }
            } 
        } 
    } 
}
