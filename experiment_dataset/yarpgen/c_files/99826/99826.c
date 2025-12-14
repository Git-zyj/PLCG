/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_6;
    var_17 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = -2262164909;
                var_18 ^= (max(((!(arr_0 [i_1] [i_1]))), ((!(arr_0 [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_19 = (((max(((((arr_12 [i_2] [i_3] [i_3]) && 9))), (((arr_12 [i_2] [i_3] [i_3]) - (arr_11 [i_2 - 1] [17])))))) ? ((245130187 ? 275559632334120346 : 255)) : (((((1079984343 ? 248 : 25))) ? var_8 : 24)));
                arr_13 [i_2] [i_2] = arr_9 [i_2];
                arr_14 [i_2] = ((19 % (((arr_8 [i_2]) ? 8 : (arr_8 [i_2])))));
                arr_15 [i_2] = (((((var_8 - (arr_10 [i_2 - 1])))) ? (((arr_12 [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? 99 : var_0)) : (((arr_10 [i_2 + 1]) + (arr_8 [i_2])))));
            }
        }
    }
    #pragma endscop
}
