/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(1, -456643805));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, ((((arr_0 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) / (arr_1 [i_0]))) : var_8)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [23] [i_1] [i_2] [i_2] [i_2] [19] = ((-(((~3112196874) & (arr_7 [i_1] [i_3])))));
                        arr_13 [i_2] [i_1] [i_1] [i_3] [i_2] = ((((min(((var_7 ? var_2 : 456643805)), var_9))) ? var_3 : ((((min(-456643805, 1)) | ((max(41235, (arr_3 [5] [i_1] [i_2])))))))));
                    }
                }
            }
        }
        var_12 = (min(var_12, ((((~(arr_6 [i_0] [i_0]))) ^ ((~(~0)))))));
        var_13 = var_9;
        var_14 = ((-((-1 ? (((((arr_11 [i_0]) > -456643805)))) : (min(var_8, var_6))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_15 = 456643805;
                    arr_24 [i_4] [i_5] [i_4] [i_4] = ((+(min((((456643802 << (((-456643821 + 456643846) - 25))))), (arr_1 [i_4])))));
                }
            }
        }
        var_16 = (max(var_16, (arr_3 [i_4] [i_4] [i_4])));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_17 = var_2;
        arr_27 [i_7] [i_7] = ((456643804 ? ((-39 ? (arr_8 [i_7] [i_7] [i_7] [i_7]) : (-1411975285 % -456643815))) : 1495813991));
        var_18 = ((~(((((arr_1 [12]) & 183)) << (((var_0 ^ 1411975284) + 470375490))))));
    }
    var_19 = -456643831;
    #pragma endscop
}
