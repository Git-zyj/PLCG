/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84764
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
    var_17 -= ((/* implicit */unsigned short) min((4095U), (((/* implicit */unsigned int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = (!(((-1LL) == (-1LL))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_12))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) 6LL);
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] [(unsigned short)8] = ((/* implicit */signed char) (((-(((/* implicit */int) var_9)))) & ((~(((((/* implicit */int) var_7)) * (((/* implicit */int) var_10))))))));
        arr_10 [i_2] [i_2] = ((_Bool) ((((/* implicit */int) ((_Bool) (_Bool)0))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) max(((unsigned char)216), (((/* implicit */unsigned char) (_Bool)1))))))));
    }
}
