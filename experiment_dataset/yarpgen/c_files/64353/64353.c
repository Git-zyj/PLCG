/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((arr_2 [i_1]) ? 255 : ((var_5 ? (((max((arr_3 [i_0 + 2] [i_1] [i_1]), (arr_3 [i_0] [i_1] [i_1]))))) : (arr_2 [i_1])))));
                arr_4 [i_1] [i_1] = (min((3281285796 / 5197046656943286290), (((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0 - 1]))))));
                arr_5 [i_0] [i_1] = ((-5197046656943286291 ? -1107813181 : -1158835177));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 = (max(var_13, ((((((-1158835190 ? 1158835189 : -5197046656943286291))) ? (((((arr_10 [i_3] [i_3] [i_2]) && (((1158835187 ? 1008 : (arr_9 [i_2])))))))) : ((-5197046656943286303 ? 1158835187 : (((arr_8 [i_2] [i_3]) % 237)))))))));
                arr_13 [i_3] = ((((((arr_11 [i_3] [i_3]) ? 4194303 : -1158835183)) << (5197046656943286320 - 5197046656943286316))));
            }
        }
    }
    var_14 = (1158835176 || 3505419936);
    #pragma endscop
}
