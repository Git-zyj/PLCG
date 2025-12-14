/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69789
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (min((min((max(((unsigned char)201), (var_1))), (((/* implicit */unsigned char) ((signed char) var_3))))), (var_1)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_8)))));
        arr_4 [i_0] |= ((/* implicit */long long int) ((max((var_8), (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [2]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        arr_5 [i_0 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)33908))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [14ULL]))));
        var_14 = (unsigned short)31628;
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (short)-11449);
        var_16 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_2 - 1] [i_2 - 1]) : (((/* implicit */int) var_0)))))))));
        var_17 = ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) arr_7 [i_2 - 1])))), (((/* implicit */int) (unsigned short)31628)))), (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) arr_2 [i_2] [i_2 + 1])) : (((/* implicit */int) (unsigned char)192))))));
        var_18 = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) arr_12 [i_2])))) ? (((((/* implicit */int) (unsigned short)50043)) ^ (((/* implicit */int) arr_6 [i_2] [i_2])))) : (((/* implicit */int) max(((unsigned short)31628), (((/* implicit */unsigned short) (short)11444))))))), (arr_9 [(unsigned short)8])));
    }
    var_19 = ((/* implicit */int) (((-((-(var_2))))) != (((/* implicit */unsigned int) max(((~(var_7))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)11448))))))))));
    var_20 = ((/* implicit */int) 11699943748751338398ULL);
    var_21 = ((/* implicit */unsigned char) var_7);
}
