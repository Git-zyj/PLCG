/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (min(var_20, ((min(((-70 ? ((min((arr_0 [6]), var_3))) : var_2)), ((var_14 << (((arr_0 [2]) - 70)))))))));
        arr_2 [i_0] [i_0] = (-109 > 2147483648);
        var_21 *= (max(((min(186, -9221120804058800941))), (12657872523066102301 * 2147483647)));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 = (max((max(((-20156 ? (arr_5 [i_1] [15]) : var_5)), (92 >= 7894698461282419556))), (arr_5 [i_1] [6])));
        arr_6 [i_1] = ((219 + (max((-98 < 2147483647), (min(130216704, 7894698461282419556))))));
        arr_7 [i_1] [i_1] = ((~(((arr_3 [i_1]) ? ((((arr_5 [i_1] [5]) << (23592 - 23573)))) : ((var_2 ? var_8 : (arr_3 [2])))))));
        var_23 = ((((((((arr_5 [i_1] [i_1 + 1]) * (arr_3 [i_1])))) ? (0 ^ 0) : (4462999833983285532 + 1879048192)))) ? (arr_3 [7]) : 9259);
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_24 *= (max((min((((arr_3 [i_2 - 1]) ? (arr_4 [i_2 - 1]) : 12924)), var_6)), (((((max(4294901760, var_11))) ? 26963 : (arr_8 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_25 = (var_11 ? (max(18446744073709551611, 181895632)) : (((((min(var_15, -7452440379816478285))) ? 4113071663 : -6726472125915583836))));
                    arr_16 [i_2] [21] [6] [1] = (arr_14 [11] [2] [22]);
                    var_26 = ((((max((min(224, 8078905997776417033)), (((var_11 && (arr_13 [i_3] [15]))))))) ? 4294967295 : (((((max(24, -2929))) > var_6)))));
                }
            }
        }
        var_27 = arr_9 [0] [i_2];
        var_28 = var_15;
        arr_17 [i_2] [8] |= (var_17 / (min(var_18, ((var_14 ^ (arr_13 [i_2] [19]))))));
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        arr_20 [i_5] = (min((arr_15 [i_5]), ((0 ? 20970 : 6532314058158338250))));
        arr_21 [i_5] [i_5] = (max(-1140234284275740683, 0));
    }
    var_29 -= var_19;
    #pragma endscop
}
