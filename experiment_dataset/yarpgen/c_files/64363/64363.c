/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, (((((var_11 ? 642695304 : var_6))) ? var_11 : var_17))));
    var_19 = (var_3 ? (((((max(var_12, var_4))) ? (642695304 <= var_3) : 1082361561))) : (min((((4380866641920 ? var_16 : 3552088744))), ((var_3 ? var_8 : 927034711064513026)))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 2147483647;
        var_20 = (min(var_20, ((((max((~18446739692842909684), 4235938198674222670)) >> (min(((((arr_1 [i_0 + 1] [i_0 - 1]) ? var_3 : 15644))), (((-9223372036854775807 - 1) ? 1 : 9143781866945794362)))))))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_21 = ((-((min((!27331), (13328810562713923635 == -1))))));
        arr_7 [i_1] = (max(4622272778676549492, 451074750));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_22 = (max(var_22, var_16));
        arr_10 [i_2] [i_2] = -var_15;
    }
    #pragma endscop
}
