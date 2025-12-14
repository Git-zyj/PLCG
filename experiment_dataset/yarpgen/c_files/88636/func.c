/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88636
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [(signed char)15] [i_0] = ((/* implicit */signed char) ((unsigned char) (short)-32447));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [21]))) - (max((((/* implicit */long long int) max((arr_1 [(_Bool)1]), (arr_1 [i_0])))), (max((((/* implicit */long long int) var_13)), (arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (0))))))));
        arr_5 [i_0] [(signed char)12] = min(((~(((((/* implicit */long long int) var_5)) | (var_11))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_11))));
        arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-96))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    var_15 = ((/* implicit */long long int) var_13);
}
