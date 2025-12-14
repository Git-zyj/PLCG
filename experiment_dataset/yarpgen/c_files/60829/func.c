/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60829
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */short) ((((((/* implicit */int) var_0)) >> (((arr_0 [i_0 + 1]) - (1867128661))))) << (((arr_0 [i_0 - 2]) - (1867128638)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)0)))) & (((/* implicit */int) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned short) var_3)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [(_Bool)1] = ((/* implicit */short) arr_1 [i_2] [(short)20]);
                    arr_15 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_1] [6])), (((unsigned int) 2437001025U)))))));
                    arr_16 [i_3] [0] [0] [i_1] = (+(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [13] [13])) : (((/* implicit */int) arr_1 [i_1] [i_3])))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned long long int) var_9);
    }
    var_17 = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) var_0)), (var_1))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) var_7))));
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */signed char) var_11);
    var_20 = ((/* implicit */unsigned long long int) var_14);
}
