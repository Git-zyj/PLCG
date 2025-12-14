/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_3 ? var_17 : var_10)) >= (((var_4 ? var_12 : var_9)))))) ^ (((!(((var_3 ? var_13 : 10632855234842138206)))))));
    var_21 = (48050 > -230472683);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 |= ((~(arr_1 [1] [1])));
        var_23 = ((var_9 >= ((var_16 ? 0 : (arr_0 [i_0] [5])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_24 &= ((((((((3884934526605745463 ? var_10 : (arr_3 [i_1] [i_2])))) ? ((var_16 ? var_16 : (arr_5 [i_1]))) : (arr_8 [22] [i_1] [22] [6])))) ? ((1654121800 ? 29589 : 51830)) : ((35947 >> (31521 - 31499)))));
                    arr_11 [i_1] [i_1] [i_3] [i_1] = ((((((-31531 ? 29589 : 5548) >= (arr_9 [16] [i_2] [i_3]))))));
                    var_25 *= arr_7 [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 1];
                }
            }
        }
    }
    var_26 = (((((-31523 ? 1402561507 : -31523))) ? var_18 : (((((var_5 ? var_9 : var_10))) ? var_1 : var_13))));
    #pragma endscop
}
