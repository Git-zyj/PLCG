/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((8943572282394935583 ? 1 : var_2))) != 4204557002))) & 1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = 1;
        arr_2 [i_0] = 1;
        var_17 = var_11;
        var_18 = (~var_8);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (max((min((-1111466872 && 5638966529139523235), ((12807777544570028382 ? 251658240 : 4204557002)))), (((!(1 < 3145954100))))));
        var_19 = ((+(max((arr_3 [i_1]), ((-(arr_3 [i_1])))))));
        var_20 *= (((max(4043309042, 1)) % 1));
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = 1;
        var_21 = (((3135088875883357572 == 90410292) >> ((min((!1), 1)))));
    }
    #pragma endscop
}
