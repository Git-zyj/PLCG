/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max((max(3365293725154204032, 0)), (max(var_13, var_17)))), ((((((-24895 + 2147483647) >> (var_2 - 118))) | (24886 / var_14))))));
    var_20 |= ((((24886 > (max(var_4, var_7)))) ? (((max(var_1, (max(-24880, var_1)))))) : ((var_11 % (var_8 <= 205)))));
    var_21 = ((((min(var_6, var_16)) > (var_2 + 24894))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = ((8680383386661632632 > (var_15 & var_16)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_23 += ((~(max(var_3, var_9))));
                arr_8 [i_1] [i_0] [i_0] [i_0] = (max((var_0 && 9062), ((((((var_16 ? var_11 : var_14))) || ((max(var_11, var_8))))))));
            }
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_24 *= (((max(9081, 13754077239918250776)) >= (255 > var_6)));
                        var_25 = (max((((2358409779904114828 % ((max(524224, 524224)))))), (max((min(0, 9766360687047918984)), var_6))));
                        arr_16 [i_4] [i_1] [i_1] [8] = var_16;
                        var_26 = (max((((var_12 ? var_2 : -524221))), var_3));
                    }
                }
            }
            arr_17 [i_1] = (max((((max(var_18, 1473057666)))), ((9766360687047918984 ? (var_17 != var_9) : (var_14 >= -32)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_22 [i_5] [i_5] [i_1] = (((var_7 * 3200466400) >> (min(var_11, var_0))));
                        arr_23 [i_1] [i_1] = (max((max(((max(var_11, var_15))), var_6)), (-18268 % var_11)));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_27 &= (!25552);
            var_28 = (max(var_28, (min((1473057654 > 32168), ((((min(7006025656372730185, 245))) ? ((max(var_15, var_15))) : var_18))))));
            var_29 = (min(var_29, (((min((11624 >= var_14), (max(var_16, 2173254829)))) << var_0))));
        }
    }
    #pragma endscop
}
