/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65500
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
    var_11 = ((/* implicit */int) ((short) (unsigned char)29));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (!(arr_1 [i_0])));
        var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2076094824U)) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((arr_2 [i_0] [i_0]) & (2076094824U)))))));
        arr_4 [i_0] = (((~(var_8))) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) (unsigned char)233))))))));
        var_14 = ((/* implicit */_Bool) (~(((arr_1 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (min((-1444246833912042554LL), (((/* implicit */long long int) arr_1 [8ULL]))))))));
        var_15 = ((/* implicit */long long int) (((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) ((signed char) 9223372036586340352ULL))))) * ((+(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)2)) < (((/* implicit */int) ((((var_7) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5)))) > ((-(((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (9223372036586340352ULL)))));
    var_18 = ((/* implicit */signed char) ((short) 2022567295));
}
