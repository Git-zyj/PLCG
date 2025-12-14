/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((min(-26476, var_7)), (((((var_9 ? -28725 : 2085195369)) == (var_4 && var_7)))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((((arr_6 [10] [i_1]) && ((15771 <= (arr_6 [i_0] [i_1]))))) ? (((var_6 / (arr_6 [i_2] [i_1])))) : -15772)))));
                    var_12 = (((((arr_1 [i_1] [i_2]) / var_2))) ? ((var_4 ? (var_7 < -26476) : (125 * var_4))) : ((((arr_7 [i_0] [i_1] [i_2]) == 16352))));
                }
            }
        }
        arr_8 [i_0] = ((~(max((min(3199733361284431971, (arr_4 [6]))), ((17610900030213014355 ? var_6 : 15247010712425119640))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = (min(-111, (((arr_14 [i_5 - 1] [i_3] [i_3] [i_5 + 1]) - 185))));
                    var_13 = -15790;
                }
            }
        }
    }
    var_14 = ((46062 ? ((-((min(var_8, var_4))))) : ((min((-728201322 > var_1), var_0)))));
    #pragma endscop
}
