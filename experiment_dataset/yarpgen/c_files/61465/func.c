/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61465
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)0) ? (var_2) : (((/* implicit */int) var_9))))), (min((var_15), (((/* implicit */unsigned int) var_14))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (short)32719)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23221))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55735)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32721))) : (3187739927U)))))) : (((/* implicit */unsigned long long int) var_15))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32729))));
    var_20 = ((/* implicit */unsigned int) (~(max((((((/* implicit */int) (unsigned short)65517)) - (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            arr_7 [i_1 - 3] = ((/* implicit */unsigned short) var_5);
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_16))));
        }
        var_21 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) var_6))));
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)4])) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
        arr_9 [i_0] [4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))));
    }
}
