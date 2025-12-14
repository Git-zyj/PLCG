/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73246
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_6)) != (((1228619283) - (((/* implicit */int) (unsigned char)0))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_10))))) ? (max((arr_1 [9] [i_0]), (((/* implicit */unsigned long long int) (short)6735)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((arr_0 [i_0] [i_0]), (arr_2 [i_0]))), (var_1))))));
    }
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned char) (~((+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2]))) / (var_0)))))));
            arr_11 [i_1 - 1] [i_2] [14ULL] |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)8]))) != (var_4))))) ^ (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6735))) : (var_0))))));
            var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) var_6)))), (max((((/* implicit */int) arr_7 [i_1])), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) var_2))))))));
        }
        var_16 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1]))))))));
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) / (var_5)));
    }
}
