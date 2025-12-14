/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88524
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_9))));
        arr_2 [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-13046))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (unsigned short)51250)))))) != (((unsigned int) (unsigned short)14274)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (arr_1 [i_1]) : (((unsigned int) arr_0 [i_1]))))) ? ((-((+(1003938571171624326LL))))) : (((/* implicit */long long int) max((((arr_0 [(unsigned short)2]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */unsigned int) max((arr_4 [i_1]), (((/* implicit */short) var_8))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) var_6);
        var_13 = arr_1 [i_1];
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 8924437471652818825LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13045))) : (2288119439U)));
        var_15 = arr_1 [i_2];
        var_16 += ((/* implicit */_Bool) arr_9 [12U]);
    }
    var_17 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) var_8))));
    var_18 = ((/* implicit */unsigned short) -8924437471652818825LL);
}
