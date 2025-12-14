/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(var_18, 1));
                arr_7 [i_0 + 1] [i_1] [i_1] = (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
            }
        }
    }
    var_21 = var_11;
    var_22 = (((!699735274931988997) != ((-(max(205334007, 1))))));
    #pragma endscop
}
