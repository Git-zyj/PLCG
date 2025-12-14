/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((227 << ((2872520164 ? 0 : -3))));
    var_15 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((~(((max((arr_0 [i_0] [i_1 + 1]), var_3)) >> (6071790806175495767 - 6071790806175495759)))));
                var_16 ^= (arr_3 [i_1 - 2] [10] [i_1 - 1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_17 = var_9;

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (min(((1940671120 ? 227 : -28)), 1886190657));
                        arr_22 [i_3] [i_5 - 1] [i_4] [i_2] = ((~(((-4 ^ 28546) ? (var_8 ^ 8367397147498813463) : (arr_6 [i_2] [i_2])))));

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            var_19 = ((!(((~(-85 | 157))))));
                            var_20 ^= 5462985932117000691;
                            var_21 *= (((((((arr_23 [i_2] [i_3 - 1] [i_4] [1] [i_6]) >= 85)))) ? (min((min(8511251953256601236, var_4)), (((var_0 ? 196 : 699507858905912965))))) : var_10));
                            var_22 = -8367397147498813463;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 += (((arr_4 [i_5] [3]) ? (((((var_7 ? var_2 : var_0)) - 37173))) : (max((arr_4 [i_3 + 1] [i_3 - 1]), 2726912987))));
                            arr_27 [i_3] [i_3] [i_4] [15] [i_7] = (max(-var_2, (arr_15 [i_3 + 1] [i_5 - 1] [i_5 + 4])));
                            var_24 = (min(var_24, (((var_3 ? -14508 : (min((!17489), (~var_0))))))));
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_2] [i_3 + 1] [4] [2] [10] |= ((((!((!(arr_29 [16]))))) ? ((-((3 ? (arr_30 [4] [i_8 + 4] [i_4] [i_5] [i_8] [4]) : var_7)))) : ((max(2726912982, 0)))));
                            arr_32 [0] &= (arr_20 [i_2] [i_2] [i_2] [i_2] [3] [3]);
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            var_25 = ((-var_10 & (((((arr_21 [i_3 - 1] [i_3 - 1] [13] [i_3 - 1]) <= (arr_21 [i_3 - 1] [i_5 + 2] [i_5] [i_9 - 2])))))));
                            var_26 = -1875;
                            var_27 ^= var_2;
                            arr_35 [i_3] [i_4] [6] = (max((((arr_17 [i_3 + 1] [i_5 + 3] [i_9 + 3] [i_3]) ? (6387 < 82) : (min((arr_14 [i_4] [i_9 + 2]), (arr_34 [i_2] [i_3 + 1] [12] [i_5 - 1] [12]))))), ((max(var_0, (max((arr_17 [i_3] [i_5] [4] [i_3]), var_1)))))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (-76 ? -6734641400192409148 : 1568054313);
    #pragma endscop
}
