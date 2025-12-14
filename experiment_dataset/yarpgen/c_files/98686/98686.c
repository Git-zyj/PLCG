/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((2147483647 >> (2147483648 - 2147483630)))) ^ ((1 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
        arr_3 [i_0] |= (arr_0 [i_0]);
        var_14 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_15 ^= 6692345193230794804;
            var_16 ^= (arr_1 [1] [i_1]);
            var_17 = (((arr_0 [i_1]) || (arr_2 [i_0] [i_1])));
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_18 += (!-1813830166);
            arr_8 [i_2] [i_2] [i_2] = ((var_10 ? (arr_5 [i_0] [i_2]) : (1 >= var_3)));
            arr_9 [i_2] = (~var_2);
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            arr_12 [i_0] [i_3] = var_8;

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_19 ^= (((var_8 >= var_3) >= ((6692345193230794804 % (arr_5 [i_3 + 4] [i_0])))));
                var_20 = ((-(arr_15 [i_3 + 4] [i_3 - 1] [i_3 + 3] [i_3 + 3])));
                var_21 = (arr_15 [i_4] [i_4] [i_3] [i_0]);
            }
            var_22 = (~6692345193230794804);
        }
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        arr_19 [i_5 - 2] |= ((!(arr_18 [i_5 - 1])));
        var_23 |= ((+((((((arr_18 [i_5]) ? var_10 : var_7)) == ((max((arr_18 [i_5 - 2]), -1284994276))))))));
    }
    #pragma endscop
}
