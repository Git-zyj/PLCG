/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_7 ^ var_14);
    var_16 = 30160;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((9223372036854775797 - ((min(10325, var_9))))));
                arr_7 [i_0] |= (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
