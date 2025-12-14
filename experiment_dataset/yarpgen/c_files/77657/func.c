/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77657
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) < (arr_1 [(_Bool)1]))))))), (((unsigned int) arr_0 [i_0] [i_0]))));
        var_12 = (~((-(max((((/* implicit */unsigned long long int) 13U)), (var_4))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)142))))), (((unsigned char) arr_0 [i_0] [i_0]))));
        arr_4 [(unsigned char)0] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)16368)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (1375640309U)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (1375640333U)))))) : (3940649673949184ULL)));
    }
    var_13 -= ((/* implicit */signed char) (unsigned char)241);
}
