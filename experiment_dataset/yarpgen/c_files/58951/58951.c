/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((-(max(142, 1769633442))));
                var_19 = ((-(-32767 - 1)));
            }
        }
    }
    var_20 = (max(12704779160681715457, 13183946232644504991));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_10 [i_3] = ((52116 <= (-2147483647 - 1)));
                arr_11 [i_2] [6] = -1;
            }
        }
    }
    #pragma endscop
}
