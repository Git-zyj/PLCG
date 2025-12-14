/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55206
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
    var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (unsigned short)11019)), (var_0))))))));
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (_Bool)1);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_1 [12LL]))))))));
        arr_2 [i_0] = ((/* implicit */signed char) min((var_12), ((((_Bool)1) ? (arr_0 [(unsigned short)11] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11019)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned short)54529)) : (((/* implicit */int) (unsigned short)11006))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) != (arr_1 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_19 = (((+(arr_4 [i_1] [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) (((~(var_10))) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11014)))))) ? (arr_4 [i_1] [(unsigned short)9]) : (((/* implicit */long long int) -171973311))))) || (((/* implicit */_Bool) arr_3 [i_1]))));
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) ((short) arr_4 [i_1] [i_1])))));
    }
}
