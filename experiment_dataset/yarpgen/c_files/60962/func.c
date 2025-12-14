/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60962
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1 + 1] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_1 [i_2]))))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3736282332U)))));
                    arr_10 [i_2] [i_1] [(unsigned char)0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_5))))) ? (arr_4 [9]) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (-1619903098)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-23271))))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_6 [i_0 - 1] [i_0 - 1])));
    }
    var_11 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)972))));
}
