/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_11;
    var_20 = ((var_0 >> (!1)));
    var_21 = (((((max(27788, var_17))) ^ 1)));
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_1 + 1] [i_2] [i_1] |= ((((((max(var_2, var_3))) ? var_10 : (((var_2 ? (arr_2 [i_0] [i_0] [i_2]) : 27788))))) >= var_11));
                    var_23 = (max(var_23, var_11));
                }
                var_24 = var_9;
                var_25 |= ((((((((3979425589502125522 ? (arr_3 [i_0 + 2]) : (arr_2 [i_0] [i_0 + 2] [i_0])))) ? (min(-27789, var_1)) : (arr_5 [i_1] [i_1 + 2] [i_1])))) ? (arr_0 [i_0] [i_0 + 2]) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : var_6))));
            }
        }
    }
    #pragma endscop
}
