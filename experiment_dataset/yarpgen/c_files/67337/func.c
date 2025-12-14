/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67337
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
    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_10)), (var_9)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : ((((_Bool)0) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (13932607646087433420ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_6))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)49152)))))), (max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))), (((var_9) % (var_11))))))))));
        var_14 *= ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) (_Bool)1))))))) != ((+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
        var_15 = ((/* implicit */_Bool) var_9);
        var_16 *= ((/* implicit */unsigned short) (((~(var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_2)))))))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) | (var_0)))), (max((var_11), (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-115), (var_6))))) & (var_5))) : (((/* implicit */unsigned long long int) var_0))));
}
