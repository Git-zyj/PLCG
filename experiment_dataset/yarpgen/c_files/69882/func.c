/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69882
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_14 += ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0] [i_1 - 1])))))));
                    arr_9 [i_1] [i_1 - 4] [i_2] [i_2] = ((/* implicit */unsigned int) var_10);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_2 [i_0]))) / (arr_2 [i_3 - 1])));
                    var_15 = ((/* implicit */long long int) (unsigned char)237);
                    arr_13 [i_1] [i_1 - 2] [i_0] [i_1] = ((/* implicit */unsigned char) arr_11 [i_1] [i_1]);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_9);
}
