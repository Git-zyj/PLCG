/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_14 ? var_18 : 0))))) / var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_21 = (((((arr_0 [i_0]) < 2380409430)) || (86 >= 46854)));
        var_22 = (min(var_22, 15957574470537097366));
        var_23 = (max((((arr_2 [i_0]) & (arr_2 [i_0]))), ((((arr_0 [i_0]) <= (arr_2 [i_0]))))));
        var_24 = (0 % 1914557870);
        var_25 = (((((((min(65535, 90))) ? 215 : ((65525 ? 47 : (arr_3 [i_0] [i_0])))))) ? 6639 : (max((((2380409409 ? 6 : var_1))), 5130977956030464443))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (((-(((((1016 ? 2522984480 : 63336))) ? var_5 : (((22037 || (arr_5 [i_1])))))))))));
        var_27 = 16383;
        var_28 = 22039;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_29 = (arr_2 [i_5]);
                        var_30 -= (((arr_11 [i_2]) || -20680));
                    }
                }
            }
        }
        var_31 = (min(var_31, ((max((((((arr_14 [i_2] [i_2] [i_2]) ? 20680 : (arr_4 [i_2]))) / -1)), (((((var_2 ? 17174103784126976030 : (arr_9 [i_2]))) >= 197))))))));
        var_32 = (min(var_32, ((((arr_7 [i_2] [i_2]) ? ((((((-(arr_7 [i_2] [i_2]))) + 2147483647)) << (((arr_1 [i_2] [i_2]) - 9)))) : ((min(0, (arr_13 [i_2] [i_2])))))))));
        var_33 ^= ((((((arr_16 [13] [13] [13] [i_2] [13]) ^ 4194303))) ? ((((((min(24548, -756)))) | (max(var_3, (arr_15 [i_2] [i_2])))))) : ((18446744073709551610 ? 15091045232595343420 : -2012810806423427399))));
    }
    #pragma endscop
}
