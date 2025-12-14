/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((!(((18446744073709551614 ? 120 : 31096))))))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [19] [i_3] [i_3] [i_3] = (((~31100) ? (1 % 1) : ((71 ? 4309 : 34443))));
                        var_13 = 31110;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_17 [13] [13] [i_2] [i_0] [i_0] = (34408 + -116);
                            arr_18 [i_1] [i_1] [i_2] = (!34439);
                            var_14 = (1 * 777523361);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_15 = (((-16 + 2147483647) << (24899 - 24899)));
                            var_16 = -127;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_25 [6] [i_1] = (max(((((-120 / 1020) ? (~5402) : (max(91, 1893848434))))), ((96 ? 31525197391593472 : 2988361743))));
                            arr_26 [i_6] [i_3] &= ((1 << ((((~-2134567221550777077) > -1)))));
                            arr_27 [i_6] [i_1] = (~31116);
                            arr_28 [i_0] [i_2] [i_3] [7] = ((~((((-123 & 1) <= ((31080 ? -4471982 : -4)))))));
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_3] = (max((1048575 && 28259), (34426 > 31106)));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_17 -= ((((~(-127 - 1))) >= (-2147483647 - 1)));
                        var_18 = (min(var_18, ((((-2134567221550777077 % 18) ? (31109 % 2147483638) : ((max(45, 233))))))));
                        arr_32 [i_0] [i_1] [i_2] [i_7] [i_2] |= ((((max(2401118862, 2147483639))) == (max(1893848423, 18445618173802708992))));
                    }
                }
            }
        }
    }
    var_19 = ((~(!18446744073709551592)));
    #pragma endscop
}
