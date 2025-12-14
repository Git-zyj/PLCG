/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75191
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
    var_17 = var_10;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */_Bool) arr_2 [(signed char)6])) || (((/* implicit */_Bool) arr_2 [i_0])))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned short) (signed char)-7));
        arr_5 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)24)), (((unsigned long long int) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        arr_6 [i_0] = min((((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))), ((!(((/* implicit */_Bool) (signed char)-34))))))), (min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)-25))))))));
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned long long int) var_16)))))), ((unsigned char)255)));
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_1)))));
}
