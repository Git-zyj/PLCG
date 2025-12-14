/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76511
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_1 - 1] [i_0] = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)2416)) : (-346625094))) | (((/* implicit */int) ((short) var_6)))))));
                arr_7 [i_0] [i_1] = ((int) min((arr_1 [i_1 + 1]), (var_3)));
                arr_8 [i_1] = ((/* implicit */short) -1381563126);
                arr_9 [i_0] = var_1;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)-20938)) : (-1008027544)))) ? (max((max((-1), (((/* implicit */int) (short)31682)))), (((/* implicit */int) var_8)))) : (-1575729591)));
        arr_13 [(short)5] [(short)6] = ((int) (+(((/* implicit */int) (short)-31684))));
        arr_14 [i_2] [i_2] = arr_5 [i_2] [(short)21] [i_2];
    }
}
