/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99184
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
    var_14 += ((/* implicit */unsigned long long int) var_2);
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(_Bool)0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (arr_0 [i_0] [i_0]) : (((unsigned int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (((long long int) (signed char)-23)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))));
    }
    for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-84)) ? (9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (arr_1 [15] [i_1]))))));
        arr_6 [i_1 - 3] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(var_8)))), (var_3)));
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_1 - 1] [i_1 + 3]), (arr_5 [i_1 - 2] [i_1 + 3])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) + (var_6))) : (((/* implicit */unsigned long long int) max((arr_0 [i_1 - 1] [i_1 + 3]), (arr_0 [i_1] [i_1 - 1]))))));
    }
    for (int i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2 + 3]))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */long long int) min(((signed char)124), ((signed char)-105)))), (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2])) ? (arr_9 [i_2 + 3] [i_2 - 1]) : (arr_9 [i_2 - 3] [i_2 + 1]))))))));
    }
    for (int i_3 = 3; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3)))) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (arr_13 [i_3 - 3]))) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_3] [i_3 + 1])))));
        arr_14 [i_3 - 3] [i_3] |= ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (9223372036854775807LL))));
        arr_15 [(signed char)6] [i_3] = ((/* implicit */int) ((-1617785559) != (391259625)));
        var_20 = ((/* implicit */unsigned int) ((var_8) | (((long long int) min((((/* implicit */int) (signed char)126)), (var_5))))));
    }
}
