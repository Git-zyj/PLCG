/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83888
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
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_2 [i_0 - 3] [i_0])))) ? (max((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (137393063))), ((+(((/* implicit */int) var_13)))))) : ((+(((/* implicit */int) arr_0 [i_0 - 4]))))));
            var_21 = ((/* implicit */short) ((min((((((/* implicit */int) arr_3 [i_1] [15])) | (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (unsigned short)55745)))) >> (((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (10410219947485013954ULL))) - (18446744073709518821ULL)))));
        }
        var_22 = ((/* implicit */long long int) arr_0 [i_0]);
        var_23 &= (~(((/* implicit */int) min((arr_3 [i_0 - 4] [(unsigned short)2]), (arr_3 [i_0 - 4] [11])))));
    }
    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) min((var_12), (((/* implicit */int) (short)4786))))))));
    var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) -899071983)) - (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) : (var_4))))) + (9223372036854775807LL))) >> ((((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) var_14)), (var_16)))))));
}
