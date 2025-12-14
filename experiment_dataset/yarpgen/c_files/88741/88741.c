/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (arr_1 [i_0]);
                var_16 = ((-((-(arr_1 [i_0])))));
                var_17 = 138;
                var_18 = (min(2147483643, 115));
                var_19 = (max(var_19, (arr_0 [7])));
            }
        }
    }
    var_20 = (min(((var_2 ? (max(var_0, var_3)) : (3145728 | 32747))), -var_2));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = (min(((((((arr_7 [i_2] [i_3 - 3]) * (arr_10 [i_3 - 2])))) != var_8)), (166 >= 72)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_21 = (((max((arr_15 [i_5 - 1] [i_3 + 2]), (arr_9 [i_3 - 4] [i_3 + 2]))) ? ((((22390190 / 5501107629075281539) > ((((arr_5 [i_2] [1]) ? (arr_14 [i_4] [i_3] [i_3]) : (arr_9 [i_2] [i_3]))))))) : (((!(arr_14 [i_2] [i_4] [i_5 + 3]))))));
                            var_22 = (min((min(((var_5 ^ (arr_11 [6]))), (var_8 && -4129431408136652468))), ((~(var_12 / var_5)))));
                            var_23 = (((((-((((arr_9 [i_4] [i_4]) >= (arr_5 [i_2] [i_2]))))))) <= -8600486700357708297));
                            arr_17 [i_2] [i_2] [i_2] = (min(((((arr_8 [i_3 - 3]) == (arr_15 [i_3 - 3] [i_3 - 2])))), (min(var_10, (arr_8 [i_3 - 2])))));
                            arr_18 [i_2] [i_3] [i_4] [i_5] = 144115188075823104;
                        }
                    }
                }
            }
        }
    }
    var_24 ^= ((((max(var_11, -var_9))) ? (((var_11 ? var_7 : (0 > var_10)))) : var_1));
    #pragma endscop
}
