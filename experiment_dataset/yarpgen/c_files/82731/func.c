/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82731
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-8954)))))))) - ((~(((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)61404)), (var_14))), (arr_0 [i_0])));
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = ((/* implicit */unsigned short) ((min((arr_1 [i_0]), (arr_1 [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_6 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned short)15), (arr_2 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) arr_0 [i_0]);
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (max((((/* implicit */int) (unsigned short)65521)), (arr_7 [i_0]))) : ((-(arr_7 [i_0]))))))));
            arr_9 [i_0] = ((/* implicit */long long int) var_13);
            var_18 = ((/* implicit */int) (unsigned short)44139);
            arr_10 [(_Bool)1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) || (((/* implicit */_Bool) var_14)))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_13 [i_0] [8] = (~(((/* implicit */int) var_4)));
            arr_14 [i_2] &= ((/* implicit */unsigned short) ((short) max((((/* implicit */int) var_11)), (max((arr_7 [i_0]), (((/* implicit */int) var_7)))))));
        }
    }
}
