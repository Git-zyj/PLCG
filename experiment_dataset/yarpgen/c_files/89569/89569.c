/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 52255;
        var_13 = 2144133278;
        var_14 = (((-6559191713301530442 / -1253839833499964358) * 1580595412));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 = ((35 % (((((9 <= (-127 - 1)))) | (-7 != 1118265964)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, (-7 + 32766)));
                            var_17 = (min(var_17, 74));
                            var_18 = 3176701332;
                        }
                    }
                }
            }
        }
        var_19 ^= ((1706 - (((1118265963 | 3176701337) / (77 & -2137737567)))));
        var_20 = 3176701332;
        var_21 -= 0;
        var_22 = (((-27 != 8061) % 11498457909755247530));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_23 [i_6] = 0;
        var_23 -= (1118265960 % (((13 / 5161720086580753572) ^ (2938515793 > 53605))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                var_24 ^= (1 + 1);
                var_25 = ((35 && (758973844 != -103)));
            }
        }
    }
    var_26 = 0;
    var_27 = (1 / 3176701332);
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 19;i_11 += 1)
            {
                {
                    var_28 = ((((((101 < 197833488) > 1))) % ((((1118265963 >> 18) >= 1)))));
                    var_29 = (((((15 || -11) % -1)) == (-22 || 2147483647)));
                    var_30 = ((((((32 < 48519) > 7))) - 1));
                }
            }
        }
    }
    #pragma endscop
}
