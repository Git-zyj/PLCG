/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78446
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
    var_13 = ((/* implicit */short) ((3684714680U) << (((2997029198173283716ULL) - (2997029198173283716ULL)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) var_5)) ? ((~(10401420513334835432ULL))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (var_8))))) : (var_4)));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-17750))))) ? (9622476584698980361ULL) : (((/* implicit */unsigned long long int) ((int) var_9)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) arr_7 [i_1] [i_2]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                    arr_10 [6U] [i_1] [i_2] [6U] = ((unsigned char) (unsigned char)187);
                }
            } 
        } 
    } 
}
