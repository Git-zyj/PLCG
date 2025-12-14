/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (var_2 ? var_11 : var_8);
    var_17 = (~13172382260792366044);

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_18 -= ((640891448658787424 ? 17281306327887512685 : -2264453745074550291));
        var_19 = ((26 ? 18394039767087278344 : 14586387790808447721));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 = (min(8753016166261531876, 1611029988652618647));
        arr_4 [i_1] [i_1] = 14586387790808447721;
        arr_5 [i_1] = (((-(arr_2 [5]))));
        var_21 = arr_0 [4];
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_22 ^= (arr_6 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_14 [i_2] = (max(((((arr_7 [i_3] [i_3]) || var_0))), var_2));
                    arr_15 [i_3] [i_3] [5] [i_2] = 13172382260792366044;
                }
            }
        }
        var_23 = min((max((arr_7 [i_2] [i_2]), 7085248992502614138)), (max((arr_7 [i_2] [i_2]), 2264453745074550291)));
        arr_16 [i_2] = ((!(arr_3 [i_2])));
    }
    #pragma endscop
}
