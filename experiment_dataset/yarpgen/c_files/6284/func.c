/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6284
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 4095U))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)16])) : (((/* implicit */int) arr_3 [i_0])))), ((+(((/* implicit */int) (signed char)46)))))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-14443))) ^ (-1LL))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_10))))))))))));
                var_20 -= ((/* implicit */short) arr_4 [i_0 - 2] [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1])))) : (((/* implicit */int) ((short) (~(((/* implicit */int) arr_2 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? ((((!(((/* implicit */_Bool) var_7)))) ? ((~(5303412788414999026ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))));
}
