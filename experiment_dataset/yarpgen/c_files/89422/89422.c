/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = max(0, (max(0, (max(9134481690424250113, 242)))));
                    var_15 = (max(var_15, (((185 ? ((1 * (max(2600277121, 65519)))) : (((max(65535, 17)))))))));
                }
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}
