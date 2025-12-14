/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = ((0 ? 1 : 25));
        var_21 = ((((((1 != var_11) / (min(25, var_8))))) ? (((max((arr_0 [i_0]), (arr_1 [3] [5]))) % var_5)) : var_7));
        var_22 *= ((65515 >> (var_0 + 51)));
        arr_4 [i_0] [i_0] = ((124 || ((min(((var_5 ? 1317660327 : (arr_1 [i_0] [i_0]))), (44430 || 4294967271))))));
        arr_5 [1] = 25;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (min((arr_2 [i_1] [8]), ((((max((arr_7 [i_1] [i_1]), var_9))) ? ((var_5 ? (arr_2 [i_1] [i_1]) : (arr_6 [i_1]))) : (arr_0 [i_1])))));
        var_23 = ((((max(4881670498198845076, (((11 ? 0 : 105)))))) ? (~0) : 0));
        var_24 = (max(((((max((arr_0 [i_1]), (arr_6 [14]))) > 0))), ((1 ? 1 : 0))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (arr_7 [i_2] [i_2]);

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_25 = (!157);
            var_26 = ((7864308650715329494 ? var_3 : (((-21947 + 2147483647) >> (((arr_1 [i_2] [i_2]) / 1))))));
            arr_15 [i_2] [i_2] [3] = (min((min((((!(arr_11 [i_2])))), ((1 ? -7864308650715329492 : 4294967270)))), var_5));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_27 = (min((arr_0 [i_4 + 3]), ((min(var_14, var_17)))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {

                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            var_28 += ((min((((1 ? 1 : 4227858432))), (((arr_13 [i_2]) & 1)))));
                            arr_27 [i_2] [i_2] [i_5] [i_2] [i_7] = (min(((1 ? 25383 : 7864308650715329473)), (min(var_9, (arr_14 [i_2])))));
                            arr_28 [i_2] [i_2] [i_2] [i_2] [3] = 6331923801757281953;
                            arr_29 [i_2] [i_4] [i_5] = 8192;
                            arr_30 [i_7] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] &= (((((max(-1870304080, var_19)))) ? (max((min(6331923801757281953, var_8)), ((min(1, var_0))))) : ((((arr_21 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4]) ^ (arr_21 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4]))))));
                        }
                        var_29 = (min(var_29, (((((var_12 ? var_7 : 67108863)) - (((var_9 ? -19 : (arr_16 [i_5] [i_4] [i_4 + 2])))))))));
                        arr_31 [i_2] [i_4] [8] [i_6] = 29937;
                    }
                }
            }
            var_30 = (((((((~(arr_7 [i_2] [i_4]))) & (~var_19)))) ? (min((min(6331923801757281963, (arr_21 [4] [i_2] [i_4] [i_4]))), var_14)) : (22111 | -29937)));
            var_31 -= 220;
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_32 = (min(25, 112));
        var_33 = (min(2977306969, 65528));
        arr_34 [12] [2] |= 6331923801757281963;
    }
    var_34 = ((-(-7864308650715329494 * 0)));
    #pragma endscop
}
