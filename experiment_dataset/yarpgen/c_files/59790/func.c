/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59790
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
    var_11 = ((/* implicit */short) var_2);
    var_12 = ((/* implicit */short) max((var_12), (var_4)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) ((int) -1479532301202981716LL))) ? (((/* implicit */long long int) ((-1920448863) / (((/* implicit */int) (short)-16872))))) : (((((/* implicit */_Bool) (short)1758)) ? (-1479532301202981716LL) : (var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) (short)1758))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5281087552794377338ULL))))) : ((~(((/* implicit */int) (short)-1759)))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */int) (short)-1759)), (arr_2 [i_0]))) & (((/* implicit */int) ((short) (short)-1766)))))) & (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_15 -= ((/* implicit */short) ((((/* implicit */int) (short)-5947)) != (((/* implicit */int) (short)1758))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1758)) ? (-932976219449195600LL) : (var_3)))) ? (((/* implicit */unsigned long long int) min((8191U), (((/* implicit */unsigned int) arr_5 [i_1]))))) : ((~(11350001364894557722ULL)))));
        var_17 = ((/* implicit */short) ((arr_4 [i_1]) & (((/* implicit */int) max((arr_5 [i_1]), ((short)-4837))))));
    }
}
