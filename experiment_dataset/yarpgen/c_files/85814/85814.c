/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((-33 + 2147483647) << (16 - 16))))));
    var_14 = (((((var_12 / 7058744877691064915) * (var_3 % 11387999196018486701))) % (((((1 >> 1) != (1 | 1)))))));
    var_15 = (((((var_5 != var_11) >> (((var_8 * 1) - 82)))) | (63 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_1] [1] = ((((((1 * 82) >= ((((arr_3 [i_0]) > var_11))))))) + ((105 % (1 & 10404491412585991873))));
                var_16 = (max(var_16, (((((((((((arr_5 [7]) >= (-127 - 1))))) <= (((arr_3 [i_1]) ^ 15720571008698126522))))) >> (((var_10 % 1) << (((((arr_5 [i_0]) % var_9)) - 6587264113920654320)))))))));
            }
        }
    }
    #pragma endscop
}
