/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66348
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
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) 4167128134U);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_16)))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_19))))));
        var_21 += ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 4167128143U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)3))))), (((long long int) arr_2 [i_2] [i_1])))) : (((((((/* implicit */_Bool) (short)-29180)) ? (((/* implicit */long long int) 3784599766U)) : (34225520640LL))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047)))))));
                    var_23 = (~(max((arr_7 [i_0] [i_2 + 1] [i_2] [(_Bool)1]), (arr_7 [i_0] [i_2 - 2] [i_2] [i_0]))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) arr_0 [i_0])), (4167128134U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)32))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_5 [i_0])) / (arr_8 [i_0] [i_0] [(unsigned short)8] [5U]))))))));
    }
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_13))));
}
