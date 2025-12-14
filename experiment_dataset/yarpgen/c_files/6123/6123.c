/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (~-1);
                arr_8 [i_1] [i_1] = (arr_4 [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] = ((-(!2576043978)));
                    arr_17 [i_4] = 11;
                }
            }
        }
        var_13 = (arr_13 [i_2] [i_2]);
        var_14 = var_2;
        arr_18 [i_2] [1] = ((((~(arr_10 [i_2] [i_2]))) * 209));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_15 *= ((((((arr_9 [i_5]) ? var_4 : (arr_9 [i_5])))) && ((!(((178 ? 2147483647 : (-9223372036854775807 - 1))))))));
        var_16 = (min(var_16, (((34 > (((((2 ? 3354756194 : 817237821))) ? 1 : (~1718923310))))))));
        var_17 = (min(((min(51, (-2147483647 - 1)))), ((61 ? -6562727560667172270 : 16384))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_25 [6] [i_6] = max(((((arr_19 [i_6]) == 2107020754))), (23303 << 0));
        var_18 = ((((((-127 - 1) ? 119 : -109))) ? (max(229, 1)) : (136 / 2107020754)));
        var_19 = (min(var_19, ((max(-18573, (-127 - 1))))));
    }
    var_20 = ((!(4194303 <= 109)));
    #pragma endscop
}
