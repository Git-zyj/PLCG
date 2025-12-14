/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_10 = (max(var_10, -6242054571189575787));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = 2147483647;
                    var_12 = 1;
                }
            }
        }
        var_13 -= 51203;
        var_14 = (max(var_14, var_3));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_15 ^= 1;
                    var_16 = (~1);
                    var_17 = ((!(((~(arr_1 [i_5] [i_3]))))));
                    var_18 = (arr_7 [i_5]);
                    var_19 *= (!var_5);
                }
            }
        }
        var_20 = 252;
    }
    var_21 = 54357;
    #pragma endscop
}
