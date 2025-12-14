/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98606
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) min((1898990365), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((short) var_3))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-12590)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */signed char) (+(min((((/* implicit */int) max((arr_2 [(_Bool)1]), (var_1)))), (-2104880852)))));
        var_14 = ((/* implicit */unsigned char) min((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_7) != (((/* implicit */int) (short)12592))))), (((unsigned int) arr_0 [i_0])))))));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) arr_3 [(signed char)10]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) arr_6 [i_1]);
            var_17 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-12593)), (arr_5 [i_1] [(_Bool)1])))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_18 = ((/* implicit */_Bool) (+(((((((/* implicit */int) (short)-12591)) + (2147483647))) << (((1950230807U) - (1950230807U)))))));
            arr_13 [i_1] = max((((/* implicit */int) min((arr_4 [i_1 + 3]), (((/* implicit */unsigned char) var_1))))), ((((!(var_1))) ? (min((((/* implicit */int) (short)-12592)), (var_11))) : (((/* implicit */int) var_0)))));
        }
        var_19 = (~(((/* implicit */int) arr_9 [(signed char)8])));
        arr_14 [9] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_3 [i_1])) >> (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) -2104880852)) : ((-(arr_7 [(_Bool)1] [i_1 + 1]))));
    }
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), ((+(((unsigned long long int) var_4))))));
}
