/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65571
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
    var_11 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((((/* implicit */short) var_8)), (var_10)))) << (((var_2) - (14413919150223455222ULL))))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)-16024))))), (var_10))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [13U] [16] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) min((((((/* implicit */int) (signed char)-46)) * (((/* implicit */int) arr_3 [i_1])))), (max((var_4), (((/* implicit */int) arr_0 [i_0 - 1]))))))), (max((max((((/* implicit */long long int) var_0)), (arr_2 [i_2] [i_0 - 2]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)246)) <= (((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_5)));
                        arr_11 [i_0] [i_0] [i_3] [(unsigned short)2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-12)) / (((/* implicit */int) (unsigned char)255))));
                        arr_12 [i_0] [i_3] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (short)-2584))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_12 ^= ((/* implicit */signed char) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_1]))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_3 [i_6 + 1]) && (((/* implicit */_Bool) var_10)))))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) == (arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 1]))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((min((min((((/* implicit */long long int) var_3)), (-2367651180416850330LL))), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_0))));
}
