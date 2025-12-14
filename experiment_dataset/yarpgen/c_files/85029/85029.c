/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_6 | var_14) < (1536 ^ 0)))) << ((((0 << (var_0 + 8296088812168903652))) & (var_18 * var_12)))));
    var_20 *= (((((1542 != var_7) ^ (var_4 - var_12))) == ((((-119 / var_2) / (var_10 != var_1))))));
    var_21 = ((((var_4 < var_6) % (var_3 ^ var_0))) << (((var_5 == var_9) & (var_15 ^ 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((7 ^ 64000) ^ ((1551 | (arr_2 [i_1]))))) + (((((var_4 - var_15) || (63999 - var_1)))))));
                var_22 = (min(var_22, (((((-2057411513644584339 && var_18) == (var_11 / 255))) && ((((((arr_3 [10]) >> (var_17 + 2088848638778180518)))) && (((1 >> (((arr_1 [i_1]) + 1115911052923208222)))))))))));
                var_23 = (((((((37657 & (arr_0 [i_0]))) < (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((((arr_1 [i_1]) + 1115911052923208234)) - 12))))))) >> (((((((arr_1 [i_1]) && 8145255403900999723)))) & (18446744073709551615 % 1537)))));
            }
        }
    }
    #pragma endscop
}
