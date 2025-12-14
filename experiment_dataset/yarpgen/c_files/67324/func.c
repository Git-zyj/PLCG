/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67324
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
    var_12 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_10)) + (5542)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                var_14 *= ((/* implicit */long long int) ((int) (_Bool)1));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    arr_13 [i_2] [i_2] [(unsigned char)23] [i_2] = ((/* implicit */unsigned char) arr_9 [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 + 3]);
                    var_16 = ((/* implicit */short) arr_10 [(short)16]);
                }
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_9 [i_2] [i_2] [i_3] [i_2]))));
                var_18 = ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_3]));
            }
        } 
    } 
}
