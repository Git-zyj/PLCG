/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!17551422081356915012);
                var_14 = (max(var_14, (((((((18 || 25590) ? -482085063 : 36377))) && 5885620457467711710)))));
                arr_7 [i_1] = (min(((((max((-32767 - 1), -75391350))) ? 1 : 1)), -2144609567));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3 - 2] = ((1642394999 + ((((-1 ? -64 : var_5)) + 0))));
                            arr_15 [i_0] [14] [i_1] [i_2] [i_3 + 1] [i_3 - 2] = 0;
                            arr_16 [i_0] [i_1] [i_0] [i_1] = ((18428 ? 0 : -32750));
                        }
                    }
                }
                var_15 = (min(var_15, 169));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_16 = (((!0) > 13608992348493022291));
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_7] [i_8] &= ((-18325 ? 16113287047864846522 : (arr_19 [i_5])));
                                var_17 = (((arr_9 [i_6]) ? -1552238902 : (((((14 ? (arr_28 [i_4] [i_5] [i_5] [i_4] [i_8]) : var_1))) ? 8579443233515212619 : 805306368))));
                                var_18 = (82 - 37687);
                            }
                        }
                    }
                }
                var_19 = (arr_12 [i_4] [i_5] [i_5] [i_5]);
            }
        }
    }
    #pragma endscop
}
