/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83528
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (482853019U)))) || (((((/* implicit */long long int) ((/* implicit */int) var_12))) != (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (max((((/* implicit */long long int) 482853019U)), (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ^ ((((~(arr_1 [i_0] [(unsigned short)4]))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (((/* implicit */long long int) 3812114270U))))))))));
        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) min((var_6), (arr_0 [i_0]))))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_16)))));
    }
    var_21 &= ((/* implicit */unsigned char) var_12);
    var_22 ^= ((/* implicit */unsigned long long int) (unsigned short)54325);
}
