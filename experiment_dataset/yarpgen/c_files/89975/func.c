/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89975
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0 - 2] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_11)))), ((-(((/* implicit */int) (unsigned char)228)))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (unsigned char)19))));
        var_15 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (signed char)-74)) ? (-9223372036854775804LL) : (((/* implicit */long long int) arr_0 [i_0])))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
        var_16 = max((((((/* implicit */_Bool) var_8)) ? (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))))) : (((/* implicit */unsigned long long int) ((-751657524) & (((/* implicit */int) (unsigned char)25))))))), (var_9));
    }
    var_17 = ((/* implicit */int) var_6);
    var_18 = ((/* implicit */unsigned char) ((var_10) + (((/* implicit */unsigned long long int) ((min((524287), (-524288))) + (((/* implicit */int) (unsigned char)21)))))));
}
