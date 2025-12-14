/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [6] = -86;
        var_17 = 35938;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_18 = (max(63266, 16456));
        var_19 = 2047;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_20 += ((((min((max(var_10, var_9)), var_14))) ? 9 : 47));
                    var_21 -= var_1;
                    var_22 = (!-121);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_23 = (min(var_23, -89));
        var_24 |= arr_11 [6] [i_4];
        var_25 = -109;
    }
    var_26 = (((((!(((-32 ? var_3 : 21)))))) / 127));
    #pragma endscop
}
