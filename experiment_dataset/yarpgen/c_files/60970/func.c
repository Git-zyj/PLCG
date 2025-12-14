/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60970
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
    var_12 = ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((arr_1 [i_0]) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-119))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (((unsigned int) var_4))))));
        var_15 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) var_9)))) ? (9448175655551049074ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) (unsigned char)60)) ? (arr_1 [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))))))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((int) var_7)))));
        arr_2 [(signed char)10] = min((((arr_1 [i_0]) * (arr_1 [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (unsigned char)228))))), ((~(var_7)))));
        var_18 -= ((/* implicit */short) ((max((((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((/* implicit */int) var_1)) : (arr_3 [i_1]))), (arr_4 [i_1] [i_1]))) / (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (signed char)115)) : (-97238439)))));
    }
}
