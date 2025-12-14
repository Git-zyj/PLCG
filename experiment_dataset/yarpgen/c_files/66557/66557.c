/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [10] = ((((((arr_6 [i_2 + 1]) ? 35001 : (arr_6 [i_2 + 1])))) ? (((arr_6 [i_2 + 1]) ? var_9 : 35005)) : (((53071 ? 22633 : (arr_6 [i_2 - 1]))))));
                    var_12 = ((((((((var_4 ? var_7 : 8525114339695780521))) ? (!-8525114339695780535) : 30543))) ? (((((((arr_4 [i_2 - 1] [i_0]) ? var_4 : var_7))) == (arr_4 [7] [7])))) : ((min(var_3, var_5)))));
                }
            }
        }
    }
    var_13 = (((((var_7 | (var_6 <= var_0)))) ? (min((min(8525114339695780534, -9)), ((max(42902, var_8))))) : (!var_3)));
    #pragma endscop
}
