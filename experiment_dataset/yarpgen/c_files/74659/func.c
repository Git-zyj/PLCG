/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74659
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
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(-17))) : (((/* implicit */int) var_2))));
    var_12 = max((((signed char) var_4)), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)46614))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_7))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)21] [i_0]))))))));
                    var_13 = ((/* implicit */short) arr_1 [i_1]);
                }
            } 
        } 
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28448)) ? (((/* implicit */int) (short)26449)) : (((((/* implicit */int) var_1)) << (((((1192413026U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))) - (1192412794U)))))));
    }
    var_15 += ((/* implicit */unsigned int) max(((+(((((/* implicit */int) var_5)) - (((/* implicit */int) var_4)))))), (((/* implicit */int) var_2))));
}
