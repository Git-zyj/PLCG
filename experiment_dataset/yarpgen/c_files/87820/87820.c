/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [8] = var_5;
                var_10 = (max(var_10, (((1 ? 119 : 4194302)))));
            }
        }
    }
    var_11 = var_7;
    var_12 &= var_2;

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_13 = (max(var_13, 270215977642229760));
            var_14 = 43411;
            arr_13 [i_2] |= ((-(arr_6 [i_2])));
        }
        var_15 = (max(var_15, ((min(127, 176)))));
        var_16 *= (1 && 1);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_17 += (((arr_18 [i_2] [8] [i_2] [i_6]) ^ (504403158265495552 - var_1)));
                        var_18 -= ((~((-504403158265495550 ? 21451 : (arr_12 [i_5 + 2] [i_5] [i_5 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
