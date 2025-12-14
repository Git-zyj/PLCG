/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= -78;
        arr_3 [i_0] = ((-(~1391146485)));
        var_12 += var_9;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max(78, ((min((arr_4 [i_1 + 1]), -78)))));
        arr_7 [i_1] = ((((min(77, (arr_4 [i_1])))) ? ((var_7 ^ (((arr_4 [i_1]) ? (arr_4 [i_1 - 2]) : (arr_5 [i_1 + 3] [i_1 + 3]))))) : ((+(((arr_0 [i_1]) ? 1 : (arr_1 [i_1])))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [6] [6] |= ((1391146485 ? ((((min((arr_9 [i_2] [i_1]), 127))) ? 1 : 3203652794)) : (((-5423375799346523918 ? ((var_7 ? -78 : var_3)) : ((((arr_9 [i_1] [i_2]) ? 2903820804 : 77))))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_20 [i_1 + 1] [i_1 + 1] [i_1] [0] = var_1;
                            var_13 = (min(((-52 ? 1391146477 : 1091314501)), ((-(arr_0 [i_5 + 1])))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_14 = 78;
            var_15 -= ((((((arr_11 [i_6 - 2] [i_6 - 2] [i_6 + 1]) ? ((-52 ? 3203652794 : var_8)) : var_2))) > (max(2903820801, 13130975251972417536))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_27 [i_1] = (((arr_9 [i_1] [i_7]) ? (((2903820810 ? 1091314499 : ((33 * (arr_22 [i_1] [i_7])))))) : ((((((arr_21 [i_1]) ? var_6 : 65417))) ? 5315768821737134080 : var_10))));
            var_16 = (((var_8 * -5315768821737134072) <= ((((((arr_21 [i_1]) != 1)) ? -2903820810 : 51)))));
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_17 = 3461949402;
        arr_31 [i_8] [13] = arr_29 [i_8];
        var_18 = 5315768821737134079;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            {
                var_19 = (((((-(arr_35 [i_9] [9] [i_9])))) ? (((((arr_38 [i_10] [i_10 + 1]) || (arr_38 [i_10] [i_10]))))) : (((arr_38 [i_10] [i_10 - 2]) & 2903820810))));
                var_20 *= 52;
            }
        }
    }
    var_21 = ((var_11 ? var_7 : ((~((min(var_11, var_2)))))));
    #pragma endscop
}
