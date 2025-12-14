/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -2072;
    var_14 += (~var_10);

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 ^= var_7;

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_16 = arr_2 [i_0 + 3];
            arr_5 [i_1] = (((((var_12 ? (max(var_2, var_9)) : (((8 ? -2072 : (arr_4 [i_0] [i_0] [i_0]))))))) ? (min((arr_2 [i_0 - 2]), var_3)) : 4294967274));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] [i_0] = (((((var_4 ^ (arr_8 [i_0 + 2])))) ? ((18446744073709551613 ? 2071 : 3300264775)) : (((67108736 * ((5557 >> (var_0 - 1583498785705987776))))))));
                var_17 = ((1070315943 ? 2172037162917916090 : 0));
                arr_10 [i_0] [i_0] [i_2] = var_1;
                var_18 += var_8;
                var_19 = (max(2491, -2));
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_20 ^= var_6;
        var_21 = (max(((1 >> (13476505285110935542 - 13476505285110935526))), (((-60 && (((var_12 ? var_1 : var_9))))))));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_22 = (min(var_22, ((max((0 >= 1190161540129376670), (((var_8 ? 68 : 18446744073709551591))))))));
            var_23 = (min(var_23, (((((min(11883273925147506043, ((min(var_1, 3925467503)))))) ? -32760 : var_11)))));
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_24 = 1;
            var_25 = ((((((-3529 + 2147483647) << (15421816337002001336 - 15421816337002001336)))) ? (max(var_11, var_1)) : 1025068259));
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_26 = (min(var_26, (((((min(((1597304520 ? var_12 : var_4)), 14401))) ? var_8 : 100)))));
            var_27 = (max(var_27, 240));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_28 = 28;
            var_29 = (max(var_29, (((+(((arr_12 [i_3]) ? -78 : (20943 <= 2258))))))));
        }
    }
    #pragma endscop
}
