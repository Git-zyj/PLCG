/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_3, var_15)) ^ 680891153)) > var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (~17);
                    arr_9 [i_0] = ((!((min((((arr_4 [i_0] [14]) + (arr_7 [9]))), ((((arr_5 [i_0] [5] [3]) != var_11))))))));
                    var_18 = (((((((!(arr_1 [i_0])))) > -212043101))) >> (var_11 - 140));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (((arr_12 [i_3] [22]) != (max((max((arr_12 [i_3] [i_3]), (arr_12 [i_3] [i_3]))), (238 >= var_2)))));
                var_20 = (arr_14 [16]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                var_21 = min((max(var_2, (arr_6 [i_5] [i_5] [8]))), var_3);
                arr_22 [3] [2] [7] = ((var_7 >= (arr_4 [3] [3])));
                var_22 = ((((min((arr_14 [21]), (max(43, var_2)))) + 2147483647)) >> (((((arr_1 [i_5]) ? ((var_15 ? var_2 : var_6)) : (((!(arr_12 [i_5] [0])))))) - 1548657187)));
            }
        }
    }
    #pragma endscop
}
