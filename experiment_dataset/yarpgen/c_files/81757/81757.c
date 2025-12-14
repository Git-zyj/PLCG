/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = min((min(928687366321717658, (((!(arr_7 [i_2] [i_2] [i_2])))))), ((17518056707387833937 << (2243270292594984829 - 2243270292594984811))));
                    var_18 = 7;

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_19 = (min(var_19, 1493058126412310974));
                        var_20 = (min(142590269323964603, (arr_2 [i_0])));
                        var_21 = (max(((var_12 ? var_5 : var_1)), 16297856696201652697));
                    }
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_22 = ((-(!65535)));
                    var_23 = 13240521964019275429;
                    arr_14 [i_0] [i_0] = (-((var_1 ? var_9 : var_1)));
                    arr_15 [i_0] [i_0] [i_0] [i_4] = min((((var_7 * var_17) ? -var_3 : 13186958012755080034)), 15351971278071239363);
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_24 -= arr_5 [i_0];
                    var_25 = (-((((var_9 ? (arr_16 [i_0] [i_0] [i_0]) : 6755399441055744)) * 928687366321717658)));
                }
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    arr_23 [i_0] [8] [i_0] [10] &= (-((10849119125107449014 ? var_15 : 17518056707387833954)));
                    var_26 = (min(var_26, var_14));
                }
                arr_24 [i_0] = ((var_15 == 137438953471) ? (((arr_5 [i_0]) * var_5)) : ((((arr_19 [i_0] [i_0] [i_0]) < var_6))));
            }
        }
    }
    var_27 = var_13;
    var_28 = var_3;
    var_29 = (12214417878391468337 && 17518056707387833943);
    #pragma endscop
}
