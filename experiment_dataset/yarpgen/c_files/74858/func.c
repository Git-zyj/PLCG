/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74858
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_6))));
        var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_1 - 1] [i_1 - 1] [0] = ((/* implicit */signed char) arr_4 [i_2]);
                arr_9 [i_1 - 2] [i_1 - 2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_2]), (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (arr_3 [(short)4]) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                var_12 = ((/* implicit */signed char) max((((/* implicit */int) (short)32751)), (arr_4 [5])));
            }
        } 
    } 
}
