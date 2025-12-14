/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77026
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
    var_14 = ((/* implicit */_Bool) var_11);
    var_15 = ((/* implicit */unsigned long long int) var_2);
    var_16 = var_7;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+(((int) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1355037242U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */short) max((arr_1 [i_0]), ((unsigned char)145)));
        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), (var_13)));
    }
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_13)), ((-(((((/* implicit */_Bool) 1065344168125457508ULL)) ? (((/* implicit */long long int) 2939930062U)) : (var_11)))))));
}
