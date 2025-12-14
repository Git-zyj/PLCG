/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= min(((~(arr_3 [i_1 + 1] [i_1 - 1]))), (arr_3 [i_1 + 1] [i_1 - 1]));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_12 *= max(((var_5 ? 4290772992 : ((((arr_1 [i_0] [i_2]) ? var_11 : (arr_7 [0])))))), ((max(((32767 ? var_10 : -35)), var_4))));
                    arr_8 [i_2] [i_2] = (261120 ? 0 : (((arr_3 [i_1] [i_2]) ? 823478692 : ((((arr_0 [i_2 + 2]) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_0] [i_2])))))));
                }
            }
        }
    }
    var_13 = (var_7 << (var_3 + 69));
    var_14 = (393216 | 1);
    #pragma endscop
}
