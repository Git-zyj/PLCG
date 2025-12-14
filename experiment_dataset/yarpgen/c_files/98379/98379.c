/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 -= ((var_17 ? (~var_17) : ((((arr_0 [i_0]) ? (!-2147483628) : 174)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_19 = ((!((((arr_0 [i_4]) | ((87831437 ? var_7 : 65527)))))));
                            var_20 &= var_16;
                            arr_13 [i_0] [i_1] [i_2] = ((!(((arr_10 [13] [i_4]) == (((arr_10 [i_1] [i_2]) & 22))))));
                            var_21 = (((((22 >= 4100667238864941407) ? var_14 : var_17)) << ((((max(9, 65492))) - 65452))));
                            var_22 = (max(var_22, (((var_11 ? (((arr_6 [i_2]) ? var_1 : var_11)) : ((((!(~var_12))))))))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_23 = 22;
                            var_24 = (~50444);
                        }
                        var_25 -= (max(((~(arr_16 [i_0] [i_0] [i_2] [i_2] [i_2]))), (var_2 | var_13)));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_26 = var_6;
                            var_27 = -197;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_28 -= ((15328976092449661947 ? -170282251 : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_7])));
                            var_29 = 26333;
                            var_30 = (max(var_30, (var_8 == var_2)));
                        }
                    }
                }
            }
        }
        var_31 = ((-(((!var_15) ? -30228 : (((!(arr_8 [i_0] [i_0] [15] [i_0]))))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_32 = (arr_2 [i_8] [i_8]);
        var_33 -= var_6;
        arr_24 [i_8] = -15083;
    }
    var_34 = 7503;
    #pragma endscop
}
