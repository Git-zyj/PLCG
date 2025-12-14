/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_1] = var_9;
                    var_18 ^= ((~((((arr_1 [i_0 + 3]) != (arr_3 [i_0]))))));
                }
            }
        }
        arr_8 [i_0 + 3] = (((arr_4 [i_0 + 2]) ? (((((((arr_2 [i_0] [i_0]) ? 0 : 3935057651))) || 16642))) : var_10));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_19 = (~var_10);
        arr_11 [i_3 + 1] = (((((4294967274 <= 6844) ? 13212716889540786240 : ((((arr_3 [i_3]) ? -1 : 1))))) > var_7));
        arr_12 [10] = (((arr_3 [i_3 + 3]) ? (max((arr_10 [i_3 + 1]), var_0)) : (arr_6 [i_3 - 1] [i_3 + 3])));
        arr_13 [2] = (arr_4 [1]);
    }
    var_20 = 1;
    #pragma endscop
}
