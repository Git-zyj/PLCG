/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min(((min(3027967692703387449, 230))), ((25024 - (arr_6 [i_1 - 1] [i_1 - 1])))));
                arr_8 [i_0] [i_0] = (min((~var_16), (((var_19 ? (0 ^ 1) : 9801)))));
                arr_9 [1] [9] = (min(2021091541910042747, (((!((min(var_4, var_8))))))));
            }
        }
    }
    var_21 = (--31);
    var_22 = var_2;
    var_23 = var_16;
    #pragma endscop
}
