/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((~(~1)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= ((((var_10 * var_8) ? (var_2 <= var_18) : (arr_1 [i_0]))));
        var_20 &= ((var_6 ? (min(((555327666922925878 >> (280083510 - 280083458))), (8778370597467011708 == 9462813069548372687))) : (((((var_0 ? var_3 : var_9))) ? ((((var_2 >= (arr_0 [i_0]))))) : var_14))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (((max((var_14 > var_3), var_0)) <= var_0));
                        var_22 = 19156;
                    }
                }
            }
        }
    }
    var_23 ^= var_13;
    var_24 = ((((var_1 != ((8778370597467011708 ? 6656395694466575989 : 17891416406786625737)))) ? (9462813069548372682 < 13) : (((9007182074871808 % 9462813069548372687) + (((9668373476242539907 ? 1 : 2429850446)))))));
    #pragma endscop
}
