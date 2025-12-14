/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80446
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
    var_10 += ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] &= ((/* implicit */int) (-(9223372036854775807LL)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        var_11 *= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [(unsigned char)3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (arr_6 [i_2])));
            arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) >= (((((/* implicit */int) (unsigned char)162)) & (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (797890570U))), (((_Bool) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_3))))) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
                            arr_18 [i_3] = ((/* implicit */unsigned char) ((arr_7 [i_4]) != (((/* implicit */long long int) var_8))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_16 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1]) && (arr_16 [i_1 + 1] [i_1 - 3] [i_1 - 1] [(_Bool)0] [i_1 - 1] [7U])))) & (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1])) < (((/* implicit */int) arr_16 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2] [i_1])))))));
            }
        }
        arr_19 [i_1] = (-(((arr_1 [i_1 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2]))))));
    }
}
