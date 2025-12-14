/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61919
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
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_5)) & (-1LL))), (-1LL)))) > (var_17)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))))) : ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [8] [i_1] [i_1]))) : (arr_1 [i_1]))))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((12LL), (((/* implicit */long long int) arr_4 [i_0 + 2] [i_1])))) * (((/* implicit */long long int) arr_1 [i_0 + 2]))))) % (((unsigned long long int) arr_3 [i_0 - 1] [i_1 - 1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)64584)) <= (((/* implicit */int) (signed char)15))))), (((((/* implicit */int) arr_6 [i_2])) * (((/* implicit */int) arr_8 [i_2]))))))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) arr_7 [i_2]);
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_22 -= arr_11 [i_3 - 1];
        arr_15 [i_3 - 1] [i_3] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 - 1]))));
    }
}
