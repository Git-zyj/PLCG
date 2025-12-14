/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -667032611;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 ^= (max(var_8, ((((min(234, (arr_3 [i_1] [i_1])))) ? 217 : (2147483647 % 234)))));
                arr_6 [i_0] = (max((((var_7 && (46 && 233)))), 17293822569102704640));
                arr_7 [12] [i_1] |= (min(-27780, 154));
            }
        }
    }
    var_17 = 17224591999894034365;
    #pragma endscop
}
