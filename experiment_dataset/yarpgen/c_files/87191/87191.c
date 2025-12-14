/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = ((~((-((~(-127 - 1)))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 = ((~(((3135 || (arr_5 [8] [i_0 - 1]))))));
                        var_12 = (max((((-(((arr_2 [11]) * -89))))), (((var_3 ? 84 : 255)))));
                        var_13 = (~-118);
                        var_14 = (min(var_14, (((~(arr_7 [i_2] [2]))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_10 [3] [i_1] [i_1] [1] [i_1] [7] = (~(1 > 15427997990252844411));
                        arr_11 [i_0 - 1] [i_1] [3] [i_4] |= var_9;
                        var_15 |= (((((6538324335988568848 / var_5) ? ((1501932939 * (-32767 - 1))) : (-127 - 1))) / (arr_9 [i_0] [i_1])));
                    }
                    arr_12 [i_0] = ((-(4186112 / 32766)));
                }
            }
        }
    }
    var_16 -= (~-697227722);
    #pragma endscop
}
