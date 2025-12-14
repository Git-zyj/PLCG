/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = -2560029340448017899;
        var_20 -= ((~(((arr_0 [i_0]) / ((var_10 ? -2560029340448017904 : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((-((-(arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    arr_12 [i_3] = ((((((((arr_6 [i_1] [i_2] [i_3]) ? (arr_5 [i_3] [i_2] [i_1]) : var_10))) ? 3085709674 : (max(var_6, var_12)))) | (max(((var_6 ? (arr_5 [i_1] [i_1] [i_1]) : 2197961233)), (arr_11 [i_1])))));
                    var_21 = (min(var_21, (arr_5 [i_1] [i_2] [i_1])));
                    var_22 = (arr_11 [i_3 + 2]);
                }
            }
        }
    }
    var_23 = ((var_18 ? (-2560029340448017899 - 0) : var_7));
    #pragma endscop
}
