/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_16;
    var_20 = var_3;
    var_21 = 2054432751526045657;

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_22 = (((((((min(var_10, 24874)) <= (arr_1 [i_0]))))) & ((-1 << ((((1 ? var_12 : var_7)) + 10385))))));
        arr_3 [i_0] = var_4;
        arr_4 [i_0] [i_0] = (min(4294967295, -8171218805616259618));
        arr_5 [i_0] = (~(((!(arr_2 [i_0])))));
        var_23 |= ((((min((~1048575), (((-3930 ? (arr_0 [i_0] [i_0]) : var_6)))))) ? -var_18 : (((!(arr_2 [10]))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 + 1] = (arr_7 [i_1]);
        var_24 = (((((963977233 ? -5863 : 2947447015))) ? 3244110989 : (((var_13 ? -107435893 : 99)))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_25 = ((((63680 ? -124 : 1)) < ((min((arr_9 [i_2]), (arr_9 [i_2 - 1]))))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_26 ^= 186;
                    var_27 = (min(var_27, (((+((596840781 << (((arr_9 [i_2 - 2]) - 17950)))))))));
                    var_28 |= var_11;
                }
            }
        }
        var_29 &= 50804;
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_30 = 85320760;
                    var_31 *= ((var_12 ? ((((((var_3 ? 25238 : 0))) ? var_14 : var_14))) : ((~(((-127 - 1) / 262143))))));
                }
            }
        }
        var_32 *= (34314 ? (-32767 - 1) : 1685720971);
    }
    var_33 = -var_11;
    #pragma endscop
}
