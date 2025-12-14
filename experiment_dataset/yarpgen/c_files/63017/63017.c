/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_11 -= 15982364918928959953;
                var_12 = var_2;
                var_13 ^= (((((+(((arr_6 [12] [7]) + (arr_5 [i_1] [i_1])))))) ? (!var_4) : (arr_4 [7] [i_0] [i_1 - 3])));
                arr_8 [i_0 + 1] [9] = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_14 = (((((-2147483647 - 1) - 14344307399903711019)) == var_7));
                    arr_18 [i_4] [1] [1] = (max(((((arr_9 [i_2] [i_4]) <= (arr_14 [i_2])))), (min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_4])))));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_22 [i_5] [i_5] [i_2] = ((((max(var_8, (arr_10 [i_3])) - var_0))));
                    arr_23 [i_5] [i_5] [18] [i_5] = ((14344307399903711033 ? var_5 : (max(((2861413932 ? (arr_21 [9] [14] [9] [i_5]) : (arr_15 [i_5]))), 5000669998312049354))));
                    var_15 = var_6;
                }
                arr_24 [i_2] = (arr_16 [18] [14] [14]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            {
                arr_29 [i_6] [i_7] [i_6] = var_2;
                var_16 -= ((-(max(((var_2 ? var_6 : 18446744073709551615)), (arr_13 [15] [i_6] [18])))));
            }
        }
    }
    #pragma endscop
}
