/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = 65535;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((((arr_3 [i_2 + 2]) ^ (((min(var_1, 67))))))) ? (((min(31, var_2)))) : (((((220 ? 7683962117621695421 : 31))) ? -1 : (min(1, 36028797017915392)))))))));
                                arr_15 [10] [7] [7] = (((arr_14 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3]) > var_13));
                                var_17 = (((36028797017915392 + 225) % var_4));
                                var_18 = ((~((max(225, var_5)))));
                            }
                        }
                    }
                    arr_16 [1] [1] [0] [1] = 4294967295;
                    arr_17 [i_0] [3] [i_0] [i_0] = arr_8 [i_0] [i_1] [1] [1] [i_2];
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_19 ^= (((((1 ? var_1 : 2171891091))) ? (arr_18 [i_0] [i_0]) : 255));
            var_20 = (4139884525 / (arr_2 [i_0]));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_6] [i_6] [i_6] = (min(10638790144400678631, var_9));
            var_21 = var_10;
        }
    }
    var_22 = (((((-(24 + 64)))) ? var_7 : (min((((0 ? var_0 : var_12))), (7683962117621695421 | 178)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            {
                var_23 = (min(232859473843184699, 7683962117621695411));
                var_24 = (1 && 10762781956087856217);
            }
        }
    }
    #pragma endscop
}
