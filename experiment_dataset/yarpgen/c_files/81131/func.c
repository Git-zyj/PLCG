/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81131
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
    var_20 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1391627940))))) / (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_19)))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [(short)24])), (var_4)))) && (((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 1]), (((/* implicit */signed char) var_16)))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+((-(2047)))))) / (-3075963618809551273LL)));
        var_23 = ((/* implicit */signed char) -268435456);
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) var_8)), (max((((/* implicit */int) (!(((/* implicit */_Bool) 3991447257U))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-23320)) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)17]))))))));
    }
}
