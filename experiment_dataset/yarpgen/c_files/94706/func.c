/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94706
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
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26271)) - (((/* implicit */int) var_5))))) > (((var_3) / (((/* implicit */unsigned long long int) -374848531))))))), (var_1)));
    var_12 = ((unsigned short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((unsigned short) max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (unsigned char)195)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_13 -= arr_5 [i_1 - 1] [i_1 - 1];
        var_14 |= ((/* implicit */long long int) (unsigned char)61);
        arr_8 [i_1 - 1] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) 405943297497713929ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned long long int) var_5))));
        var_15 = ((/* implicit */signed char) arr_0 [i_1 + 1] [i_1]);
    }
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_2))));
}
