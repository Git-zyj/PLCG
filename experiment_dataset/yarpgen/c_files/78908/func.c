/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78908
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
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_13);
        var_19 = ((/* implicit */short) var_7);
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) var_8);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */short) var_5);
            var_21 = ((/* implicit */short) arr_4 [i_2]);
        }
        for (signed char i_3 = 4; i_3 < 23; i_3 += 3) 
        {
            var_22 += ((/* implicit */unsigned short) var_1);
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1 + 3] [i_1 + 3]);
            arr_13 [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
        }
        for (short i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            arr_16 [i_1] [i_1] [i_4] = ((/* implicit */short) var_3);
            arr_17 [i_1] = ((/* implicit */long long int) var_3);
        }
    }
    var_23 = ((/* implicit */int) var_1);
}
