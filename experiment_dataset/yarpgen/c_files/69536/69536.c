/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = var_4;
            arr_7 [i_1] |= (((((var_10 ? (-2147483647 - 1) : var_11))) ? (-2147483647 - 1) : 2893909605));
            var_14 += (2893909605 / 1401057688);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_15 *= 18446744073709551615;
                var_16 = (var_4 ? (var_0 * 16326552313166884698) : (((1401057688 ? var_0 : 4294967295))));
            }
            var_17 = (max(var_17, (((3013271722 ? ((var_3 ? var_6 : 17)) : var_1)))));
            var_18 = (((((var_1 ? 2893909605 : ((2147483648 ? var_11 : 1401057688))))) ? var_6 : 255));
            var_19 ^= (22144 == 2147483647);
            var_20 ^= 2147483648;
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            var_21 += (max(1401057690, -53));
            var_22 = (((2147483665 - var_9) ? 0 : 0));
        }
        arr_17 [i_0] &= 10;
        var_23 ^= ((((2147483647 / ((var_10 ? var_12 : 4850410555710308213)))) - 17739442355618486282));
    }
    #pragma endscop
}
