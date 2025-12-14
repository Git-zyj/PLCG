/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = 15040800902577051565;
                    var_13 = (max(var_13, (((!((4633479035466503193 > (((var_2 ? var_0 : -14))))))))));
                }
            }
        }
    }
    var_14 = var_11;
    var_15 = ((var_6 ? var_4 : ((max(17179104312349486549, (1767324731158012890 && var_4))))));
    #pragma endscop
}
