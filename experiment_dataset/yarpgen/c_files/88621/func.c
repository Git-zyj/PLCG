/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88621
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) 3046827226U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (9002801208229888LL))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_14)), (var_5)))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1]))))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [(unsigned char)0] [i_2])), (var_3)))))))));
                    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) arr_8 [i_0 + 3] [i_1 - 1] [i_2] [i_0])))))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_2] [i_1] [i_0 - 1])))) / (((/* implicit */long long int) ((arr_4 [i_0] [i_1] [i_0 + 1]) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 2] [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_4] = ((min((arr_14 [i_0 + 2]), (arr_14 [i_0 + 3]))) % (max((arr_14 [i_4]), (((/* implicit */unsigned int) arr_10 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_0 + 2])))));
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_15 [i_1] [i_1 - 1] [i_1] [i_1]))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((arr_12 [i_4] [i_4]), (((/* implicit */unsigned char) var_10)))), (arr_3 [i_0] [i_0])))) ? (min((var_7), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4])) || (((/* implicit */_Bool) arr_1 [i_0] [5LL]))))))))));
                                var_22 += ((/* implicit */unsigned short) max(((~(((arr_4 [i_0] [i_1] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_4] [i_2] [i_3]))) : (arr_7 [i_0] [i_0] [i_2] [i_3]))))), ((-(arr_14 [i_0])))));
                                var_23 += ((/* implicit */int) arr_15 [i_0] [2ULL] [2ULL] [i_4]);
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_1 - 1] [i_1])) | (((/* implicit */int) arr_15 [5LL] [i_2] [i_1 - 1] [i_0])))) != (((((/* implicit */int) arr_15 [i_2] [i_2] [i_1 - 1] [i_0])) % (((/* implicit */int) arr_15 [i_1 - 1] [i_2] [i_1 - 1] [i_0]))))));
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_14)), (var_15))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_16)))))))), (max((var_11), (((/* implicit */unsigned long long int) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    var_26 = var_16;
    var_27 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) <= (((/* implicit */unsigned long long int) var_5)))))));
}
