/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71562
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (((/* implicit */int) min((arr_1 [i_0 + 1] [10LL]), (arr_1 [i_0 - 2] [i_0])))) : (((((/* implicit */int) arr_1 [(unsigned short)5] [i_0])) % (((/* implicit */int) arr_0 [i_0 - 3]))))))) ? (min((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3])), (((((/* implicit */int) arr_1 [i_0] [i_0 - 2])) | (((/* implicit */int) arr_0 [i_0 - 3])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) | (((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))) ? (((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65516)))) : (((/* implicit */int) arr_0 [(unsigned short)7]))))));
        arr_2 [i_0 - 3] = ((/* implicit */long long int) arr_1 [i_0] [(unsigned short)6]);
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((arr_4 [i_1 - 4]) ? (((/* implicit */int) arr_4 [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1 - 3])))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [(unsigned short)5]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) ((1152921504606846946LL) != (1152921504606846975LL)))))))));
    }
}
