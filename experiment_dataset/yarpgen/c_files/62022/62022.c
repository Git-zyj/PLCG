/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((1 * ((min((!-12491), (-18164 != 18446744073709551615))))));
                var_18 = (max(var_18, -18164));
            }
        }
    }
    var_19 = (min(var_1, var_10));
    #pragma endscop
}
