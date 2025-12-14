/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68451
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
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_18)) | ((~(0)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */short) max((((((arr_5 [0] [i_0] [8] [i_2 - 3]) & (-17))) ^ (((/* implicit */int) ((((/* implicit */_Bool) -1143063927)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_2]))))))), (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 4] [i_2] [(short)6])) ? (((/* implicit */int) ((-2084159974) < (-1498286032)))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_0 [(short)9]) : (((/* implicit */int) arr_3 [i_2]))))))));
                    arr_7 [i_1] = ((/* implicit */short) arr_6 [i_1]);
                }
            } 
        } 
    } 
}
