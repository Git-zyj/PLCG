/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 6666;
    var_12 |= (((((-896428347 * ((var_3 ? var_7 : 896428350))))) ? (var_3 || var_6) : var_10));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [2] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = ((max(((var_0 ? var_3 : var_1)), -896428347)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_2] = 4494803534348288;
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((~(max(var_2, (((arr_0 [13]) ? (arr_10 [i_2]) : var_2))))));
                        var_14 = arr_6 [i_0];
                        arr_14 [i_0] [13] [i_0] [i_2] = 25407;
                        arr_15 [i_0] [i_2] [0] [i_0] = var_8;
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_15 = (((((min(21374, var_5)))) ? (((max(-1233175523, 1)))) : ((0 ? 0 : 1712))));
                        var_16 = (min(var_16, var_1));
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_17 ^= 7396;
                        var_18 += ((1233175523 && ((((min(3602072522, 1))) && ((min(1, (arr_19 [7] [7] [10] [7]))))))));
                    }
                    arr_22 [16] [16] [1] |= (((arr_2 [i_2 - 3]) ? (arr_5 [i_2 - 2]) : (((arr_2 [i_2 + 3]) ? (arr_5 [i_2 + 1]) : (arr_2 [i_2 - 1])))));
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        var_19 ^= var_9;
        arr_25 [3] = var_9;
        arr_26 [i_6] = (((arr_17 [16]) ? ((var_4 ? (arr_2 [i_6 - 3]) : (max(-100, var_10)))) : (arr_4 [15] [i_6 + 1])));
    }
    #pragma endscop
}
