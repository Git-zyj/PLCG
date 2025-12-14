/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [0] [0] [7] = (arr_0 [0] [i_1]);
                arr_6 [i_0] [i_0] = (((arr_1 [5]) ? ((((82 | var_3) ? ((min(var_7, (arr_3 [i_0])))) : (~var_9)))) : (max((max((arr_4 [i_0] [i_1]), (arr_1 [i_0]))), (((var_3 + (arr_3 [i_0]))))))));
                arr_7 [i_0] [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_18 = ((var_10 ^ var_10) ? (((min(-124, 188)))) : (min((((68 >> (11880553319322055873 - 11880553319322055864)))), var_12)));
    var_19 = var_3;
    #pragma endscop
}
