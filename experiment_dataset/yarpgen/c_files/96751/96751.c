/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = ((0 ? 63047 : 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 &= (min((max((~1), 51214)), (((((65535 ? var_11 : (arr_0 [18])))) ? (~1) : 1))));
        var_20 = (max((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))), ((max(var_4, var_8)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [13] = var_7;
                    var_21 = (max(var_21, ((((min(var_14, (arr_7 [1] [i_1] [i_2])))) / (arr_7 [i_0] [i_0] [i_0])))));
                    arr_9 [i_0] [i_1] [i_0] = (max(((min(var_4, (min(var_4, 1))))), (min((0 - 15828599708469389507), (arr_1 [i_2])))));
                }
            }
        }
        arr_10 [8] |= ((((max((1 == 2693485843), var_9))) ? 24472 : ((min(var_3, var_8)))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = -var_15;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 = ((!((((arr_14 [i_5 + 2] [i_5 + 2] [i_5 - 2]) ? (arr_14 [i_5 - 2] [i_5 + 2] [i_5 - 2]) : (arr_21 [i_5] [i_5 + 2] [i_5 - 2]))))));
                        arr_22 [i_6] [19] [i_6] [i_3] = (min(1, var_11));
                        var_23 = (min(var_23, (((232313686 ? 12219 : -4547197854487133328)))));
                        arr_23 [i_3] [i_4] [i_4] = -var_5;
                    }
                }
            }
        }
    }
    var_24 &= ((-(!var_11)));
    #pragma endscop
}
