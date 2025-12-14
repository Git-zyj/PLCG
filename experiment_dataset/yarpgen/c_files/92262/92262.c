/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(((max(((16384 ? var_7 : 33395)), (16384 * 33395)))), (((arr_0 [i_0] [i_0]) + (arr_2 [i_0] [i_0])))));
        var_18 = 49140;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 = (max((max((((!(arr_1 [i_1] [i_1])))), (((arr_1 [i_1] [i_1]) ? 430072911 : var_3)))), (!175)));
        var_20 ^= ((!(((-(arr_3 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 -= (3799282072837857941 && 32140);
                        var_22 = -430072912;
                    }
                }
            }
        }
    }
    var_23 = -4862640984480651530;
    var_24 = 31;
    var_25 = (max(var_25, ((max(((((max(var_11, var_13))) ? 2147483647 : 0)), (((1 == ((4028811358 ? 0 : 1))))))))));
    #pragma endscop
}
