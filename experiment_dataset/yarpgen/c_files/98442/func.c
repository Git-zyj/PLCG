/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98442
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) var_7);
        var_21 = ((/* implicit */signed char) (short)-64);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? ((-(arr_3 [i_1]))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)192)) : (((/* implicit */int) (unsigned short)1))))))));
        arr_10 [i_1] [i_1] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (var_7)))) ? ((+(((/* implicit */int) (unsigned short)19281)))) : (((/* implicit */int) ((arr_2 [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))), (min((((/* implicit */unsigned int) arr_3 [i_1])), (var_8))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_18 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)0);
                arr_19 [12U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) var_18)))) < (((/* implicit */int) ((((/* implicit */long long int) arr_16 [i_2] [i_3] [(short)4])) <= (var_15))))))) % ((~(((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-1)))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_14)))))) ? ((((_Bool)0) ? (min((((/* implicit */unsigned long long int) var_15)), (9007199254740928ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */short) var_6)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) min(((!(var_10))), (var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (unsigned short)46258))))) || (((/* implicit */_Bool) var_17)))))));
}
