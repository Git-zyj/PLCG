/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((-18668 ^ 0) < ((((-9223372036854775807 - 1) ? 2722871664 : 12)))));
        var_20 ^= (((arr_1 [i_0]) ? var_4 : (!var_17)));
        arr_3 [i_0] = -18697;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_5 [i_1] [3] [3]) ? 543269973 : ((53 ? (arr_1 [8]) : 13686958156981900838))));
            arr_8 [i_0] [7] [i_1] = (((((arr_5 [11] [i_0] [i_1]) / (arr_1 [i_1])))) ? (arr_6 [i_0] [i_1 - 1]) : 13278);
        }
        arr_9 [i_0] = (var_5 / (arr_5 [7] [i_0] [i_0]));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 = ((!(!var_8)));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((((0 ? (!var_2) : (-18668 % 9)))) ? (((!(arr_14 [i_2] [0] [i_3] [i_4])))) : (arr_13 [i_2] [i_3] [5]));
                }
            }
        }
    }
    var_22 = ((!((((var_7 % var_17) ? var_0 : (!var_19))))));
    var_23 *= ((var_19 % (((!(!-7360509165173297188))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_6] = (max(((min(((0 ? -18688 : var_2)), var_4))), (((arr_21 [i_5] [i_6]) ? var_14 : (!var_12)))));
                arr_24 [i_5] [i_5] [i_5] = ((-1222766357 ? -18707 : 0));
                arr_25 [i_5] = (!5380018210698283361);
            }
        }
    }
    #pragma endscop
}
