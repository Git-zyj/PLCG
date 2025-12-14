/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [15] = (--127);
            var_20 = ((~(arr_0 [10] [i_0 + 1])));
            var_21 = (((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : -16384))) ? (arr_0 [i_0 + 1] [i_1]) : (min((-127 % var_16), 317184800)));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = (((arr_0 [i_2 + 1] [i_2]) ? (((var_12 ? ((-(arr_6 [i_0] [i_0]))) : (arr_6 [i_0] [i_0])))) : (arr_1 [i_0 - 1] [i_2 + 3])));
            var_22 ^= (((arr_7 [i_2 + 2]) + var_5));
            arr_9 [i_0] = (arr_3 [i_0]);
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = -127;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_18 [7] [i_0] [i_5] = ((9 ? 9015 : 4171669887297338434));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_23 = max(1, 63474);
                            var_24 = var_13;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_25 = var_7;
                            arr_23 [i_0] [i_3] [i_4] [i_5] [i_7] = var_15;
                            arr_24 [3] [1] [i_4] [i_5] [3] [i_0] = var_8;
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {
            arr_27 [i_0] [i_0] [i_0] = (min(var_1, var_6));
            arr_28 [i_0] = 19055;
            arr_29 [i_0] [i_0] [2] = ((max((arr_1 [i_0 - 1] [7]), (arr_14 [2] [5]))) > (((-(((arr_20 [i_0] [8] [4] [12] [4]) ? 26180 : var_8))))));
            arr_30 [3] [i_0] [i_8] = var_2;
            var_26 -= arr_16 [2] [i_8] [15];
        }
        var_27 = (((((-(arr_15 [i_0] [i_0 - 1] [i_0 + 1] [1])))) ? (((!(arr_15 [15] [i_0 - 1] [i_0 + 1] [15])))) : (arr_15 [15] [i_0 + 2] [i_0 - 1] [6])));
        var_28 = (min(((8191 ? -8192 : 63475)), (arr_14 [i_0] [i_0])));
        var_29 = ((((arr_1 [5] [i_0]) - (((123 ? 1 : -1))))));
    }
    var_30 = ((((((-10302 ? var_11 : var_16))) ? ((min(var_12, -92))) : 2418373155)) > (((!(var_18 * var_10)))));
    #pragma endscop
}
