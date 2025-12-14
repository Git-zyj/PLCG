/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63418
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)232)))) || (((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))))))), (min((((/* implicit */unsigned int) var_5)), (arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((_Bool) (unsigned short)511))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(arr_0 [(short)3])));
        var_14 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((2966506612U) / (2624589332U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (1670377949U)));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) var_10);
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-23931), (((/* implicit */short) (unsigned char)255))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), ((unsigned short)6100)))) : (1046528)));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned int) 359601866U)))));
    var_18 = ((/* implicit */short) (unsigned short)27649);
}
