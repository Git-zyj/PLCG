/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (var_3 & var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 |= (!((((((-(arr_0 [i_1])))) / (arr_2 [0] [0])))));
                        arr_8 [i_0] [3] [i_2] [i_2] [i_2] [i_0] = arr_6 [i_0] [i_1] [i_1] [i_1];
                    }
                }
            }
        }
        var_16 |= 18446744073709551615;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_17 = ((var_6 ? (((18446744073709551598 == (max(0, 1))))) : (arr_10 [i_4])));
                    var_18 = (((~((var_3 ? (arr_13 [i_4] [i_4] [i_4]) : 0)))));
                }
            }
        }
        arr_17 [i_4] [i_4] = (arr_10 [i_4]);
    }
    var_19 &= (((((25 || 120) <= (var_10 % var_5))) ? ((((!(5286 + 1418348068))))) : (max(var_10, (var_5 % var_4)))));
    #pragma endscop
}
