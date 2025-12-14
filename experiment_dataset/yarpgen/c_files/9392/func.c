/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9392
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (14U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))) - (var_8)));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967261U)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
    var_12 *= ((/* implicit */short) ((4294967293U) & (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_5), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) arr_1 [3U]);
        var_14 = ((/* implicit */unsigned char) ((((((unsigned int) 16204982383961216486ULL)) != (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_1 [i_0])) - (96)))))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0 - 2]))) : (((((((/* implicit */int) var_9)) != (((/* implicit */int) var_7)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_15 = ((/* implicit */long long int) var_4);
        arr_3 [i_0 - 1] [16LL] &= ((/* implicit */long long int) (signed char)116);
        var_16 *= ((/* implicit */_Bool) (+(8388607U)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = (signed char)116;
        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((var_6) / (((/* implicit */unsigned long long int) 1426553014U))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (short)-29696))));
                        arr_16 [i_1] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1 + 1] [i_4 - 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) != (4294967262U)))))));
                        arr_17 [i_1] [i_1] [i_3] [i_4 - 2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58273)) + (((/* implicit */int) (_Bool)1))))) ? (((arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((3U) != (arr_7 [i_1] [i_3] [i_1])))))))));
                    }
                } 
            } 
        } 
    }
}
