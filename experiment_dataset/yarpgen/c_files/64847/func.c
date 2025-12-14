/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64847
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
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) 2305040771U);
        var_14 = ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)20)) / (((/* implicit */int) (signed char)46)))), (((/* implicit */int) (_Bool)1))));
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))));
        var_15 += max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [4LL])) ? (arr_3 [(unsigned short)4]) : (((/* implicit */int) var_5))))), (max((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [(signed char)6]))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (16777152LL))))));
        var_16 *= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)194))));
    }
    var_17 += ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */unsigned long long int) var_12);
}
