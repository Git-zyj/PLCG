/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = (min(((min((arr_3 [i_0] [i_0] [i_1]), -22))), ((var_8 * (var_2 / 1734389669195474979)))));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_19 = (((((-15276 / (max(33554431, var_11))))) ? var_10 : ((var_0 ? (-7616749890432996569 + 122) : 1))));
                var_20 *= (min((arr_5 [i_2 - 2] [i_2 - 2]), 5021660384450391750));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_21 ^= (min((!4261412864), ((3986822248 ? 11799072798642179576 : var_7))));
                            var_22 = var_3;
                            var_23 = (max(3986822254, (!var_16)));
                        }
                    }
                }
                var_24 |= var_11;
                var_25 = ((((-127 ? (((4261412864 / (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((3260486744154827003 >> (308145055 - 308145038))))) + 27299));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = (var_2 ? 32756 : ((-165774390974016449 ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) : var_2)));
                    var_27 = (!((!(var_7 || 2503869364))));
                    var_28 = 4;
                    var_29 = (min(var_0, 33554433));
                }
                var_30 = (max((!-18), 217));
            }
        }
        var_31 = var_0;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_32 = 2047;
        var_33 = ((5687738163480768921 + (((var_4 ? 61259 : (arr_14 [i_7] [1] [i_7]))))));
        var_34 |= var_2;
        var_35 ^= (-2147483647 - 1);
    }
    var_36 -= var_11;
    #pragma endscop
}
