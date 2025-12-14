/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75525
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((signed char) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) (-(4261172067281652437ULL))))))))));
    var_17 = ((var_6) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (var_7))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (+((+(max((((/* implicit */long long int) arr_0 [i_0])), (-5756339375910929067LL)))))));
        var_19 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_0 [i_0])))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (-524989143)))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1])), (-596541850)))) ? ((-((-(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) arr_2 [i_1])))))))));
        var_21 = ((/* implicit */unsigned int) min(((~(3812684884511390453LL))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)122))))) ? (((-2109627392587732411LL) ^ (((/* implicit */long long int) -1472908010)))) : (((/* implicit */long long int) ((-1005925557) * (((/* implicit */int) (_Bool)1)))))))));
    }
}
