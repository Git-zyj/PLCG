/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94167
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */signed char) var_12))))) && ((!(((/* implicit */_Bool) (short)16)))))))));
    var_16 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) (unsigned short)38796)) ? (4192256) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), ((-(((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)2178))))))));
                var_18 = ((/* implicit */signed char) var_7);
                var_19 += ((unsigned short) (((!(((/* implicit */_Bool) arr_1 [7U] [(unsigned short)19])))) && (((((/* implicit */_Bool) 864691128455135232ULL)) && (((/* implicit */_Bool) arr_2 [i_1]))))));
            }
        } 
    } 
    var_20 = (-(((/* implicit */int) var_8)));
}
