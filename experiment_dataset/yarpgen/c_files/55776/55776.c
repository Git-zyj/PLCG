/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((46 ? 255 : ((max(18, 4278592900)))));
    var_19 = ((-7401583672186074116 ? 18446744073709551615 : 2969197160));
    var_20 = (max(var_20, (((((((((var_9 ? var_12 : var_9))) ? var_1 : var_6))) + var_14)))));
    var_21 = ((((max(-1, (((var_4 ? 111 : var_10)))))) ? (~var_7) : (((2408825304 / -6288417194936819474) ? 15771806597828970453 : (((var_15 ? var_3 : 1585764564)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max(var_13, (arr_1 [0])))) ? ((1302988397 ? 243 : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0])));
        arr_3 [i_0] = 18;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_22 = (min(var_22, (max(-2738, ((10160776714444435148 ? (max(17641, (arr_5 [4] [i_1]))) : 0))))));
        arr_8 [12] = 1;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_23 ^= (max((((var_12 * (arr_9 [i_2])))), ((((arr_10 [i_2 - 1] [i_2]) < ((2920680843388718765 >> (var_14 - 8238892161640296020))))))));
        var_24 -= 140;
        var_25 = 17636;
    }
    #pragma endscop
}
