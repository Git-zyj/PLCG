/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(-2048319524, (15252449239601649104 > 15252449239601649133)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = ((!(((-var_10 ? var_0 : var_15)))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((var_8 * (-32760 < 18446744073709551615)));
                        var_19 = ((8245698335138759128 ? 40783 : ((max(2193429681, 32749)))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 19365;
                        var_20 = (max(var_20, (15252449239601649133 && var_9)));
                    }
                }
            }
        }
        var_21 = 51881;
        var_22 ^= ((-var_3 > (var_18 > var_13)));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_23 = (min(var_23, (((((var_4 ? (var_14 * 0) : 13653)) < (((-25835 && (var_12 / -14)))))))));
        var_24 = var_9;
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    var_25 = (((127 ? var_12 : var_0)));
                    var_26 &= ((-(min(var_14, 18446744073709551615))));
                    var_27 += var_17;
                }
            }
        }
        var_28 = (((5585 < var_9) * (15252449239601649110 && 1568032361)));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_29 = ((3194294834107902506 && (1 > 2)));
                var_30 = ((var_6 && (5625507928485217083 > var_6)));
                var_31 = ((645136285 - 0) * var_17);
            }
        }
    }
    var_32 = var_7;
    #pragma endscop
}
