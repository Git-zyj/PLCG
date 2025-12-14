/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (max(((max(var_10, var_2))), var_0));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_20 += var_9;

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_21 += -4858960065596890980;
                            var_22 = ((((max(var_17, var_13))) || ((max((max(-21749, var_12)), var_8)))));
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, ((-((max(var_5, var_11)))))));
                            var_24 += (((-21739 / 18014398509416448) ? (max(var_14, (var_3 < var_17))) : (max((max(-263436485, var_1)), ((max(var_17, var_11)))))));
                            var_25 = (min(var_25, ((-(((!((max(21765, 1))))))))));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_26 = (((!((max(var_6, var_7))))));
                            var_27 = (((var_7 ? var_12 : var_11)));
                            arr_21 [1] [16] [i_2] [i_3] [i_0] = 1;
                            var_28 = (--3417305767472240417);
                            var_29 = (max(var_1, (((446447043 >= var_17) ? ((446447043 ? var_14 : var_0)) : (!-2155428382692156609)))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] = (max((((var_0 ? var_17 : var_3))), var_9));
                        var_30 = ((!(((3417305767472240417 ? var_15 : ((var_2 ? var_5 : var_4)))))));
                        var_31 *= (max((((((max(var_10, var_9))) ? -4951053998694723930 : var_18))), (max(var_15, (~var_9)))));
                        var_32 = (((((1 ? 78 : 6144))) ? (((max(var_13, var_11)))) : ((var_13 ? 4065493646558164693 : var_14))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_33 = (((max(-539739156928820673, 22)) <= (var_4 <= var_14)));
                        var_34 = (max(-var_14, var_1));
                        var_35 = ((((max(var_17, var_3))) * ((var_16 ? 144115188075855871 : var_3))));
                        var_36 = ((var_13 ? ((35799 ? var_8 : 117307147)) : ((511 ? -3447549771563157041 : var_11))));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_37 += ((((!((max(var_2, var_8))))) ? (max((max(var_2, var_7)), var_4)) : ((var_9 ? var_4 : var_12))));
                        var_38 = (max(((var_12 % (max(var_0, -117307141)))), var_16));
                    }
                }
            }
        }
    }
    var_39 *= (var_18 ? (max((!var_15), (~var_6))) : -2809);
    var_40 = (max(-var_6, 1216664257681599867));
    var_41 = (max((((var_7 ? var_18 : 4503599627337728))), var_17));
    #pragma endscop
}
