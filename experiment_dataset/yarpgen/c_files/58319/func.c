/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58319
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */long long int) 1286789019))))) ? (max((arr_0 [i_0]), (((/* implicit */long long int) var_4)))) : (min((arr_0 [i_0]), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) var_10))));
        var_20 = ((/* implicit */int) max((var_20), (((int) (unsigned char)133))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) (-(min((((/* implicit */int) min((((/* implicit */short) (unsigned char)97)), (arr_3 [i_1])))), (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned short)63761)) : (((/* implicit */int) var_0))))))));
        arr_6 [i_1] |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) : ((~(((/* implicit */int) arr_5 [i_1] [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_3 [i_1]))))))) ? ((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((-(3))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])));
        var_22 = ((/* implicit */int) max((var_22), ((-(max((((/* implicit */int) var_2)), (min((((/* implicit */int) (short)31747)), (var_5)))))))));
    }
    var_23 = ((/* implicit */short) var_14);
    var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))))));
}
