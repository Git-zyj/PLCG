/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70537
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [15U])) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (max((251658240), (((/* implicit */int) (short)-16809)))) : (((/* implicit */int) ((unsigned short) 18014398509480960LL)))))) ? (((/* implicit */int) min((min((arr_0 [i_0]), ((_Bool)1))), (((_Bool) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))));
        var_20 ^= ((/* implicit */unsigned char) max((1440785136), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (1440785116)))) : (((/* implicit */int) (short)20439))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */int) arr_2 [(_Bool)1])) * (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) % (9223372036854775807LL))))))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_8))));
}
