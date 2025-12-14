/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95273
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [8ULL] [i_2] = ((/* implicit */unsigned short) (short)-32748);
                    arr_9 [0U] &= ((/* implicit */long long int) ((((((unsigned int) (short)-21585)) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [1U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0])))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((unsigned short) var_2));
    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) >> (((var_5) + (1109872714)))));
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) (unsigned short)56673)) < (((/* implicit */int) var_9))))), (((short) var_12))))), (var_14)));
}
