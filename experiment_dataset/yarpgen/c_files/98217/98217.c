/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = ((((min(var_13, var_1) * -255))));
    var_16 = ((max(var_2, (-13021 <= var_2))));
    var_17 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max((min(-18446744073709551615, ((max(-13079, (arr_1 [i_0] [i_0])))))), ((((2421733868714576317 ? -1 : -1))))));
                arr_7 [i_1] [i_1] [i_1] = -6542376117581355056;
            }
        }
    }
    #pragma endscop
}
