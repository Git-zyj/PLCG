/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4988055029146917668;
    var_14 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((!1419006354) ? (((var_5 >= (arr_2 [i_0 + 3])))) : (~-var_10)));
                arr_4 [i_0] [4] [0] = min((max(var_6, (0 * 26))), 10);
                var_16 = ((+((var_10 ? (arr_2 [i_0 - 1]) : (2041007201 >= -1549704054945229654)))));
            }
        }
    }
    #pragma endscop
}
