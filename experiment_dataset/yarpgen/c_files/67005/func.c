/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67005
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
    var_11 = ((/* implicit */unsigned char) (~(4160581156U)));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (max((13LL), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) (unsigned char)76)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(unsigned char)14] [12U] = max((2096896U), (2096896U));
        var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) (unsigned char)19)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (61363740U) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [9])) ? ((-(((((/* implicit */long long int) 2096896U)) - (arr_0 [i_0]))))) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = (+(((arr_1 [i_1] [i_1]) / (((/* implicit */int) arr_3 [i_1] [i_1])))));
        arr_5 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [0U]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) > (((/* implicit */int) arr_4 [i_1])))))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) max((arr_1 [i_1] [i_1]), (((/* implicit */int) var_5))))) : (arr_0 [18]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))) == (((((/* implicit */_Bool) -2071222482)) ? (3140472461U) : (((/* implicit */unsigned int) -263352506))))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) 3972702182U);
    }
}
