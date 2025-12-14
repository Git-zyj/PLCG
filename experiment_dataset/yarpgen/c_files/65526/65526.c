/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = -var_1;
    var_15 = (min(((((((var_11 ? var_0 : 2198889037824))) && ((min(var_11, var_11)))))), var_0));
    var_16 ^= var_0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [7] [i_0 - 1] = ((((((((var_4 ? var_10 : var_10))) ? ((12251849241753773508 ? 1136615325702256256 : var_0)) : ((var_10 ? (arr_0 [i_0] [1]) : 0))))) ? (((((1 ? -114 : 18))) ? 22 : 11647197207048520766)) : (((((arr_0 [i_0 - 1] [i_0 - 1]) <= (arr_0 [i_0 - 1] [i_0 - 1])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0 - 1] = (((arr_0 [i_0 - 1] [i_0 - 1]) || 7331950952706511320));
            var_17 = ((((-1 ? 1 : 1))) ? 2143201123218292863 : 76);
            var_18 ^= (((arr_1 [i_0 - 1] [i_0 - 1]) ? 3 : 1));
            arr_6 [i_0 - 1] = (arr_4 [i_0 - 1] [i_0 - 1]);
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_3] = (18446744073709551595 ? 17551733776902468604 : -55);
                            var_19 = ((~(arr_9 [i_3] [2] [6] [i_3 + 1] [1] [i_3 + 1])));
                            var_20 = ((1 ? (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (((arr_4 [i_0] [i_4]) ? (arr_4 [i_3 + 1] [1]) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0])))));
                            var_21 = (!(arr_13 [i_0 - 1] [i_2 + 2] [i_2 + 3] [i_3 + 1] [i_4 - 2] [i_4 - 2]));
                            arr_15 [1] [i_1] [i_2 - 4] [i_3] [i_2 - 4] = (((arr_0 [i_4 + 1] [i_4 + 1]) ? 3 : 0));
                        }
                    }
                }
            }
        }
        arr_16 [i_0] |= (max((((!6194894831955778107) ? ((((arr_12 [i_0] [1] [13] [i_0] [i_0]) + var_12))) : ((16303542950491258764 ? 16303542950491258732 : 1)))), (min((1 + 1), (max(var_3, 1))))));
    }
    #pragma endscop
}
