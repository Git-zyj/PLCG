/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (0 && var_6);
    var_13 = (((max(0, var_5)) != var_8));
    var_14 = (4294967295 ^ 1171993946);

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((128 && 116) | var_9));
        arr_4 [i_0] = 1325139799;
        arr_5 [i_0] = var_9;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = (((((~3122973338) << (3122973338 - 3122973310))) ^ ((-1266251310 | (var_1 >= -1)))));
        var_16 = var_6;
        arr_10 [i_1 + 1] = ((-var_1 ? 7335692163666372642 : ((((128 < (var_5 && 8992601901003674906)))))));
    }
    #pragma endscop
}
