/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97506
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (1610612736) : (((/* implicit */int) max((((/* implicit */short) var_0)), (var_7)))))) > (((/* implicit */int) var_6))));
    var_13 &= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_0)) + (86)))))) <= (var_1)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */short) ((((((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23328))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (short)-23328)))) <= ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)12288)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_4))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((-978153946), (((/* implicit */int) (unsigned short)6721)))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */int) (short)22359)) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) <= (((/* implicit */int) (short)-23328))))) : (((((/* implicit */_Bool) 1681730437403838288LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)54230))))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            {
                arr_10 [i_1] [i_2 - 3] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_6 [1]))));
                arr_11 [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_2 - 1] [i_2 + 2] [i_2 + 2]), (arr_7 [i_2 - 2] [i_2 + 2] [i_2 + 2])))) || (((/* implicit */_Bool) var_11))));
            }
        } 
    } 
}
