/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92958
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_21 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_1 [i_0])), ((~(-6718926953724904966LL))))), ((-((-(6718926953724904965LL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 6718926953724904965LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-6718926953724904982LL))), (((/* implicit */long long int) min((-2147483641), (((/* implicit */int) (_Bool)1)))))))) ? (max((max((6718926953724904959LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)74))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) var_5);
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2] [i_2])) || (((/* implicit */_Bool) -6718926953724904966LL))))), (-6718926953724904966LL)));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 21; i_4 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) min((((((/* implicit */_Bool) -6718926953724904984LL)) ? (((/* implicit */int) var_18)) : (var_16))), (((((/* implicit */_Bool) -7392463465658892158LL)) ? (((/* implicit */int) (short)-32560)) : (((/* implicit */int) (short)-26133)))))))));
        var_25 ^= ((/* implicit */long long int) var_17);
    }
}
