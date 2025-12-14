/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62475
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) -5702584551930560581LL)) && (((/* implicit */_Bool) (~(0LL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */int) max((var_9), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (arr_0 [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                    var_11 ^= ((/* implicit */int) min((min((249971983493877679LL), (((/* implicit */long long int) 0)))), (((/* implicit */long long int) (signed char)0))));
                }
            } 
        } 
        var_12 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) % (((((var_0) * (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])))) / (arr_5 [i_0] [i_0])))));
        var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) < (arr_3 [i_0] [i_0] [i_0]))))) + (min((2199023255536LL), (-2199023255517LL)))))));
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 2199023255536LL))));
    var_15 = ((-8077160275702865311LL) % (max((((((/* implicit */_Bool) 2199023255517LL)) ? (var_7) : (var_8))), (((((/* implicit */_Bool) -2199023255517LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))));
}
