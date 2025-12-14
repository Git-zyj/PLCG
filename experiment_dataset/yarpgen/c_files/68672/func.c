/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68672
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)124)))), (((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)130))))) * (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)34)), (arr_2 [i_1] [i_1]))))))));
                var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)46870)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)114))) : (((/* implicit */int) (unsigned char)243))))) - (max((((/* implicit */long long int) ((((/* implicit */int) (short)-19834)) * (((/* implicit */int) var_10))))), (arr_5 [i_0] [i_1 - 1])))));
                var_13 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (unsigned char)102)))) ? (148769199) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))))) - ((-(((/* implicit */int) (unsigned char)119))))));
                var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_0])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_1))));
    var_16 -= ((/* implicit */long long int) var_4);
}
