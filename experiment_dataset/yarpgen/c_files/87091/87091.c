/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, var_7));
        var_13 = (min(var_13, ((max(((((((arr_2 [i_0]) % 14)) & (~-118)))), (((arr_1 [i_0]) ? var_5 : var_1)))))));
        arr_4 [i_0] = (((min(((15 ? var_2 : var_1)), (max(var_2, var_9)))) * ((((var_2 <= (arr_2 [i_0])))))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_14 *= -3;
            arr_7 [i_0] [i_1] [i_1] &= 3756075613;
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                var_15 ^= min((((0 << (-122 + 135)))), ((1 ? var_6 : (arr_5 [i_3 + 1] [i_2] [i_3 + 1]))));
                var_16 |= (-105 >= 691);
            }
            arr_15 [i_2] [i_2] [i_2] = ((-1 <= (min(39, (0 & -24)))));
            arr_16 [i_0] [i_2] [i_2 - 1] &= (max((~var_9), (min(var_1, (arr_12 [i_2 - 2] [i_0] [i_2] [i_2])))));
        }
        arr_17 [i_0] = var_7;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_17 = var_2;
        var_18 = 51945;
        var_19 -= ((-32377 ? ((((max(203, 2147483648))) ? 0 : (!var_4))) : ((((-1007371057 > (138 > var_11)))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = ((-(((arr_10 [i_5] [i_5] [i_5]) & (((124 != (arr_20 [i_5]))))))));
        var_20 |= ((+(((!(((arr_10 [i_5] [i_5] [i_5]) && var_11)))))));
        arr_25 [i_5] = -486169509;
    }
    var_21 = (((!-7) > -34));
    #pragma endscop
}
