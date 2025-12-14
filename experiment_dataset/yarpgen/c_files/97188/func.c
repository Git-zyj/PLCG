/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97188
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
    var_15 = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_8)) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_10))))) || ((!(((/* implicit */_Bool) var_0)))))))) : (var_6)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_4 [6LL] = ((/* implicit */long long int) max((arr_3 [i_0]), (((unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_1 [(_Bool)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [4]))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_3 [i_0 - 1]));
        arr_6 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-4288861377750204473LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)105))))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_3 [(signed char)7])) < (((/* implicit */int) (short)-1107))))))));
    }
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((long long int) (short)-18873))))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
}
