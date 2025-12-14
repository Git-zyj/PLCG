/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75084
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) ^ ((~(4398046511103LL)))));
        var_11 = ((/* implicit */long long int) 2855348172U);
    }
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) var_0)))))));
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) -714604920))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (_Bool)1))))));
}
