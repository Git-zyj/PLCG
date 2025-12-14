/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((~((-8150 ? (arr_1 [i_0]) : 50517)))) != (arr_2 [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((min((~50517), 65535))))));
                            var_18 = (max(var_18, ((((((((max(15018, 50517))) && 26173))) | 15017)))));
                            var_19 = (min(var_19, ((((arr_2 [i_0] [i_2]) ? -50521 : (((arr_2 [i_0] [i_2]) ? var_10 : ((50518 ? 15017 : (arr_2 [i_2] [i_2]))))))))));
                            var_20 = (min(var_20, ((((arr_6 [i_0]) ? (arr_2 [i_0] [i_2]) : ((min(((15014 / (arr_7 [i_1] [i_1]))), 15017))))))));
                            var_21 = (max(var_21, (((-1 > (~144))))));
                        }
                    }
                }
                arr_11 [i_1] = (((max(var_1, ((max(262143, 202))))) == 15023));
                arr_12 [i_1] = ((36827 >> (50521 - 50501)));
            }
        }
    }
    var_22 = -var_8;
    var_23 = (((((((max(var_14, 20))) + 15019))) / 6117524898937515337));
    var_24 = ((50519 % (((min(15017, var_8)) % -var_13))));
    var_25 = (((28709 ^ 50518) ? (((42102 >> (((max(var_13, var_0)) - 11347660877734222114))))) : var_1));
    #pragma endscop
}
