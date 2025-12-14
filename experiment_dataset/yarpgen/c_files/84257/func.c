/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84257
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
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((((/* implicit */_Bool) 5865409)) && (((/* implicit */_Bool) var_7)))))))), (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_13)) ? (var_4) : (var_15)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (1097994365U) : (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2LL)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))) >> (((((((arr_0 [i_0]) > (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))) - (18446744073709551525ULL)))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18054203674760479252ULL) & (((/* implicit */unsigned long long int) arr_0 [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_1 + 1])))) : (((unsigned int) arr_3 [i_1 - 1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (signed char)-72);
}
