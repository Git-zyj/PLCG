/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77554
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
    var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (short)27639)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)1869);
                arr_9 [i_0] [i_1] = ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_2 + 3])));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_5 [(signed char)6] [(signed char)6] [i_2]))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_19 += ((/* implicit */short) ((((arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) > (arr_11 [i_0] [i_0 - 1] [i_2 - 1] [i_2] [i_2 + 3] [i_2 + 1])));
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -675351814)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16322))))) / (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) -675351814))))));
                }
                arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (short)1869);
            }
            arr_13 [i_0] [i_0 + 1] [i_0] = max((((((/* implicit */int) max((arr_1 [i_0 - 1]), ((short)16322)))) / (((((/* implicit */int) var_11)) | (((/* implicit */int) var_4)))))), (((/* implicit */int) arr_2 [i_0 - 1])));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_4] [i_4 - 1] [i_4] [i_4])) ? (arr_11 [i_0] [i_0] [i_0] [i_4 - 1] [i_4] [i_4]) : (arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4]))) - (((/* implicit */unsigned long long int) min((2940533698U), (((/* implicit */unsigned int) var_16))))))))));
            var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 10293431233402770560ULL)) ? (68719476735ULL) : (arr_11 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_4 - 1]))));
        }
        arr_17 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */int) (short)-1876)), (-598784160)))));
        var_23 ^= ((/* implicit */unsigned char) (short)-10776);
    }
}
