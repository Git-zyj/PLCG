/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9498
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
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_20 = ((/* implicit */int) arr_1 [(_Bool)1]);
                var_21 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_0]);
            }
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                arr_13 [i_3] [(unsigned char)9] [i_1] [i_0] = ((/* implicit */signed char) (~(arr_5 [i_0])));
                arr_14 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_2)))));
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) ((((arr_9 [(_Bool)1] [(_Bool)1] [i_4] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))));
                arr_18 [i_4] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [(unsigned short)3]);
            }
            var_23 = ((/* implicit */unsigned int) var_18);
        }
        arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_15 [i_0]))) ^ (((((((/* implicit */int) (short)-1408)) + (2147483647))) >> (((((/* implicit */int) max((var_2), (((/* implicit */short) arr_11 [i_0] [i_0] [(unsigned short)7] [(unsigned short)7]))))) - (10749)))))));
    }
}
