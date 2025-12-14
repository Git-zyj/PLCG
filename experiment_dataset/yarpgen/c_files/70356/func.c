/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70356
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) ? (var_13) : (max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_4))))))));
    var_15 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_5))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_2 [i_0]))))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-6560))))), (var_7)))));
                var_16 ^= ((/* implicit */long long int) min((((/* implicit */int) var_4)), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [(unsigned char)2])) : (((/* implicit */int) arr_2 [i_0]))))))));
            }
        } 
    } 
}
