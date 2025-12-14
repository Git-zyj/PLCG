/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_10 = (((((min(254, 41)))) & ((215 ? -761363402629333282 : -118))));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = (((max(8184718775062236022, var_8))) ? ((min((arr_5 [i_2 + 2] [i_1] [i_1 - 1]), (arr_5 [i_2 + 2] [i_1] [i_1 + 1])))) : -123);
                }
                arr_8 [i_1] = ((var_0 ? 70368744177536 : (2984660391906741005 & 285978576338026496)));
                arr_9 [i_1] |= arr_1 [13];
            }
        }
    }
    var_11 = var_6;
    #pragma endscop
}
