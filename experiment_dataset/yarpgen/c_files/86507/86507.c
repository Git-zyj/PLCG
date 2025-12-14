/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 *= (~var_1);
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (arr_5 [i_2] [i_0]);
                    arr_10 [i_0] [i_0] = (((~3853870199) | -1));
                    var_22 &= 3571470662881781680;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_23 = ((((((!var_8) * var_15))) ? (((max((arr_12 [i_3]), var_5)))) : var_13));
        arr_13 [0] &= (arr_11 [1] [i_3]);
        var_24 &= var_5;
        arr_14 [i_3] = (arr_12 [0]);
        var_25 = var_10;
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_4] = var_1;
                        var_26 = ((~(-1 <= var_12)));
                    }
                }
            }
        }
        var_27 = (arr_16 [i_4]);
        var_28 = ((var_15 * (((~(arr_18 [i_4]))))));
        var_29 = (max(var_29, ((max((min((!var_9), var_7)), var_8)))));
    }
    #pragma endscop
}
