/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_2] [3] = (!((((41632 ? (arr_9 [i_0 - 4] [i_0]) : 1324481306)))));
                    arr_11 [i_0 - 1] [i_1] [i_0] [i_1] |= ((((((-30637 + 2147483647) >> (2970485989 - 2970485968)))) & ((1324481306 ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 4])))));
                }
            }
        }
    }
    var_12 -= ((!((min(-32429, (11285 % -4656815345389146156))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_13 = (min((arr_14 [i_4]), ((+((-6810718419647920888 ? (arr_18 [i_3] [i_4] [i_4]) : 0))))));
                var_14 = (max(var_14, 4294967295));
                arr_20 [i_4] = (((+(((arr_12 [i_3] [i_3]) ? 54250 : var_1)))) > ((((((var_3 & (arr_12 [i_3] [i_3])))) && var_2))));
            }
        }
    }
    var_15 = ((-var_1 > (max(var_5, (~var_0)))));
    #pragma endscop
}
