/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58114
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
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1LL)) ? (var_4) : (600580496)));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 3] = ((/* implicit */short) var_3);
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18252))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_22 *= ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? ((-(9223372036854775805LL))) : (((/* implicit */long long int) -600580497)))), (((((((/* implicit */_Bool) -600580500)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28780))) : (2658504792005123846LL))) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 2564942802U)) ? (379046074U) : (((/* implicit */unsigned int) 471562892)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
        var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_14)))) / (2658504792005123847LL)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_17))));
        arr_17 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) -2041046924))));
    }
    var_26 = var_14;
}
