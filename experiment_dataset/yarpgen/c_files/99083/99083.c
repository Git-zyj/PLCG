/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((~(((!17200) & var_4))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1] [i_0] [18] = 17212;
                        var_21 *= (!-17201);
                    }
                }
            }
        }
        var_22 |= 17200;
        var_23 ^= ((((max(1656827051, 17201))) & ((-5831657330278834897 ? 1283041810388561652 : (!-1656827051)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_18 [i_0] [11] [i_0] [i_5] = (((1 ? 17200 : 47964)));
                    var_24 -= ((((!(!47961))) ? 9333 : ((47964 ? 17191 : 17198))));
                    var_25 = (max(var_25, ((((((((min(-17200, 1885))) ? ((17202 ? 63658 : -17201)) : -17194))) ? -8868851017477988817 : ((max(((4538741572748976827 ? 63651 : -17201)), (~43012)))))))));
                }
            }
        }
        var_26 = ((((~(~9045616477767601064))) > (min((((-17200 ? 3349238588 : 63672))), (max(1975944083, -1868133608634171813))))));
    }
    var_27 = var_17;
    var_28 -= ((var_6 << (var_15 - 911118399)));
    #pragma endscop
}
