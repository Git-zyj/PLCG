/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 -= (min(1, 827269595));
        arr_3 [i_0] = -121041921;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max((((arr_1 [i_1]) ? 1173660039 : 131071)), ((((arr_5 [i_1]) != (((arr_5 [i_1]) | var_5)))))));
        var_15 = var_2;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2 - 1] = (arr_6 [i_2 - 1]);
        arr_10 [i_2] = 1;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((((0 + -793632278) + 2147483647)) >> (489501204 & 1))))));
        arr_15 [i_3] = min((((1 < 1) + (0 <= 9524488))), (((arr_7 [i_3 - 1]) ? (((arr_1 [i_3]) ? 1 : var_9)) : ((var_9 ? 1 : 1)))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_17 = min((((arr_19 [i_3 - 1] [i_3] [i_3] [i_3 - 1]) - 1)), ((1 ? (arr_14 [i_3 - 1]) : (arr_19 [i_3 - 1] [i_3] [i_3] [i_3 - 1]))));
                        var_18 = (min(var_18, (((var_11 > ((((arr_8 [i_3 - 1]) || (arr_8 [i_3 - 1])))))))));
                    }
                }
            }
            var_19 -= (min(((max(1, var_4))), ((~((min(var_11, (arr_16 [12] [i_4]))))))));
            arr_25 [1] &= 161245955;
            var_20 = (((1 >= 0) < (min((arr_8 [i_3 - 1]), (max(var_7, var_10))))));
        }
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_21 = (max(var_21, ((max(var_0, ((((1 ? 510125897 : 270723860)) - 1)))))));
                arr_33 [i_3] [i_3 - 1] [i_3] = (arr_1 [i_3 - 1]);
                arr_34 [4] [i_7 - 2] [i_8] &= ((((1 ? 0 : (arr_23 [i_3])))) + ((+((1 ? (-2147483647 - 1) : -586690488)))));
                var_22 ^= (((((+(((arr_19 [1] [14] [i_7] [14]) ? 0 : 1))))) ? -var_7 : ((((((-2147483647 - 1) ? 2141973762 : var_7))) ? (min(2147483584, 1)) : (1 | 0)))));
                var_23 = (((264241152 - (var_10 + 1))));
            }
            var_24 = ((~(max(-1851260388, (arr_24 [i_3] [i_3 - 1] [i_3 - 1] [i_7])))));
            var_25 = max(1, 0);
            var_26 = (arr_0 [i_3 - 1]);
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_27 = ((~((((arr_19 [5] [i_3] [i_3 - 1] [i_3]) > (arr_19 [i_9] [i_3] [i_3 - 1] [i_9]))))));
            var_28 = (((((arr_36 [i_3 - 1]) ? (arr_36 [i_3 - 1]) : (arr_36 [i_3 - 1])))) ? ((1157877663 ? 1 : 579404704)) : (1 - 1083678957));
            var_29 = (arr_20 [i_3] [i_9] [i_3] [i_9]);
            var_30 = var_4;
        }
    }
    var_31 = ((((var_6 ? var_11 : (var_8 * var_11)))) ? (((~1) ? var_8 : ((var_0 ? var_12 : var_9)))) : ((var_4 ? var_11 : var_5)));
    var_32 = 0;
    #pragma endscop
}
