/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((max(var_2, var_10)));
    var_13 -= 0;
    var_14 ^= var_2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_4 [i_0] = (((((((769275780901272141 ? 1 : 1))) ? (((var_4 || (arr_2 [i_0])))) : (arr_2 [i_0 + 1]))) >> (((var_2 & 99) - 79))));
            var_15 = (min(var_15, (((((((7063036058405731150 ? 254 : (arr_3 [9] [1]))))) ? (var_5 < var_0) : ((-((var_9 ? var_9 : var_7)))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = ((((max(536870911, 65451))) && ((((var_7 ? 253 : var_4)) <= (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2])))));
                        var_17 ^= (((var_6 << (((arr_8 [7] [i_0 - 2] [i_0 - 2] [i_0 - 2]) - 14601023245466057736)))) * 86);
                    }
                }
            }
            arr_10 [i_0] [i_0 + 1] [i_1 - 2] = ((var_11 ? (((arr_2 [i_1 - 1]) & (arr_2 [i_1 + 1]))) : 8191));
            arr_11 [i_1] = (((max((((255 ? 65435 : 209))), (min(var_1, 231)))) > (((min(105, 254))))));
        }
        var_18 -= max(1, -1891858954);
        arr_12 [i_0] = (((var_3 | -6328) || ((12503 <= (arr_9 [i_0 - 2] [i_0 - 2] [i_0 + 1] [1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 7;i_4 += 1)
    {
        arr_15 [i_4] = (((11273306602003159075 | 13281941897778634108) - (var_0 % 14350278457743376341)));
        var_19 = (((((1012155849882427827 ? 637918760 : 637918743))) ? var_7 : (var_9 | var_0)));
        arr_16 [i_4] [i_4] = ((-(arr_13 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_20 = (arr_17 [i_5]);
                    var_21 = (min(var_21, (((((var_3 ? var_3 : 59))) || 3404217543894255051))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    {
                        arr_31 [1] [i_7] [i_8] [i_9 - 2] [i_9] = var_2;
                        var_22 -= (arr_22 [i_4 + 4] [i_7 - 1] [i_9 + 2]);
                        arr_32 [10] [i_7] [i_7] [i_7] [1] = 65418;
                        arr_33 [i_4] [i_7 - 1] [i_7] [i_4] [i_9] [i_7] = var_8;
                    }
                }
            }
        }
    }
    #pragma endscop
}
