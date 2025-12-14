/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = var_13;
                    var_15 = (max(var_15, var_11));
                }
            }
        }
    }
    var_16 *= ((((((-30 ? 39 : 1))) ? 1 : ((min((-32767 - 1), var_7))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            {
                var_17 -= (((((((758268219 ? 2769909078 : var_4))) - (min(var_9, var_2)))) != 173));

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    arr_18 [i_3] [i_3] = var_4;
                    var_18 = (min(var_18, (((((var_11 ? var_7 : var_8))) ? (~var_3) : ((0 ? (~13086708980319291990) : var_8))))));
                    var_19 -= var_13;
                    var_20 ^= (12607 ? ((((-1835851241 + 2147483647) >> (!var_13)))) : ((4426003231923562372 ? ((0 ? var_1 : var_11)) : (((var_5 ? var_12 : 30318))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        arr_21 [i_6] [i_6 + 1] &= (1 != 30318);
        var_21 = (max(var_21, 30308));
        arr_22 [i_6] = var_4;
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_22 = (max(var_22, ((((((1 ? -6765 : 4080))) ? ((83 | (1 + 0))) : (-1416835748 > 190))))));
        arr_27 [i_7] = ((1 ? -var_8 : ((((~237) > var_13)))));
        var_23 = (((((max(1, 255))) == 248)));
        var_24 *= ((((!((max(2251799813683200, var_0))))) ? -1416835748 : ((36939 ? 165 : var_4))));
    }
    var_25 = (min(var_25, (((max((max(var_7, 1316909165), var_5)))))));
    #pragma endscop
}
