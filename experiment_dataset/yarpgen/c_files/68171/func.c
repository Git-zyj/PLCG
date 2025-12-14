/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68171
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (0)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_9);
        var_13 = max((var_1), (arr_0 [(unsigned short)13]));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        arr_4 [i_0] = (+(min((((/* implicit */unsigned int) -13)), (2069385021U))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(min(((~(-1))), (((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 2]))))));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 2] [i_1 - 2] [i_0 - 1])) ? (var_6) : (arr_10 [i_0 - 1]))), (((((/* implicit */_Bool) (short)19960)) ? (var_6) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-19961)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)36720)) - (36699))))))))));
                }
            } 
        } 
    }
}
