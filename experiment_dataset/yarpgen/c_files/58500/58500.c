/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((+(min(((min((arr_1 [0]), var_8))), (max(4294967295, 12067))))));
                var_15 = ((((min(((max(var_3, var_9))), (arr_6 [i_1] [i_1])))) ? 1743405129 : -1743405142));
                arr_7 [i_1] = 74;
            }
        }
    }
    var_16 = (min(-var_4, (((!(((var_7 ? var_1 : var_8))))))));
    #pragma endscop
}
