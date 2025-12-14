/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93107
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
    var_10 = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)32761))))))));
    var_11 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((unsigned char) arr_1 [i_0] [i_0 - 1])), (((/* implicit */unsigned char) (_Bool)0))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_5 [i_1] [(unsigned short)24])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (max((0U), (arr_4 [(signed char)18]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))));
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) 0U));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (signed char i_3 = 4; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    {
                        arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) 0U);
                        var_15 = ((/* implicit */long long int) var_4);
                        arr_13 [i_1] [(unsigned char)24] = ((/* implicit */signed char) max((var_6), ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29018))) <= (arr_4 [i_4 + 1]))))))));
                    }
                } 
            } 
        } 
    }
}
