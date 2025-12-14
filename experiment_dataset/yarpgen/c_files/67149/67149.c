/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (((-570705399 ? 1896018551 : 47655)));
                var_18 = (((-2 < (max(-1896018552, -1896018552)))));
            }
        }
    }
    var_19 |= (max(var_9, ((((max(19915, 0))) ? ((14169715034746817363 ? 65533 : (-127 - 1))) : var_11))));
    var_20 = (((((-24725 || -28328) && (28325 || -1896018552))) ? (var_13 + var_1) : ((((-1175424138 + 2147483647) >> (1896018551 - 1896018520))))));
    #pragma endscop
}
