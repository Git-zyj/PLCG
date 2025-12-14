/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 = 10162757156535128296;
        var_15 = (((-(arr_0 [i_0 - 3]))));
        var_16 = ((5488428807280945608 >> (3617785589 - 3617785527)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (((3617785612 ? 3617785607 : -2305843009213693952)));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_18 = (min(var_18, ((((arr_4 [4] [10] [i_2 + 1]) << (arr_4 [2] [4] [i_2 + 2]))))));

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                var_19 |= (((arr_7 [3] [i_2 + 1]) + (arr_7 [5] [i_2 + 1])));
                var_20 = 54;
                arr_9 [16] [7] [16] [1] = 1778405630;
                var_21 += (12310992825196502686 && -var_13);

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_22 -= var_13;
                    var_23 &= 12310992825196502696;
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_24 = 30720;
                    var_25 |= (arr_5 [i_1] [i_2 + 1] [i_3 - 2]);
                    var_26 = (min(var_26, (((~(!var_3))))));
                    var_27 = (((127 % -492919932) ? 54078 : (((arr_6 [5]) / var_3))));
                }
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_28 |= (!2147483647);
                arr_16 [11] [9] [14] [9] |= (arr_6 [3]);
            }
            var_29 = (4294936575 < 1731475455);

            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                var_30 = (!2292586909);
                arr_20 [9] [3] [12] [10] = (var_9 == 6135751248513048926);
                var_31 = (min(var_31, ((((-178 % 18446744073709551602) && (arr_17 [14]))))));
            }
            var_32 = ((var_12 ? (arr_8 [0] [16]) : (((((arr_12 [12]) != var_11))))));
        }
        arr_21 [11] &= 14475602356385099007;
    }
    var_33 = (((((~(3617785612 / -60)))) - var_13));
    #pragma endscop
}
