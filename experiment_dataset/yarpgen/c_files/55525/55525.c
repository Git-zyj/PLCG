/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 13442449958625065137;
    var_12 = ((13442449958625065128 << (var_0 - 498)));
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [12] = ((7346 ^ (max((max(var_8, (arr_0 [6] [12]))), (((arr_3 [0]) ? var_0 : 58181))))));
                arr_7 [1] [2] = ((13442449958625065137 ? var_10 : (min(5004294115084486468, (((73 << (-99 + 108))))))));
                arr_8 [13] [13] [4] = min((((!(~3066562348)))), var_2);
            }
        }
    }
    #pragma endscop
}
