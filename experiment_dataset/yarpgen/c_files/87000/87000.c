/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= -264241152;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] = ((148 ^ (max(1180025206013787287, (arr_4 [i_1] [i_0 - 1])))));
                    var_16 = arr_5 [i_0 - 1] [i_1] [11] [i_0];
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_17 = (((((0 ? var_1 : var_9))) && ((max(-1180025206013787287, (arr_1 [i_0 - 1]))))));
                    arr_12 [i_1] = (var_0 / var_12);
                    arr_13 [i_0 + 2] [i_1] [i_0] = 1011059829;
                }
                var_18 = (max(var_18, ((min(((min(62, (arr_2 [i_0 - 2] [i_0] [i_0])))), (arr_4 [i_0] [4]))))));
            }
        }
    }
    var_19 = (min(var_19, var_6));
    var_20 = (~var_14);
    var_21 = var_7;
    #pragma endscop
}
