/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85472
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
    var_10 = ((/* implicit */signed char) 3312032284U);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */short) max((var_7), (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) var_8)) : (-2147483630))), (arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)142)) - (-1145728336)));
        arr_5 [9LL] = ((/* implicit */signed char) max((((/* implicit */int) var_9)), (((((/* implicit */int) ((short) var_0))) * (((/* implicit */int) ((982935015U) >= (var_1))))))));
        var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_1 [i_0]) : ((~(((/* implicit */int) (signed char)-105))))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_12 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) || (((/* implicit */_Bool) var_3))))), (((arr_7 [i_1] [i_1]) % (arr_7 [8U] [i_1])))));
        arr_9 [(short)11] = ((/* implicit */unsigned int) min((arr_7 [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) >= (var_2))))) == (((((/* implicit */_Bool) (short)-32766)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))));
    }
}
