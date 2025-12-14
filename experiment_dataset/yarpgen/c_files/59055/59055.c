/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((-808106002380816154 & (((6052 ? 0 : 1))))), 1));
    var_13 *= (!var_5);
    var_14 = ((~(!1)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((max((((~(arr_1 [i_0])))), (max(8342311730546616677, (arr_1 [i_0])))))) ? ((22 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : (((0 | (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = -18999;
                    var_17 ^= (((arr_4 [i_2] [i_0] [i_2]) > (arr_3 [i_0])));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((((((1552971595 ? (arr_2 [i_0]) : 51765)))) & (min(((~(arr_1 [12]))), 65535))));
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
