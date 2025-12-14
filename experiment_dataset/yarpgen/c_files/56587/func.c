/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56587
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
    var_11 &= ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [12ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1))))))));
            var_12 -= ((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */unsigned int) 685215152)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [8])) - (((/* implicit */int) ((unsigned char) var_6))))))));
            arr_6 [i_0] [i_1] = ((short) max((min((6919782904469105119LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_6))));
            var_13 = ((/* implicit */int) arr_1 [i_0]);
            arr_7 [i_1] = ((/* implicit */signed char) min((max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))), (((/* implicit */long long int) var_3))));
        }
        var_14 &= ((/* implicit */signed char) ((_Bool) ((arr_3 [i_0] [2ULL]) != (min((((/* implicit */long long int) var_7)), (-6919782904469105120LL))))));
    }
    var_15 = ((/* implicit */int) var_2);
}
