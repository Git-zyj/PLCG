/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95397
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
    var_16 = ((/* implicit */int) (unsigned char)254);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 *= ((/* implicit */signed char) max((((/* implicit */short) var_10)), ((short)-9219)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(var_14)))))) ? ((~(((/* implicit */int) ((unsigned char) 18446744073709551615ULL))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) var_8))) > (((/* implicit */int) ((unsigned short) 196608U))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) 1373583198U))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)4096)))));
    }
    for (int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        arr_9 [i_1] [i_1] = max((((long long int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) var_3)));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) 17773054470221797380ULL));
    }
}
