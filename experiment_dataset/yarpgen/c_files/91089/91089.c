/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((max(1, (-8181 & -18))) > ((((var_8 ? var_1 : var_6))))));
    var_12 = (max(var_12, var_9));
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_2] [i_1] [i_2] = (arr_5 [i_2]);
                    var_14 = (max(var_14, ((max(((var_3 * (arr_6 [i_1] [i_0 + 1] [i_0]))), (((+((min((arr_5 [i_1]), var_8)))))))))));
                    arr_8 [i_1] [i_2] [i_1] [i_1] = (((((8180 ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? 8162 : (((!(arr_1 [i_0 + 1]))))));
                    var_15 = (max(var_15, var_10));
                }
            }
        }
    }
    #pragma endscop
}
