/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97786
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((var_4) - (1681532204U)))))) >= (4270784558U))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32224))) : (min((((/* implicit */long long int) ((unsigned short) (unsigned char)242))), (arr_2 [i_0])))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
        var_19 = ((/* implicit */unsigned short) arr_2 [(unsigned short)14]);
        arr_4 [15U] [(unsigned short)19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1534063862U))));
    }
    var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (min((((/* implicit */int) var_6)), (var_15))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((min((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19812))))))), (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_9)))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 3] [20U] [i_2])) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned short)64628)))))))));
                    arr_15 [21U] [21U] [21U] [21U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) (unsigned short)18708))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((2529624898U), (((/* implicit */unsigned int) (unsigned short)5)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (18446744073709551593ULL)));
                }
            } 
        } 
    } 
}
