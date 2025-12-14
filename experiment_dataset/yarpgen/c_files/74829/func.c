/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74829
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
    var_17 = ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1] [i_1]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) ^ (arr_0 [i_1]))) : (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 1]))))) ? ((~(((unsigned long long int) arr_0 [(short)8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [7ULL])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [3U] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_2 + 1])) ^ (var_11)));
                    arr_10 [(unsigned short)19] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_2 - 1] [i_1 + 1])) >= (((/* implicit */int) arr_2 [i_2 + 1]))));
                }
                for (int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    var_20 += ((/* implicit */unsigned char) max((min((arr_0 [i_3]), (((/* implicit */long long int) arr_4 [i_0] [i_0])))), (((/* implicit */long long int) arr_1 [(_Bool)1]))));
                    arr_13 [i_0] [i_0] [(short)11] [i_3] = var_5;
                }
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0]))));
            }
        } 
    } 
}
