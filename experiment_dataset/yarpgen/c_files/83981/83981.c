/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = var_0;
                    var_13 = (min(((-(arr_5 [i_0] [i_1] [i_2]))), ((min((arr_5 [i_2] [i_1] [0]), (arr_5 [i_2] [i_1] [14]))))));
                    var_14 = ((!(arr_1 [i_1])));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((!((max((min(2464302507516138744, (arr_0 [i_0]))), 64146)))));
                    var_15 = (min(17152, 928776718));
                }
            }
        }
    }
    var_16 = (-((-928776707 ? (((68 >> (-108 + 131)))) : var_4)));
    var_17 = var_9;
    var_18 = var_4;
    #pragma endscop
}
