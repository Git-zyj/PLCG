/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [4] |= ((((!(arr_2 [i_0 - 1] [i_0 - 1]))) && ((min((arr_1 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1]))))));
                arr_8 [i_0] [4] = (((((~(((arr_6 [13] [13]) ? (arr_0 [12]) : var_8))))) ? ((min(((105413875513618189 ? 0 : 3)), 18))) : (arr_1 [9] [i_0])));
                arr_9 [1] [6] = (((14 * 18) * (arr_0 [14])));
                arr_10 [0] = (min(((var_11 ? (arr_4 [i_0] [i_0 + 2]) : (arr_0 [8]))), 12));
            }
        }
    }
    #pragma endscop
}
