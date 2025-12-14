/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74753
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [10LL] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) var_6)))))))), (min((((/* implicit */unsigned short) (signed char)-6)), ((unsigned short)50911)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))) <= (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -546586276)), (16777214U)));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-120712887561401801LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) var_13)), (var_7))))) ? ((((((~(var_11))) + (9223372036854775807LL))) << (((((((-546586294) & (-546586283))) + (546586367))) - (62))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        arr_9 [i_1] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (arr_7 [i_1]) : (((/* implicit */int) ((3757462947842842261LL) < (((/* implicit */long long int) var_3)))))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14628)) | (((/* implicit */int) var_17)))))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_17))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 960768142366307596ULL)))))))) ? (((/* implicit */long long int) max((-546586294), (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29973)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7)))) : (var_11)))));
}
