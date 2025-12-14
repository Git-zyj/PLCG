/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 < ((~(var_4 ^ var_8)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = var_12;
        var_15 = ((-((max((((arr_3 [i_0 - 1]) > 217)), (arr_1 [i_0]))))));
        arr_4 [1] = ((var_10 ? (arr_0 [i_0]) : 9223372036854775807));
        arr_5 [i_0 + 1] [i_0 - 1] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (((~((var_5 ? ((max(-1476229517, 1))) : var_9)))))));
                        var_17 += ((min((((arr_3 [i_3]) << (var_4 - 47))), ((((arr_0 [17]) ? 1476229520 : var_3))))));
                        var_18 = (((1 ? 1368472222286333416 : var_12)) >> (min(8352999562439117055, 0)));
                        var_19 &= ((var_10 ? (var_1 + var_10) : ((var_0 ? var_5 : var_1))));
                        var_20 = ((((max(42019, 4))) ? ((((arr_8 [8] [8] [i_2]) ? var_6 : var_11))) : (((((arr_12 [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) < 3115099218))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = var_12;
        arr_15 [i_4] = ((1 << (-1476229521 + 1476229538)));

        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_22 = ((0 ? (min((arr_14 [i_5] [i_4]), 9997582025335151574)) : ((((((var_9 << (var_4 - 52)))) ? (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [20]) : var_10)))));
            var_23 |= var_8;
            var_24 += ((var_2 ^ ((var_4 | (((arr_12 [i_4] [1] [1] [14] [1] [4]) ? (arr_7 [i_4] [i_4]) : 125))))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_25 *= (min(((2147483647 ? var_3 : 0)), 1));
            var_26 *= (arr_3 [i_4]);
            arr_22 [i_4] [0] [i_6] = (arr_9 [i_4] [i_4] [1] [i_4]);
        }
    }
    var_27 = (min(var_27, (((((((var_0 ? 9223372036854775807 : var_2))) ? var_10 : var_7))))));
    var_28 = (((((((min(3218289776, 14722))) ? -1 : (var_9 >= var_11)))) | (min((max(-44, var_10)), -600620633))));
    #pragma endscop
}
