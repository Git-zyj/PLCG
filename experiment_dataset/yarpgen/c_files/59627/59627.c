/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [2] [18] &= -16146;
        arr_4 [i_0] = (16146 <= -16148);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (min(((4294967272 * ((33 ? 16146 : 1404676941)))), 16150));
        var_19 = -16158;
        var_20 = (max(var_20, (67 > 43571)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_13 [i_3] = (min(-23514, 1));
                arr_14 [i_3] [i_3] [1] = (min(4096, 4294967278));
                arr_15 [i_3] [i_3] = (max(8047, 2158100729));
                arr_16 [i_3] [i_2] [i_3] = 4294967272;
            }
        }
    }
    #pragma endscop
}
