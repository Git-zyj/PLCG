/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 |= 12192989415612561772;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = (max(var_7, (arr_0 [i_0])));
            arr_6 [i_0] [i_1] [i_0] = (~-3125936906421692605);
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    arr_17 [i_4 - 2] [10] [12] [i_2 - 1] = (((((arr_0 [i_3]) | -3125936906421692605))));
                    var_17 = (min(var_17, ((((max(((15 >> (((arr_3 [2] [i_3]) - 13237)))), var_14)) > var_15)))));
                    arr_18 [i_2 + 1] [i_2 + 1] [i_4] [i_4] |= (var_5 ? (((((0 << (var_9 + 362864124)))))) : (((arr_7 [i_3]) / (((arr_7 [i_3]) << (254 - 229))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                {
                    var_18 += ((var_14 ? 6 : (!var_11)));
                    arr_30 [i_5] [i_7] = -var_3;
                }
            }
        }
    }
    #pragma endscop
}
