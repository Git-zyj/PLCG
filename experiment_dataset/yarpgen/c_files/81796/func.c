/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81796
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
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), ((+(min((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 + 2]))))) : (((long long int) arr_5 [i_0 + 3]))));
                        var_13 = ((/* implicit */int) arr_5 [i_0]);
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)151)), (max((arr_8 [i_3 + 1] [i_3 - 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) 1508002461U)))))))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_10))));
}
