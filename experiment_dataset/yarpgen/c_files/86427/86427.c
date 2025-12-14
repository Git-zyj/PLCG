/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_9;
    var_18 ^= (max(var_7, ((((max(829052172, var_12)) < (((65535 ? 206 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] = ((((((((-1 ? 206 : 0))) ? 206 : (arr_1 [i_0 - 1])))) && 49));
                arr_6 [i_0] = (max(((((50 < (-2147483647 - 1))) ? (arr_2 [i_0]) : ((16655124653846568384 ? 2708117613 : 205)))), ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
