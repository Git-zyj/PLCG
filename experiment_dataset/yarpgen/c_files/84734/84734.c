/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (586392639 >= 233);
                    var_11 = (min(var_11, (((~(min(-7779497254437927683, 3170095676518826165)))))));
                }
            }
        }
    }
    var_12 &= (3515262393 || var_3);
    var_13 = 31;
    var_14 = (max(-20263, var_7));
    #pragma endscop
}
