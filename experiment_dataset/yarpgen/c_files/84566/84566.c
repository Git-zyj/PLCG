/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 += ((((((arr_3 [i_0 - 1]) ? (min(var_10, 1350203329)) : (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0])))))) ? ((min(31, (arr_3 [i_0])))) : (((arr_1 [i_0]) & (((!(arr_3 [i_0]))))))));
        var_18 = (min(var_18, -1350203330));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((~(-32 || -97))) != (((!-1350203326) ? (arr_1 [i_0]) : 1))))));
                    var_20 = (max(var_20, ((!((((var_1 / var_6) ? 0 : (((arr_0 [i_0] [i_0]) + var_8)))))))));
                    var_21 = (((((arr_2 [i_0 - 1]) ? (arr_6 [i_0] [i_0] [i_0] [i_1 - 1]) : (arr_6 [i_0] [i_1] [i_1] [i_1 - 1])))) ? 1 : (arr_6 [i_1] [i_1] [i_1] [i_1 + 3]));
                    var_22 = (var_13 ? (arr_3 [i_2 - 2]) : var_0);
                    var_23 = (0 > 99);
                }
            }
        }
        var_24 += (!1350203329);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = ((!(arr_8 [i_3] [i_3])));
        var_25 |= var_5;
    }
    var_26 = -3;
    #pragma endscop
}
