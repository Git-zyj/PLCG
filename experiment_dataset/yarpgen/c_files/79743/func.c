/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79743
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
    var_15 ^= ((/* implicit */int) var_11);
    var_16 |= ((/* implicit */int) ((unsigned char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)47928)) : (((/* implicit */int) var_12)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)20)) : (var_8))))));
    var_17 -= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (0ULL));
    var_18 += ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) max((0U), (((/* implicit */unsigned int) ((4) / (((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_6 [i_0] [i_1] [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))) : (17355438229676464956ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [(short)1])) != (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (17201878388872954783ULL)))))));
                    arr_9 [i_0] [i_1] &= ((/* implicit */signed char) (((_Bool)1) ? (((((((/* implicit */int) arr_1 [(unsigned char)12] [(unsigned char)12])) & (((/* implicit */int) (unsigned short)65535)))) ^ (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2])))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) arr_3 [(signed char)8])) : (((/* implicit */int) var_10))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) ((short) (_Bool)0));
                        var_21 = ((/* implicit */_Bool) min((1091305844033086659ULL), (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) (signed char)-1)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */short) arr_3 [i_0]);
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (((((/* implicit */unsigned int) var_8)) + (((4294967295U) << (((((/* implicit */int) var_1)) + (104)))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_21 [i_5] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (295321649U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))) - (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_0])))))))));
                        var_23 -= ((/* implicit */short) var_5);
                        arr_22 [i_1] [i_1] [i_1] [i_5] |= ((/* implicit */signed char) (-(0U)));
                    }
                }
            } 
        } 
    } 
}
