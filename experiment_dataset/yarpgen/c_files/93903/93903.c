/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = var_16;
                    var_22 = (62621 ^ var_1);
                    var_23 = (min(var_23, (((((8389479155289802404 >> (((min((arr_6 [i_0] [9] [i_1] [10]), var_6)) - 2871171815))))) ? (max((min(65161, 8389479155289802404)), ((min(379, (arr_8 [i_0] [i_0] [i_0] [10])))))) : (((((((var_4 ? 32197 : 65534))) < -var_3))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((((min((max(var_17, -1542599686)), (8389479155289802404 != 99)))) ? (((-683109119 / var_5) ? (arr_7 [i_0] [i_0] [2] [2]) : (var_12 * var_5))) : var_18));
                }
            }
        }
    }
    var_24 = (var_18 <= 29209);
    var_25 = (max(var_25, ((max(var_11, (max(-var_1, var_13)))))));
    #pragma endscop
}
