/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = min((arr_4 [i_0] [i_0 + 2] [i_1]), ((((64 * -14539) >= ((min(56, 199)))))));
                var_14 = 64;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                arr_10 [i_3 - 2] = ((-((max((((53 >= (arr_0 [i_2])))), (max(1, (arr_9 [i_3 - 1]))))))));
                arr_11 [i_2 + 2] [i_3 - 2] [i_2 + 2] = (var_10 * 202);
                var_15 &= ((((min((((arr_2 [i_3]) - 224)), 1834592391))) - (-15671 + 33554416)));
                arr_12 [i_2 - 1] [i_3 - 2] = var_8;
                arr_13 [i_2] [i_3] = var_9;
            }
        }
    }
    var_16 = ((((((~4261412888) ^ ((-1834592404 ? 3561767528 : var_9))))) ? 96 : (((904955110 ? -1247908643 : 0)))));
    #pragma endscop
}
