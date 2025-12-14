/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/822
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
    var_14 += ((/* implicit */short) var_13);
    var_15 |= var_9;
    var_16 += var_1;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10441))));
        var_18 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [12U])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_19 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
        arr_4 [(_Bool)1] [i_1 + 4] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [(short)5]))))), (max((5809345476026684729ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                {
                    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) var_11))));
                    var_21 *= ((/* implicit */unsigned int) arr_8 [i_2] [i_3]);
                }
            } 
        } 
        arr_11 [i_1 + 3] [(_Bool)1] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_4 = 3; i_4 < 19; i_4 += 2) 
    {
        var_22 *= ((/* implicit */short) ((((/* implicit */int) ((arr_13 [i_4 - 1]) && (arr_13 [i_4 + 3])))) > (((var_8) ? (((/* implicit */int) arr_13 [i_4 + 3])) : (((/* implicit */int) arr_13 [i_4 + 1]))))));
        var_23 -= ((/* implicit */_Bool) ((max((arr_12 [i_4 + 1]), (((/* implicit */unsigned int) var_3)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_13 [i_4]))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((((arr_13 [i_4 - 1]) || (((/* implicit */_Bool) arr_12 [i_4])))) ? ((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_12 [i_4 - 3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)11)) || ((_Bool)1)))))))));
    }
}
