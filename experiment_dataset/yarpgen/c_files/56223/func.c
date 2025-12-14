/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56223
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
    var_17 &= ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_3))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [(unsigned char)4])) && (((/* implicit */_Bool) arr_0 [i_0] [0U])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 - 3] [i_0]));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)55769)) : (((/* implicit */int) (unsigned short)55769))));
            arr_6 [i_0] = (~(arr_4 [i_0] [i_0] [i_0]));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned short)37928))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(-5962548669806795195LL)))));
        }
    }
}
