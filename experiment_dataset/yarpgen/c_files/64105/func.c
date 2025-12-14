/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64105
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) min((var_11), (var_4)))) + (((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))))) : (min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_4)), (var_8)))), ((-(var_6)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) max((((/* implicit */short) var_1)), (arr_2 [i_0])))))) % ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_0])) / (((/* implicit */int) arr_2 [i_1]))))) : (((var_12) / (var_12))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_2)))))))));
            var_15 += ((/* implicit */long long int) (((-(((/* implicit */int) arr_3 [i_1])))) > (((/* implicit */int) (!(arr_1 [i_0]))))));
            var_16 = ((((/* implicit */long long int) min(((+(50331648))), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_8))))))) + (max((((var_9) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (-(var_12)))))));
        }
        var_17 += ((/* implicit */unsigned char) min((((arr_1 [i_0]) ? (((((/* implicit */_Bool) arr_0 [4ULL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)12])))) : ((-(((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) arr_4 [i_0] [i_0]))));
    }
}
