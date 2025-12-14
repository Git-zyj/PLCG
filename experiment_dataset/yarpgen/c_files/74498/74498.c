/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_10 *= ((((min(12544, -3539264496769945407))) || ((max(-3539264496769945407, ((-3539264496769945418 ? var_9 : -3539264496769945429)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1 + 2] [i_0] = (max(56, -27664));
                    var_11 *= var_3;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (min(var_3, (max((arr_0 [i_3] [i_3]), -1))));
        arr_12 [0] = ((((-905880576 ? (arr_5 [i_3]) : -3539264496769945407))) ? 210 : 186);
        var_12 *= (~381395230);
        var_13 = (((((~(~7154)))) ? 1 : (~3539264496769945407)));
        arr_13 [7] = 1104;
    }
    var_14 = (min(var_14, (((~(var_9 > var_7))))));
    var_15 = (max(var_15, (((358876456 ? 4096420320 : 25)))));
    #pragma endscop
}
