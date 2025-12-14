/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75834
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
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483633)) ^ (16513712313938205702ULL)));
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_14)), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)144)), ((unsigned short)38473))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7115)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))), (max((35184103653376ULL), (((/* implicit */unsigned long long int) var_10))))))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((arr_5 [i_1 + 1]) ^ (arr_5 [i_1 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))));
        arr_8 [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(arr_5 [17]))), (9015842069519374311LL))))));
    }
    var_18 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) var_8)) ? (-9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_5))))));
    var_19 = var_4;
}
