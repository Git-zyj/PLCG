/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~((min(-4466, -4448))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((min(-4153, 190))) != 190));
                var_14 = (((arr_5 [i_0] [i_0]) + -4466));
                var_15 = (min(65525, (((-17 / (arr_1 [i_0]))))));
                var_16 = (min(var_16, ((((((arr_6 [i_0] [i_0] [i_0]) % (arr_1 [i_0]))))))));
                var_17 += (((~(arr_5 [i_0] [i_1 - 1]))));
            }
        }
    }
    var_18 = ((((((74 ? -1277167410 : 0))) % (min(-7487664642124144318, -16655)))));
    #pragma endscop
}
