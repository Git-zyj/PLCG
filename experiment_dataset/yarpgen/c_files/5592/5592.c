/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((((~3906863135) == ((7365875425830819699 ? 4294967272 : 255)))))));
    var_17 = (~33);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = 133;
                    arr_10 [i_0] [i_1] [i_1] [i_0] = -77;
                    var_19 = 4294967295;
                    arr_11 [i_0] [i_1] [i_0] = 77;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_20 = ((-((33 - (-26 * 1)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    {
                        var_21 = -15;
                        arr_23 [i_3] [i_6] [i_5] [i_6] [i_6] [i_4] = ((+(((5342 % 923207830) ? (99 != 878798002) : ((15 ? 21497 : 27))))));
                        arr_24 [i_3] [i_4] = ((((((7 - 4294967295) << (((~1319085037) + 1319085056))))) ? (11 > -1542915) : 8514434142284476166));
                        var_22 |= (!1);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_34 [i_9] = ((1594593562 >> (254536102 - 254536092)));
                        arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((!(((67108863 ? -33 : -33))))) ? (((6102609008838115602 ^ 255) | ((((-26 + 2147483647) >> (-26 + 34)))))) : 22));
                    }
                }
            }
        }
        var_23 = ((((18446744073709551605 | 603997778) ^ 231)));
        var_24 = (((18446744073709551615 ? -7425456425531743734 : 238)));
    }
    #pragma endscop
}
