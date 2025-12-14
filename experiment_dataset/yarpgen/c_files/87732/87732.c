/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((-((min(1, 1)))));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((!((min(3844829067, ((((arr_4 [i_1]) || 14501105833964587400)))))))))));
                var_14 = var_5;
                var_15 = (192 ^ 1);
            }
        }
    }
    var_16 -= ((~((1 ? 634697230805278799 : 163540875))));

    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_7 [i_2] = (min((((!(arr_4 [i_2 + 1])))), (arr_5 [i_2 - 1])));
        arr_8 [i_2 + 2] [i_2 + 2] = 8790;
    }
    #pragma endscop
}
