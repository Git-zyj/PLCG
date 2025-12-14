/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83049
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42277)) | (min((614933154), (((/* implicit */int) ((unsigned char) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_2)) > (min((arr_1 [i_0 + 1]), (arr_1 [i_0])))))), (((((/* implicit */_Bool) max((arr_0 [(unsigned char)1]), (arr_0 [14LL])))) ? (((/* implicit */int) ((unsigned char) 8378768999645364053LL))) : (min((var_3), (((/* implicit */int) var_12))))))));
        var_16 = ((/* implicit */long long int) -2035802516);
    }
}
