/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (!96);
                        var_12 = (((arr_3 [i_0] [i_0] [3]) | 3678732122));
                        var_13 = arr_0 [i_1] [8];
                    }
                }
            }
        }
        arr_12 [i_0] [7] = var_1;
        var_14 = (arr_8 [i_0] [i_0] [i_0] [16]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] = (arr_5 [i_4] [i_4] [0]);
        var_15 = (min(var_15, ((~(arr_13 [i_4])))));
        arr_18 [i_4] [i_4] = 1;
        var_16 -= (((min((((107 / (arr_3 [i_4] [i_4] [i_4])))), (arr_15 [i_4] [13]))) >> (((max(3955479628, (arr_3 [i_4] [i_4] [i_4]))) + 11219))));
    }
    var_17 = -var_6;
    #pragma endscop
}
