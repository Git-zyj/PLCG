/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68388
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) / (((/* implicit */int) (signed char)-56))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (max((var_11), (var_5)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1] [i_2]))))))) | (((((/* implicit */_Bool) (short)20334)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) / (arr_8 [i_0] [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_3]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_17 *= ((/* implicit */short) (~((~(arr_0 [i_4 - 1])))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_2))))) & (var_1))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_3])) | (var_13)))) ? (min((((/* implicit */unsigned int) (signed char)-112)), (2628277881U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_3] [i_4])) : (((/* implicit */int) (signed char)127)))))))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) ((((max((var_11), (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_5]))) >= (((/* implicit */unsigned long long int) ((arr_0 [i_5]) - (var_7)))))) ? ((~(((((/* implicit */_Bool) (unsigned char)1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_5]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) >= ((-(arr_0 [i_5])))))))));
                            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) - (((var_5) + (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_0 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_5])) | (((/* implicit */int) arr_9 [i_0] [i_5] [i_2]))))) : (min((arr_8 [i_0] [i_1] [i_2] [i_5]), (((/* implicit */unsigned int) var_14))))));
                        }
                        var_21 = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) ^ (arr_8 [i_0] [i_0] [i_0] [i_3]))), (max((((/* implicit */unsigned int) 2147483642)), (arr_8 [i_0] [i_1] [i_2] [i_3]))));
                    }
                    var_22 -= ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2])))))));
                    arr_14 [i_1] = ((/* implicit */unsigned short) min((min((var_8), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
}
