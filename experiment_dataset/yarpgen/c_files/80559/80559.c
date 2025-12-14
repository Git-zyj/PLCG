/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((((min(-4828, 14))) + 2147483647)) >> (((65517 - -1154245878) - 1154311374))))) + (((9739991093873039625 - 18657) / 4294967295))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = -6764193188963146072;
                var_12 = (((((0 || 1) - (min(1, 18446744073709551615)))) != 1));
                var_13 = (min(var_13, (((1099511627775 & ((1 | ((18446744073709551602 << (1215908924 - 1215908909))))))))));
            }
        }
    }
    #pragma endscop
}
