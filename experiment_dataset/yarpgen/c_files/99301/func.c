/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99301
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned short) (~(3176590902U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_4 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_0] [i_3]) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_3]))))) ? (((/* implicit */int) arr_7 [i_3] [i_1] [i_0] [i_3])) : (((int) arr_9 [i_0] [i_1 + 1] [i_0]))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((((((((/* implicit */_Bool) 516944047U)) ? (var_3) : (arr_8 [4U] [i_1 - 1] [(unsigned char)16]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [2U] [i_3])) < (((/* implicit */int) var_7)))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [i_3] [(unsigned char)2] [(unsigned char)2] [i_0])), (arr_5 [0LL] [0LL])))), (((long long int) arr_4 [i_3])))))))));
                            arr_13 [i_0] = ((/* implicit */unsigned int) (+(((int) arr_10 [i_0] [i_1 - 2] [i_0] [i_3]))));
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((arr_10 [i_2] [i_0] [i_0] [i_1 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_0] [i_0] [i_1 + 1]))) : (2928446491U))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) 978116118U);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)202)))), ((~(arr_6 [i_0] [i_1 - 2] [i_1 - 2] [i_1])))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1]))));
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_1 - 2])) ? (arr_8 [i_0] [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_0] [i_1])))))) / (((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0] [i_1 + 1]))) : (var_11)))));
            }
        } 
    } 
}
