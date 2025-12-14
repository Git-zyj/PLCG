/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = -7111;
        arr_4 [i_0] = (min(((((-7111 ? var_16 : (arr_2 [11]))))), (arr_0 [5] [15])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_1] [i_1] [i_1] = min(var_17, (max((arr_8 [i_1] [i_2] [i_3]), (arr_9 [2] [i_1] [i_1]))));
                    arr_14 [8] [i_2] [i_3 - 1] = var_10;
                    arr_15 [i_1] [18] [18] = arr_10 [i_3 + 1] [0];
                }
            }
        }
        arr_16 [8] = -7090;
    }
    var_19 = (max(var_12, var_3));
    var_20 = -var_9;
    var_21 = -var_1;
    #pragma endscop
}
