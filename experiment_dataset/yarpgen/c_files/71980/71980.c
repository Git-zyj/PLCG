/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_3 [i_0 + 2] [i_0 - 1] [i_1 - 3]) >= (((((((!(arr_1 [i_0])))) >= ((10 ? -30 : var_8))))))));
                arr_6 [i_1 - 3] [i_1] = var_8;
            }
        }
    }
    var_10 = var_6;
    var_11 = (max(var_11, -21));
    var_12 = ((-42 ? (max(((var_5 ? 1860593300937496821 : var_9)), -4)) : var_3));
    #pragma endscop
}
