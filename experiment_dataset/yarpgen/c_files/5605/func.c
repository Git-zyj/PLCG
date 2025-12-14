/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5605
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
    var_19 |= ((short) var_7);
    var_20 = ((/* implicit */short) (~(min((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_0 - 2] = ((short) max((arr_4 [i_0] [i_0 + 2]), ((short)32767)));
                    arr_8 [i_0 + 1] [i_1] [i_1] [i_2] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-14776)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_2]))) : (((/* implicit */int) max(((short)-17726), (var_7))))));
                }
                arr_9 [i_1] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-20448)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((short) (short)-20450)))));
            }
        } 
    } 
}
