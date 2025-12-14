/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_1 [i_0 + 1] [i_0 + 1])));
        arr_2 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 ^= ((((~(~20022))) != (((!((max(var_15, 137))))))));
        var_19 = ((1757491207 ? -29956 : 137));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2 - 2] [i_2] = ((min((((137 ? 137 : 5)), var_8))));
        arr_9 [i_2] = (max((arr_7 [i_2 - 1] [i_2 - 1]), (min(((((arr_4 [i_2]) || -57))), (((arr_6 [i_2]) ? var_6 : 9177))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [i_2] = var_11;
                    var_20 = (((((arr_7 [i_2 + 1] [3]) ? var_8 : (arr_16 [i_2 - 1] [i_2 - 2] [i_3 + 1]))) <= ((46051 ? 17033432409365224503 : 899))));
                }
            }
        }
        var_21 = (min(var_21, 115));
        var_22 = (((min(var_4, (arr_11 [i_2 - 1] [i_2 - 1]))) >= (arr_4 [i_2])));
    }
    var_23 = var_12;
    #pragma endscop
}
