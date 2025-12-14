/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= -4673051392199727233;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [11] [i_1] [i_0] = ((((max(var_14, (arr_2 [i_0 - 1] [i_1 + 1] [i_1 + 1])))) ? 17544079267189364738 : 3871854972853695497));
                    var_17 = min((((((14574889100855856124 ? 17544079267189364738 : (arr_2 [3] [i_1] [i_2])))) ? (((var_3 ? 9 : 54))) : var_15)), (max(3871854972853695491, ((min(39, var_12))))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = var_11;
                    arr_8 [i_0] [i_1] [i_2] = ((max(902664806520186897, 3871854972853695491)));
                    var_18 ^= ((277822686 ? 47 : -25894));
                }
            }
        }
    }
    var_19 += ((max(14574889100855856119, var_9)));
    var_20 = ((var_14 ? ((((var_7 || var_10) - (4017144594 | 1)))) : var_11));
    #pragma endscop
}
