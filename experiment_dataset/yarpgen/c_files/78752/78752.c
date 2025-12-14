/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = var_1;
        var_13 = (((arr_2 [i_0 + 2]) * 1));
        arr_3 [i_0] [i_0] = 1918;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (-3391670410391076172 || 14110631408125566279);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = (!125);
            arr_10 [i_1] [i_2] = -var_2;
        }
        arr_11 [i_1] = (var_6 % var_9);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_16 = (max(var_16, 4336112665583985331));
                        var_17 *= (~9223372036854775789);
                    }
                }
            }
        }
        arr_23 [i_3] [i_3] = var_3;
        arr_24 [i_3] &= var_8;
        arr_25 [i_3] = (((34583 == 26122) / (arr_13 [i_3])));
        arr_26 [i_3] [i_3] = (((((var_4 || (arr_20 [i_3] [i_3] [i_3] [i_3])))) - (!4336112665583985363)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_18 = ((((((max(var_1, var_4))) ? (max((arr_16 [i_7] [1]), -17314)) : (max(var_10, 14110631408125566253)))) != (arr_17 [i_7])));
        arr_31 [i_7] [i_7] = (max((max(var_10, var_1)), ((((4215 ? 7025 : 4336112665583985361)) << ((((var_1 ? var_5 : var_10)) - 18446744073709548508))))));
    }
    #pragma endscop
}
