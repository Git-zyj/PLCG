/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(142, ((min(1, -1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 ^= 6;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_1] [10] = (var_7 <= var_8);
                    var_12 = ((1 >= (var_5 & var_3)));
                    var_13 = (max(var_13, -26));
                    var_14 = (15 >= var_0);
                }
            }
        }
        var_15 = 5549744990493226973;
    }
    #pragma endscop
}
