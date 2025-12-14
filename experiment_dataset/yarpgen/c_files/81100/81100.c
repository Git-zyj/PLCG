/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] |= 1;
                arr_7 [i_0] [i_1] [i_1] = ((var_3 || (11732492362578283330 - 15179)));
                var_10 = ((((min(var_1, var_8))) ? 6714251711131268285 : (1 <= var_5)));
                var_11 = (max(var_11, ((((-2085193599 <= 11732492362578283329) ? (var_6 && 1) : ((6714251711131268287 ? var_5 : var_9)))))));
            }
        }
    }
    var_12 = ((((((~((-70 ? 25354 : var_2)))) + 2147483647)) >> (var_3 - 1316)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_13 = (max(var_13, ((((((var_9 && (min(0, 0))))) * (((((-2085193599 + 2147483647) >> (65528 - 65516))) * ((-2147483643 ? 31 : var_5)))))))));
                    arr_18 [i_2] = (min(0, 0));
                    arr_19 [i_2] [i_2] = var_3;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_14 = ((!((max(-14248, 1)))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_2] [i_2] [i_5] [i_6] [i_2] [i_3 - 2] = -14248;
                                arr_29 [i_2] [i_6 - 2] = ((((((((var_4 ? 4787682817691812192 : 0))) ? (min(14629, var_4)) : 63))) ? (((min(32767, var_7)))) : (((min(-32766, 8153817852161170732))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    var_15 = -var_6;
                    var_16 = var_3;
                    arr_32 [i_2] [6] [18] [i_2] |= ((32766 ? var_6 : -32767));
                }
                var_17 &= ((((((6768 <= 255) ? (min(5349774058394372681, 29619)) : var_5))) ? (((((var_5 ? 4294967291 : 58767))) ? 8834022792058781360 : var_5)) : (((((var_2 ? -22460 : var_9)) - ((min(-86, var_9))))))));
                arr_33 [i_2] [i_2] = var_0;
                var_18 = var_6;
                arr_34 [i_2] [i_3 - 1] = ((~(min(5, 14174858809312205492))));
            }
        }
    }
    var_19 = (min(((0 ? 65535 : (65535 + var_0))), (var_3 > var_8)));
    var_20 &= var_7;
    #pragma endscop
}
