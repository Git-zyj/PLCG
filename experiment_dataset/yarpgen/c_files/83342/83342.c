/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [2] = ((!((min(var_6, (min(var_1, (arr_3 [i_0] [i_0]))))))));
                    arr_7 [i_2 + 2] [i_1] [i_0] [3] = (min((max(var_6, -var_2)), (min((~var_5), (~0)))));
                    var_11 = (arr_4 [i_0] [i_1] [i_2 - 2]);
                    arr_8 [i_0] [i_1] [i_2 + 3] [i_2] = (arr_2 [i_0] [i_2 - 1]);
                    arr_9 [i_0] = (arr_4 [i_2 + 3] [i_2 - 2] [i_2 - 2]);
                }
            }
        }
    }
    var_12 = 18342094895520151111;
    var_13 = (min(var_13, var_2));
    #pragma endscop
}
