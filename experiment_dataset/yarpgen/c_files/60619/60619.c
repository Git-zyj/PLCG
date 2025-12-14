/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = (min(var_20, var_7));
    var_21 |= (max((~32746), ((max(var_4, var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (max((arr_2 [i_0] [i_2 + 3]), (((~(arr_2 [i_1] [i_2 + 2]))))));
                    arr_10 [i_1] [i_1] [i_1] = var_14;
                    arr_11 [i_0] [i_0] [i_1] = (~(arr_3 [i_1]));
                    var_22 = -293643276;
                }
            }
        }
    }
    var_23 = max((max(((2147483647 ? 15320425965626470964 : -216332504)), ((max(var_8, var_10))))), var_16);
    #pragma endscop
}
