/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 = (arr_7 [i_3]);
                        arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_2] [1] [i_3] = (min(((~(arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_2]))), ((-(arr_8 [i_0] [i_1 - 1] [4] [i_2])))));
                        var_15 = (max(var_15, ((~(arr_3 [i_2] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1] [2] [i_2] = (max(3183, ((~(~7338206215555390010)))));
                        var_16 = (arr_11 [i_1 - 1] [i_2] [i_4] [i_4]);
                    }
                    arr_20 [i_0] [i_2] [i_2] [i_2] = (min(((max((arr_16 [i_0] [i_0] [i_0] [i_2]), (max(65535, 413382117))))), (max((!14), ((~(arr_15 [i_2] [i_2] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_17 = var_7;
    var_18 *= (min(var_11, var_11));
    #pragma endscop
}
