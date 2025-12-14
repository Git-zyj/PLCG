/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73142
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
    var_11 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (min((((/* implicit */int) (unsigned char)196)), (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_3))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (max((2890776984U), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))))) : (1404190312U)));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
            arr_7 [i_1] = max((((((/* implicit */_Bool) -1532130770)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_3 [i_2]))), (((((/* implicit */_Bool) ((1986731741U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)31524)))))) ? (max((2890776977U), (((/* implicit */unsigned int) (unsigned char)177)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
            var_14 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((short) (unsigned char)196))), (((((/* implicit */_Bool) var_1)) ? (arr_6 [0U] [0U] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(1986731741U)))))))));
            arr_8 [i_1] [i_2] [i_2] = min((((/* implicit */unsigned int) ((arr_6 [i_2] [i_1] [i_1]) >= (arr_3 [i_1])))), (arr_3 [i_1]));
        }
        var_15 ^= ((/* implicit */unsigned char) (~((((+((-9223372036854775807LL - 1LL)))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1])), (123918494U))))))));
    }
}
