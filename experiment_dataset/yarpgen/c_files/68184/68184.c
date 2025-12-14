/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((max((min(4294967289, 9485598)), ((0 ? 1627520599 : var_4)))), (max((!4191414686), (min(var_8, 8387584)))));
    var_11 = min((min((1119517033 || var_7), var_3)), ((((max(30, 4285939327))) ? var_7 : (~16744448))));
    var_12 = var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = 130048;
                        arr_13 [i_0] [i_1] [i_2] [i_3] = min(32767, 268435456);
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((arr_11 [i_0] [i_0] [5] [i_0] [i_0 - 1]) ? (arr_2 [i_0]) : ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 2305310031))) ? (arr_7 [i_0 + 1] [i_0 - 1]) : (((arr_4 [i_0] [i_0]) ? (arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 1] [i_0]) : (arr_9 [i_0 - 1] [i_0] [i_0]))))));
        arr_15 [20] |= (~(arr_10 [8] [i_0] [8] [i_0]));
        var_13 = (((min((arr_4 [i_0] [i_0 - 1]), 1534203468))) ? (((arr_7 [i_0] [i_0 - 2]) ? (arr_7 [i_0] [i_0 - 2]) : (arr_7 [i_0] [i_0 - 2]))) : (min(var_3, var_8)));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = arr_3 [9];
        var_14 -= (arr_16 [i_4]);
        var_15 = (arr_17 [i_4] [i_4]);
        var_16 = (2709081940 ? (arr_8 [i_4] [i_4] [i_4]) : (arr_0 [10]));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_17 = min(4294967295, 3145275387);
        var_18 *= -2505152217;
        var_19 = min((((arr_21 [i_5]) ? 1059661160 : (arr_21 [i_5]))), ((+(((arr_19 [i_5]) ? (arr_19 [18]) : 2147483644)))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_20 = 1005877537;
        arr_24 [i_6] [i_6] = (((((2861962421 ? 4227858432 : (arr_22 [i_6])))) ? (max((arr_22 [i_6]), 3570560290)) : (min(3011975984, (arr_22 [i_6])))));
    }
    #pragma endscop
}
