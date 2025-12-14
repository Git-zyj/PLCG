/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 + ((2047 ? 4294967276 : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((max((min((arr_2 [i_0] [i_0]), 63489)), 3284199746))) << (((min((arr_4 [i_1] [3] [i_1 + 3]), (min(var_17, var_19)))) - 2602094589))));
                var_21 |= (min(((var_6 << (((arr_2 [i_1 - 1] [1]) + 23323)))), (((arr_2 [i_1 - 1] [0]) >> (((arr_0 [i_1 - 1] [1]) - 1968038403))))));
                arr_6 [4] [i_0] = ((((max((arr_4 [i_0] [i_1 + 3] [0]), (arr_4 [i_0] [i_1 + 3] [i_0])))) * (((3284199724 ? 65 : -1780545839334863445)))));
            }
        }
    }
    var_22 |= (~63488);
    #pragma endscop
}
