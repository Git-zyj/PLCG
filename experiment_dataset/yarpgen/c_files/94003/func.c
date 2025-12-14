/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94003
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
    var_20 = ((/* implicit */signed char) (+(((var_4) ? ((-(274875809792ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)59))))) | (max((8426787004242109213ULL), (((/* implicit */unsigned long long int) var_10)))))), (((((var_9) ? (((/* implicit */unsigned long long int) 4276216325941686829LL)) : (arr_1 [i_0]))) >> (((((/* implicit */int) var_16)) - (62887)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)248))))) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (var_5)))))) : (max((((/* implicit */unsigned long long int) 58519684)), (10813013698736073740ULL)))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_14)))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned int) var_0))))))))));
        arr_6 [i_1] = ((/* implicit */int) (!(((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_19)), (274875809810ULL))))))));
        var_23 = ((/* implicit */unsigned short) (-(((long long int) arr_0 [i_1]))));
    }
}
