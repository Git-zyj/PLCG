/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56847
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
    var_20 = ((/* implicit */long long int) ((short) -1906453108));
    var_21 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((_Bool) max((arr_0 [i_0] [(_Bool)1]), (arr_0 [11ULL] [i_0]))));
        var_23 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) -1764342490))))));
        var_24 ^= (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned char)75)))))) == (((/* implicit */int) arr_2 [i_0])));
        var_25 = ((/* implicit */long long int) 0ULL);
        var_26 = ((/* implicit */signed char) ((_Bool) min((arr_0 [5] [i_0]), (arr_0 [i_0] [i_0]))));
    }
    var_27 -= ((/* implicit */int) (unsigned char)75);
}
