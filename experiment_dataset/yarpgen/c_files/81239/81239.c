/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((min((arr_2 [i_0] [i_0 + 1]), (arr_2 [i_0] [i_0 - 1])))) ? (((var_4 ? var_1 : (arr_2 [i_0] [i_0 + 1])))) : var_4));
                arr_6 [i_1] = (min((-32767 - 1), 122));
            }
        }
    }
    var_15 = -5321545029893127465;
    var_16 = (min(var_1, (~var_0)));
    #pragma endscop
}
