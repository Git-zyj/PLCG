/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82873
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
    var_14 |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) >= (((/* implicit */int) (signed char)-107))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)29202)))) * ((+(((/* implicit */int) (short)-13347))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36333))) : (4249780832U)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) arr_3 [i_0])), (arr_1 [i_0] [i_0]))), (((unsigned short) arr_0 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) max((max((arr_2 [(unsigned short)21] [i_0]), (((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
    }
}
