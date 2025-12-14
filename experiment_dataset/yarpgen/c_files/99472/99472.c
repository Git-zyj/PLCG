/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (~var_14);
                var_16 = (max(var_16, ((max(((((((~(arr_0 [i_0] [i_1])))) ? (2122948989868998188 <= 70368744177663) : -var_0))), ((-(((arr_0 [11] [i_1]) * (arr_5 [i_0]))))))))));
                arr_6 [5] = (!2122948989868998188);
                var_17 = -77;
            }
        }
    }
    var_18 |= (((((13678 << (4051821792661159800 - 4051821792661159784)))) * (((51840 / var_14) ? var_14 : var_0))));
    #pragma endscop
}
