/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_0] [10] = ((((min((arr_4 [6] [i_1 + 1]), 5761708328498246336))) ? (arr_4 [i_2] [2]) : (min(((5761708328498246312 ? 53811 : 2147483646)), (((arr_5 [i_0] [i_0] [i_0]) % (arr_5 [i_0] [6] [i_2])))))));
                    arr_8 [i_2] [22] [0] [i_0] = ((((((arr_6 [i_1 + 1]) ? var_11 : ((5761708328498246312 - (arr_4 [i_2] [i_1 + 1])))))) ? 12685035745211305280 : (((min((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]), 142))))));
                    arr_9 [i_0] [i_0] [12] [i_2] = (min((((!(arr_2 [i_0])))), 35184372088831));
                }
            }
        }
    }
    #pragma endscop
}
