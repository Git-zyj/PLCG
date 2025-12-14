/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65079
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
    var_11 = ((/* implicit */unsigned char) 1290574988);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), (max((((/* implicit */signed char) (!(((/* implicit */_Bool) 4323455642275676160ULL))))), (arr_0 [2U]))))))));
        var_13 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((271295812U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (max((2147483647), (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_14 = ((/* implicit */unsigned int) (((((+(var_7))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)(-127 - 1)))));
}
