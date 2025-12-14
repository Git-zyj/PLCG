/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67871
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
    var_10 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */unsigned char) max((((/* implicit */short) ((unsigned char) arr_3 [i_1 - 2]))), (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned int) max((min((((/* implicit */int) (_Bool)1)), (2147483647))), ((-(((/* implicit */int) var_4))))))))));
                                var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_8 [i_2] [14ULL] [i_2] [i_3] [i_2 + 1])), (max((((((/* implicit */int) (unsigned char)166)) + (((/* implicit */int) arr_1 [i_3] [i_0])))), (((/* implicit */int) ((unsigned char) arr_8 [i_2] [i_1] [i_1] [i_2] [i_0])))))));
                                var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) | ((~(((/* implicit */int) arr_7 [i_4] [i_3] [(unsigned char)6] [i_1]))))))), (((((/* implicit */unsigned long long int) min((3489799855U), (((/* implicit */unsigned int) (short)4095))))) - ((+(arr_2 [i_0] [i_1] [(unsigned short)7])))))));
                            }
                            var_15 = max((((/* implicit */short) var_2)), ((short)-567));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_0] [12U]), (arr_9 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_0] [i_0])))) | (((/* implicit */int) max((((/* implicit */signed char) arr_9 [(short)7] [(short)12] [(short)7] [12ULL] [i_0] [(short)7])), ((signed char)6))))));
                arr_12 [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)4] [(signed char)0] [i_1] [6ULL]))));
                var_17 ^= var_9;
            }
        } 
    } 
}
