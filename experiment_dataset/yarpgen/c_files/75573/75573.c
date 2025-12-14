/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] = (arr_1 [i_0]);
                var_16 = (min(var_16, ((max((((arr_3 [i_0]) ? ((var_0 ? 59 : (arr_4 [i_0]))) : ((((arr_3 [i_0]) == 18446744073709551610))))), (min((arr_1 [i_1]), ((var_3 ? var_15 : var_9)))))))));
            }
        }
    }
    var_17 = (var_6 - ((-(min(var_6, 54)))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_18 = (min(var_18, (((((min((((~(arr_9 [i_2])))), (arr_8 [i_2])))) ? ((-76 ? 23113 : 2147483647)) : (arr_0 [i_2 - 1] [i_2]))))));
                    arr_14 [i_2] = (((69 != 18446744073709551610) ? ((((!((min(var_6, var_2))))))) : ((92 ? (arr_8 [9]) : (((max(-8, 0))))))));
                    arr_15 [i_3] = (max(((min((arr_7 [i_2] [i_2 - 2]), (arr_7 [i_3] [i_2 + 1])))), (((var_8 ? (arr_12 [i_2 - 2] [i_3] [i_2 - 2]) : -1)))));
                }
            }
        }
    }
    #pragma endscop
}
