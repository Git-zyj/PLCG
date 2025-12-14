/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((-415499804 ? 15163886188099712516 : 415499804)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (-415499804 && -415499804)));
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = min(-5106, (((!(!1)))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 = -6699;
            var_15 = ((1 ? 10114147953851764874 : 200608106910583416));
            var_16 -= ((22846 ? ((23413 ? (arr_3 [i_1]) : 1)) : ((max(((0 ? (-32767 - 1) : 1)), -28240)))));
            var_17 *= (!65024);
            var_18 = (-2147483647 - 1);
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            var_19 += 0;
            var_20 = (max(8227, -1));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = ((((((-(arr_13 [2] [i_3] [i_3] [i_1]))) * ((-3300 ? 18107488045021700976 : (arr_5 [i_1 + 1])))))));
                        var_22 = ((-((-(max(1447337255, 512))))));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_23 = (min(var_23, (((1 ? 415499804 : 2147483647)))));
        var_24 = ((2147483647 ? (((65535 + -9148) ? 9127971137454933812 : (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : 4294967295));
    }
    #pragma endscop
}
