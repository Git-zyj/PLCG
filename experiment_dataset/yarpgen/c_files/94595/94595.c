/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(min((~var_0), (0 && var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min(var_7, ((-(arr_3 [1] [i_0 + 1])))));
                var_20 = -1;
                var_21 = (min(-64031, (var_4 >= var_11)));
                arr_4 [14] &= ((83 ? -1382893778 : 2097151));
                var_22 = ((12 << (868537405 - 868537382)));
            }
        }
    }
    var_23 = (((var_3 >= var_8) ? (!2216210234238202981) : var_9));
    #pragma endscop
}
