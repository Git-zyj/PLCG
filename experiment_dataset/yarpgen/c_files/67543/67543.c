/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((min(((((arr_0 [2] [2]) != (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), ((-(arr_7 [i_0] [i_0] [i_2]))))))));
                    arr_9 [i_0] [i_0] = var_0;
                    arr_10 [i_0] = arr_5 [i_0] [i_1 + 2] [i_2];
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_16 [i_4] [i_3] [i_3] = (((((((arr_7 [1] [1] [i_4]) + var_11)) ^ ((((arr_8 [i_3] [i_4] [i_4 - 2]) == 28))))) >> ((((arr_8 [i_3] [i_3] [i_3]) == (arr_3 [i_3]))))));
            var_14 = (max(var_14, (arr_1 [1])));
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_15 ^= 125;
            var_16 = ((+(((arr_0 [i_5] [i_5 + 1]) + (arr_17 [i_3] [i_5])))));
        }
        var_17 = (max(var_17, (((min(((min(5360431288605883907, 5360431288605883907))), var_0))))));
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = var_5;
        var_18 = ((+(((((63912407 ? (arr_20 [i_6]) : -5360431288605883889))) ? (arr_20 [i_6 - 1]) : (min(var_11, var_9))))));
        arr_22 [i_6 - 1] [i_6] = ((-(((18112 < ((-1 ? (arr_20 [i_6 + 1]) : -32746)))))));
    }
    var_19 = ((1 ? ((5360431288605883903 ? 5360431288605883907 : -5360431288605883918)) : 1));
    #pragma endscop
}
