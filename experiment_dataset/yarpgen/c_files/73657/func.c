/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73657
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_3 + 1]))))) && (((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)10] [i_2] [i_3 - 1]))));
                        arr_10 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                    }
                    var_11 = (signed char)21;
                    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49452)) ? (((/* implicit */int) (unsigned short)5035)) : (((/* implicit */int) (signed char)4))));
                    var_13 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */int) (unsigned short)21281)) ^ (max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_5)) ? (-1577776253) : (((/* implicit */int) var_4)))))));
    var_15 |= var_6;
    var_16 = ((/* implicit */signed char) max((var_16), (var_6)));
}
