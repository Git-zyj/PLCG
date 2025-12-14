/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75137
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
    for (int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_12 = max((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 3] [i_0 - 3]));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_1)), (arr_1 [i_0])))))) < (var_7)));
        var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_1 [i_0 - 4])) < (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_1 [i_0])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0 - 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5073745677048821941LL)) ? (arr_0 [i_0 - 2] [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */long long int) arr_1 [i_0])) / (5073745677048821925LL))) : ((+(arr_0 [i_0] [i_0])))))));
    }
    var_15 = ((((/* implicit */int) ((1190469805840294961LL) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))) > ((~(((/* implicit */int) var_8)))));
    var_16 = ((/* implicit */unsigned int) var_4);
}
