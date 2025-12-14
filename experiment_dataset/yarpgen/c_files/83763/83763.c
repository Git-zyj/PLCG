/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = -3406379258610613613;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 ^= (((!(((1034827352997540441 ? 171 : 171))))));
        var_17 = (min(var_17, (arr_1 [i_0])));
        var_18 *= (((32734 ? -495832853 : (arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_1] [i_1] [i_1] = (((85 != 73) >> ((((arr_11 [i_1] [i_2]) && (arr_8 [i_1] [i_1] [i_1]))))));
                        var_19 ^= ((((arr_8 [i_4 + 2] [i_4 + 4] [i_4 + 2]) + 2147483647)) >> (((arr_12 [i_2] [i_4] [i_4] [i_2]) + 44)));
                        var_20 = (((32734 | 847321054) >= 15644953310788244002));
                        var_21 += (!183);
                    }
                }
            }
        }
        var_22 = (((((arr_4 [i_1]) ? (arr_4 [i_1]) : -52)) | 847321061));
    }
    #pragma endscop
}
