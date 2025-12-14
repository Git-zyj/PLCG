/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82387
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [(short)2] [i_0] = ((/* implicit */short) ((min((arr_1 [i_0]), (arr_1 [i_0]))) + (arr_1 [i_0])));
        var_16 = ((((/* implicit */_Bool) ((arr_1 [3U]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122)))))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0]));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_14))))) : (arr_6 [i_2 + 3] [i_1 + 2] [i_2 + 3]))) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_2 - 3])))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (1770514665)))) ? (((/* implicit */unsigned long long int) 3348089672U)) : (min((((/* implicit */unsigned long long int) -1349280155)), (17112626611447346718ULL)))));
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4108835333337131615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (17112626611447346718ULL))))));
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned short) ((signed char) 2147483647));
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) ((var_3) <= (1534065957728896121LL)))), ((~((~(var_15)))))));
    var_21 = ((/* implicit */short) ((long long int) var_3));
}
