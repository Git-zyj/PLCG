/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (min(((((((~(arr_0 [i_0] [i_0])))) >= var_10))), (max((((var_2 ? (-127 - 1) : (-127 - 1)))), (max(var_2, var_3))))));
                    arr_8 [i_0 - 2] [i_1] [9] [i_1] &= ((+(((-127 - 1) ? 58 : -124))));
                }
            }
        }
        var_17 = 119;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_18 = (~30);
        var_19 -= (-2031800525 / 8256402481429257799);
        var_20 = -117;
    }
    var_21 = (max(var_21, ((min(0, -7413984979428981699)))));
    #pragma endscop
}
