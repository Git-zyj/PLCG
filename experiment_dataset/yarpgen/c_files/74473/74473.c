/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_10));
    var_14 ^= (((!0) || var_11));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [7] [7] [i_0] = ((36 | (((arr_3 [i_0 - 3] [i_0 - 3]) - (arr_3 [i_0 + 2] [i_1 + 2])))));
                var_15 -= (((~65535) ? (~var_9) : var_11));
                arr_5 [i_0 - 1] = (max((((arr_3 [i_0] [i_1]) << (((((arr_2 [i_0] [i_0]) ? 37717 : (arr_1 [i_0] [i_0]))) - 37717)))), (((0 == 0) ? ((65525 ? 5 : (arr_3 [i_0] [i_0]))) : -29330))));
            }
        }
    }
    var_16 = (max(var_16, var_8));
    var_17 = ((~(var_9 >= var_2)));
    #pragma endscop
}
