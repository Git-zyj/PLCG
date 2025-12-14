/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79956
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (min((min((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_2 [i_0] = ((_Bool) 223834359U);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15)))))), (((unsigned int) var_3))))), (((((/* implicit */long long int) 4294967289U)) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_15))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) arr_6 [i_1 - 1]);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_10 [8U] [i_2 - 1])), (((((/* implicit */int) arr_10 [2U] [2U])) + (((/* implicit */int) (unsigned short)30720)))))) > (((/* implicit */int) arr_6 [i_2]))));
        var_19 = 2445860842U;
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned long long int) arr_12 [i_3])) >> (((min((((/* implicit */unsigned int) arr_12 [i_3])), (4294967295U))) - (85U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (12U)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) arr_12 [i_3])) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_13 [i_3]) : (arr_13 [i_3])))))));
        var_21 = ((/* implicit */signed char) min((arr_13 [i_3]), (4294967288U)));
        arr_14 [i_3] = ((/* implicit */int) var_12);
    }
    var_22 = (+(var_13));
}
