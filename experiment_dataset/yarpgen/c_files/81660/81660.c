/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!(((252 ? var_1 : var_5)))))) & var_13));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 &= (-(((!(arr_6 [i_0] [6] [i_0] [i_2 - 1])))));
                    var_18 = (max(var_18, (((~(arr_6 [i_2] [i_2 - 1] [i_2] [i_2 - 1]))))));
                    var_19 = (max(var_19, (((!((max(((-455501128 ? (arr_2 [i_2] [i_0]) : (arr_4 [i_1] [i_1]))), 6620379958390331400))))))));
                }
            }
        }
        arr_7 [i_0] = (~(max(-1, (((405863033 ? 216 : 95))))));
    }
    #pragma endscop
}
