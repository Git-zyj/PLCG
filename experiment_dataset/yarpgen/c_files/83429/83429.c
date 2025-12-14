/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (!36675);
    var_20 = ((var_12 - (max((((63 >> (2634401248 - 2634401232)))), 3720716713))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_21 = ((((((arr_1 [i_0 + 2]) ^ (arr_1 [i_0 - 1])))) ? ((63 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2]))) : (0 > var_16)));
        arr_3 [i_0 - 2] [i_0] = (min(((-193 ? 740168845 : -16384)), ((((arr_2 [i_0] [i_0 + 1]) == 689063405)))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_6 [14] |= ((((min(((3554798451 ? 193 : 3554798451)), (max(740168844, 1))))) ? ((min(((689063405 ? var_6 : (arr_5 [i_1]))), 2214696290))) : (max((((740168844 ? (arr_4 [i_1]) : (arr_4 [i_1])))), (min(-3716142429336726282, 1))))));
        var_22 = ((((arr_4 [i_1 + 1]) >= 740168845)));
    }
    var_23 *= ((!(min((!65535), (var_9 && 740168845)))));
    #pragma endscop
}
