/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89930
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (137438953471LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (-5705018242857867675LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [(unsigned short)8]) : (((/* implicit */long long int) arr_1 [i_0])))))))))));
        arr_4 [10LL] = ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned short)14))))))));
        var_12 = ((/* implicit */signed char) max((var_12), (arr_0 [i_0] [i_0])));
    }
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_10))));
}
