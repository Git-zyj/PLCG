/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (((var_14 * 36825) && (((var_12 ? ((((arr_3 [i_0 + 2] [1] [3]) && 0))) : (var_13 >= -2))))));
                    var_16 = (max(var_16, (arr_2 [i_0] [i_1])));
                    arr_8 [i_1] [i_1] = ((!((max(36804, 56543)))));
                }
            }
        }
        arr_9 [i_0] &= var_9;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_17 |= var_9;
        var_18 -= 1;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_19 = -485708679;
        arr_16 [i_4] [4] = 1637471048;
        arr_17 [12] = (~49152);
        arr_18 [i_4] = 18446744073709551613;
    }
    var_20 ^= (-32767 - 1);
    #pragma endscop
}
