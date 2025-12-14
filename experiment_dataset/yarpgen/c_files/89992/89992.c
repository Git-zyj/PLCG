/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 &= ((96 ? (!var_4) : (((!(arr_1 [i_1 - 1]))))));
                arr_8 [i_0] [i_0] [12] = (((549755781120 ? var_4 : 1)));
            }
        }
    }
    var_11 = (((!var_9) <= var_8));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_12 = ((+(min(((((arr_3 [i_2] [i_2]) | (arr_7 [i_2])))), (((arr_0 [6]) ? var_4 : var_9))))));
        arr_11 [i_2] [i_2] = (!((min((((arr_1 [i_2]) % (arr_10 [i_2]))), var_8))));
    }
    var_13 = var_0;
    #pragma endscop
}
