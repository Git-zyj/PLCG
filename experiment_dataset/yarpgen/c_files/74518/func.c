/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74518
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)206)) : (((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (short)30720)) : (224401264)))))));
    var_17 ^= ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 - 1] [i_2 + 1])) ? (((((/* implicit */_Bool) 10446949629107161080ULL)) ? (arr_5 [i_2 - 2] [i_2 - 1] [i_2 + 1]) : (((/* implicit */int) (unsigned char)62)))) : ((~(((/* implicit */int) (unsigned short)0))))));
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30720)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) (unsigned short)24384)))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) -1469672727464015566LL)))))))));
                    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_3 [i_2 - 1]))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(1980974758)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 631814511689724198LL)) ? (1645677766537623230ULL) : (1645677766537623230ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0]) < (8257536U)))))))));
                }
            } 
        } 
    } 
}
