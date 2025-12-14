/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = ((((~(65535 - 1239664870)))) ? (arr_0 [i_0]) : 65526);
        var_14 -= ((((((arr_1 [12]) << (3055302423 - 3055302415)))) | 224));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_15 -= (((arr_4 [i_1]) != (arr_3 [i_1 + 2] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2 + 1] [i_1] [i_3] [i_3] = (((arr_11 [3] [i_1 + 2] [i_3 + 2] [i_3 + 1] [i_4]) / -13));
                        var_16 |= arr_2 [i_1 + 1] [i_1];
                    }
                }
            }
        }
        var_17 = (((arr_2 [i_1 - 2] [i_1 - 1]) < (arr_9 [i_1])));
        var_18 -= ((arr_4 [i_1]) ? (((min(0, 27)) + -116)) : (((arr_12 [i_1 - 1] [i_1] [24] [i_1] [i_1] [i_1]) + ((65535 + (arr_11 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 1]))))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] |= ((((((((-1902015184 / 24) + 2147483647)) << (((520667770 <= 3055302428) - 1))))) / (arr_14 [i_5] [i_5])));
        var_19 |= (min(9, 35785));
        arr_18 [20] [i_5] |= ((((3442351423 - (((max((arr_10 [i_5]), (arr_2 [i_5] [i_5]))))))) == (arr_7 [i_5] [i_5] [i_5])));
        arr_19 [1] = (((((((arr_8 [i_5] [i_5] [i_5]) ? (arr_6 [i_5] [i_5] [i_5]) : 0)) % (1 < 235))) * ((((3757 >> (10890 - 10875))) >> (((0 | -9134837149304748145) + 9134837149304748154))))));
        var_20 = ((1 == (((!1) ? -1 : -3194741389))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_21 = -35;
        var_22 -= ((268435456 / ((-1902940178 * (arr_11 [i_6] [i_6] [i_6] [i_6] [2])))));
        arr_22 [i_6] = ((~(3055302423 - 3765)));
        var_23 = (arr_4 [i_6]);
        var_24 -= (arr_20 [i_6]);
    }
    var_25 = (127 | 1);
    #pragma endscop
}
