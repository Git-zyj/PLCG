/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96483
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_13)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [(unsigned short)5] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -70460443)) ^ (9561722002548027300ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))) != (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) var_8)), (var_5))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_7) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        arr_6 [i_0] [i_0] |= ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - ((-(((/* implicit */int) (short)-22206))))));
    }
    var_18 = 8885022071161524315ULL;
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((var_12) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_8))))))) ? (((/* implicit */int) min((min(((unsigned short)38165), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) ((short) -3319311133888501148LL)))))) : (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */int) (_Bool)1)), (var_7))) : (((/* implicit */int) var_10)))))))));
}
