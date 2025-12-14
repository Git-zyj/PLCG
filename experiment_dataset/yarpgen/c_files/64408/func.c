/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64408
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
    var_10 = ((var_0) != (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? ((-(((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_7))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))))) > (((/* implicit */int) arr_1 [i_0])))))));
        var_12 += ((/* implicit */long long int) (!(((((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (signed char)0)))) > (((/* implicit */int) (signed char)0))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [9U])) : (((/* implicit */int) arr_1 [i_0]))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) (((+(arr_0 [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_1))) || ((!(((/* implicit */_Bool) (signed char)5)))))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_0 [i_1]))));
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9))))) > (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_1]))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_1 [i_1 - 1]))) * (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) var_2))))))))));
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((((/* implicit */int) ((unsigned short) var_0))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
}
