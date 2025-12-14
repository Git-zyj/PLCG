/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    var_15 ^= (arr_6 [18] [i_1 - 2]);
                    arr_11 [i_0] = ((arr_6 [i_1] [i_1 - 1]) ? 5125 : (var_2 | var_12));
                    arr_12 [i_0] = (arr_10 [i_2 - 1] [i_0] [i_0] [i_1 - 2]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_16 [i_0] [i_0] [i_1] [i_0] = -2316625702385748180;
                    var_16 = min((((!((((arr_4 [i_1 + 1] [i_3]) * -5125)))))), (arr_8 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1]));
                    arr_17 [i_0] [i_3] [i_1] [i_0] = (arr_6 [i_1] [i_0]);
                    arr_18 [i_1] [i_1] [i_1] [i_3] |= var_10;
                }
                arr_19 [i_0] = var_10;
                var_17 = (((arr_5 [i_0] [i_0]) % (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : var_1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_18 *= (~-40);
                arr_27 [i_5] [i_4] [i_4] = (max(((min(3509369549, 17939))), (((arr_4 [i_4] [i_4]) + var_10))));
                var_19 = ((((min((arr_10 [i_5] [i_4] [i_4] [i_4]), var_11))) == (((arr_21 [i_4]) ? (arr_21 [i_4]) : (arr_21 [i_4])))));
            }
        }
    }
    #pragma endscop
}
