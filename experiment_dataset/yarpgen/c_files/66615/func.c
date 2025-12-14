/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66615
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((signed char) (+(2851338152U))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)27038))))), ((~(3319263994U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)19280)) <= (((/* implicit */int) arr_1 [i_0]))))))))) ? ((~(6376487495317880953LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(min((((((/* implicit */int) arr_0 [i_0])) - (arr_2 [i_0]))), (((((/* implicit */int) (unsigned short)46256)) / (((/* implicit */int) arr_1 [i_0]))))))));
        arr_5 [i_0] [6U] &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 3]);
        var_20 |= ((((/* implicit */_Bool) (+(arr_2 [i_0 - 2])))) ? (max((((/* implicit */unsigned int) ((arr_2 [i_0]) <= (arr_2 [i_0])))), (((4177178713U) + (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_8 [0U] [i_1] = ((((((/* implicit */int) arr_6 [i_1 - 1])) < (((/* implicit */int) arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) : ((~(8449074889299934310ULL))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 2])) < (((((/* implicit */int) (unsigned short)47629)) & (((/* implicit */int) arr_6 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) && (((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) arr_6 [i_1]))));
    }
    var_22 = ((max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) var_0)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), (734778714)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))));
}
