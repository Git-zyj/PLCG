/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_2));
    var_18 = (((((((var_6 ? var_1 : 7496711793451979694)) <= (((min(var_14, var_5))))))) > (min(var_1, var_3))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = max((((!(!-9)))), var_3);
        arr_3 [i_0] = 1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (!((((arr_1 [i_1]) ? var_8 : 7))));
            var_20 = ((-(max(((min(3003721997, var_5))), (max(-9, var_7))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 *= ((((!((max(var_12, 0))))) ? 142 : var_6));
            var_22 ^= (!var_9);
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_3] = (((((1111335409177147870 ? 91 : -7))) ? (~7408376297658627652) : ((max(((min(var_6, (arr_9 [3])))), (arr_11 [i_5] [2] [13]))))));
                        arr_19 [i_0] [8] [i_3] [1] = -8;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_30 [i_8] [i_7] [6] [i_6] = ((-(((!(arr_29 [i_6] [10] [i_7]))))));
                    var_23 = 9;
                }
            }
        }
    }
    #pragma endscop
}
