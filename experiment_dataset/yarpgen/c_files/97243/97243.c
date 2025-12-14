/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (4095 ? 4294967295 : 1531796904);
        arr_3 [i_0] = ((((1919018498 | (max(var_0, 31735)))) > var_1));
        arr_4 [i_0] = var_0;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_8 [6] = ((3206045331 && ((min(-20433, ((var_6 ? (arr_5 [0]) : var_4)))))));
        arr_9 [i_1] [i_1] = 0;
        arr_10 [i_1] = 1470821445;
        arr_11 [i_1 - 2] [11] |= (arr_0 [i_1]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_14 [7] [14] = ((-46 ? 10238 : 3083669152));
        arr_15 [19] = min(((-17 ? 2157951109 : -1)), (arr_12 [i_2] [20]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_21 [21] [i_3] [i_3] = ((((((!(arr_12 [i_2] [i_4])))))) + (min(32738, 4294967295)));
                    arr_22 [i_2] [i_3] [i_3] [22] = var_9;
                    arr_23 [10] [i_3] [i_4] = ((var_0 ? var_1 : (((max((arr_19 [i_4] [i_4] [11] [i_2]), -5445))))));
                    arr_24 [i_2] = 1818704055;
                }
            }
        }
        arr_25 [i_2] &= (-(arr_19 [4] [i_2] [i_2] [i_2]));
        arr_26 [i_2] &= var_2;
    }
    var_11 = (var_10 - 3661012136);
    var_12 = (((var_6 ? -var_7 : -32195)));
    #pragma endscop
}
