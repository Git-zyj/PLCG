/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (((max((4294967285 % 4294967269), 1)) >= var_7));
                var_21 = (max(var_21, ((min((((56 >> (((arr_1 [18]) + 4702929888534054788))))), ((1 ^ ((9965461097046176836 ? var_8 : 247)))))))));
                arr_6 [i_0] = (((arr_4 [i_1] [i_0] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_0] [10]) : ((~(min(-954765822, -4103691391232624160))))));
            }
        }
    }
    var_22 = var_7;
    var_23 *= (((((((max(-19, 1))) << (var_14 - 18056983387361938521)))) ? ((64 ? (((min(0, var_11)))) : ((-9223372036854775803 ? 36028797018963967 : 14736617425787531015)))) : ((((!1) * var_18)))));
    #pragma endscop
}
