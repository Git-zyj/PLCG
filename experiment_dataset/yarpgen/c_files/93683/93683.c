/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((min(((var_5 ? var_10 : var_3)), (((8937671562575775155 ? 4294967295 : -8937671562575775166)))))) ? var_3 : 4294967272)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((((max(0, (arr_1 [i_0])))) ? ((6338 ? var_9 : (arr_1 [i_0]))) : (var_12 - 73))) >> (var_9 - 343796175)));
                arr_5 [i_0] [i_0] [i_0] = (-107 >= 571971333);
                arr_6 [i_0] [i_1] [i_0] = (max(((-(arr_3 [i_0]))), ((min((arr_3 [i_1]), var_12)))));
            }
        }
    }
    var_16 = (var_3 ? (var_14 - var_9) : var_1);
    var_17 ^= -29524;
    #pragma endscop
}
