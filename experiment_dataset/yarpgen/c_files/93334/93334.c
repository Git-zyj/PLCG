/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_1, (((1314619399 ? 0 : 32446)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = (arr_11 [i_2]);
                    var_11 = -1314619399;
                }
            }
        }
    }
    var_12 = 12;
    var_13 = min(-8697777241126920275, 32450);
    #pragma endscop
}
