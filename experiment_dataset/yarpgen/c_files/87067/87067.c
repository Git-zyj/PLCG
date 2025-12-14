/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [0] [0] [i_2] = (max((((((arr_6 [i_0]) + 2147483647)) << (65529 - 65529))), ((((max(65529, 1))) << (((var_5 ^ var_8) - 26901))))));
                    arr_9 [0] = 24308;
                }
            }
        }
        var_11 = (max(var_11, ((min(-1310650391301228525, 72)))));
        arr_10 [i_0] = (((((-1310650391301228546 > (arr_0 [i_0])))) ^ ((-32766 ? 1 : 61))));
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] = (max(10, 127));
        var_12 = ((82 != -17115) << (((arr_14 [i_3]) - 1541748402)));
    }
    var_13 += var_6;
    #pragma endscop
}
