/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_6));
    var_15 = max(((176 ? -8226 : 12824)), 8200);
    var_16 = (max((min((16897806683625748282 % 8200), (((var_13 ? 1 : var_3))))), (var_2 <= var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = 52352;
                    var_17 -= 59344;
                }
            }
        }
    }
    #pragma endscop
}
