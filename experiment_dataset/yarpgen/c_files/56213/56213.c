/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 23199;
    var_12 = var_1;
    var_13 = var_8;
    var_14 &= ((985886356147376505 ? 42323 : 10462417123505379846));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((7984326950204171770 ? 86 : 18446744073709551598));
        var_15 -= 69;
        arr_3 [2] [i_0] = 19624;
        var_16 += var_3;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [9] = (((((var_4 ? (((166 ? (arr_4 [i_1]) : 24))) : (var_5 * var_7)))) ? (arr_4 [i_1]) : -86));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_17 |= (72 || 86);
                        arr_15 [i_1] [i_3] [6] [i_1] = -114;
                        var_18 = (((arr_9 [i_2] [4]) ? ((((arr_11 [i_3] [i_3] [i_2 + 1] [i_3]) + (((var_0 - (arr_0 [1]))))))) : (min((arr_13 [i_1] [i_3] [i_3] [i_4]), -var_6))));
                        var_19 = -11960;
                    }
                }
            }
        }
        var_20 -= ((((((!215) ? ((max(5884, (arr_9 [i_1] [i_1])))) : ((0 ? 0 : 1))))) ? (-15978 <= var_0) : (arr_5 [i_1] [i_1])));
        var_21 = (min(var_21, ((max(var_7, ((max(2855911363, 1067199786))))))));
        arr_16 [2] = 209;
    }
    #pragma endscop
}
