/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89253
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_1 [i_0 - 2]))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57946))) + (arr_2 [i_0 + 1] [i_0 + 2]))))));
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1 + 1]))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49968))) : (((var_0) * (((/* implicit */unsigned long long int) 0LL)))))) : (((((/* implicit */_Bool) var_4)) ? (min((1147018712398212724ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((var_8) / (arr_4 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 2])) >= (((/* implicit */int) arr_5 [i_1 - 2])))))));
    }
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (~(((long long int) (~(((/* implicit */int) var_7))))))))));
}
