/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67179
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */int) ((((((/* implicit */_Bool) 1654154182U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (1654154156U))))) / (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2640813113U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 2640813100U)) ? (1654154182U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((1654154189U) >> (((var_2) + (1153826662)))))) ? (((((/* implicit */_Bool) 1654154195U)) ? (var_10) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)-13473)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1 - 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)254)) ? (9706941281122671188ULL) : (((/* implicit */unsigned long long int) 1654154185U))))));
        arr_9 [i_1 - 2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 16106127360ULL)) ? (1654154186U) : (2640813106U))) / (((((/* implicit */_Bool) (unsigned short)16042)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))))));
        arr_10 [i_1] = ((/* implicit */unsigned int) (-((-(var_10)))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-17202)) ? (var_7) : (((/* implicit */int) var_5))))));
            arr_13 [i_2] [i_1] = ((/* implicit */unsigned int) (-(var_3)));
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)92))));
        }
        arr_15 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    var_16 = ((/* implicit */short) (+((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) || (((/* implicit */_Bool) var_8)))))))));
}
