/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (arr_0 [6]);
                arr_5 [1] [i_1] = 18446744073709551615;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] |= ((4294965248 ? 6148313887841405399 : 6148313887841405399));
                var_13 ^= (arr_6 [i_2]);
            }
        }
    }
    #pragma endscop
}
