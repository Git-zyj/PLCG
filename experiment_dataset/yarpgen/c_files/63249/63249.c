/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 -= (arr_0 [i_0]);
        var_15 = (arr_1 [10] [10]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 = 195;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_1] = (max(((((arr_0 [i_1]) <= (arr_2 [i_2] [i_1])))), var_0));
            var_17 ^= 12609821285425501256;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_18 = var_8;
            arr_12 [i_3] [i_1] = -5691;
            var_19 -= -var_0;
        }
        var_20 ^= (min(5836922788284050360, (!var_12)));
        var_21 = ((5836922788284050362 ? -21990 : 10815761613535745435));
    }
    var_22 = var_13;
    #pragma endscop
}
