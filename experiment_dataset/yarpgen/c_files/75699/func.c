/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75699
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_6 [9ULL] [(short)1] [7U] [i_0]))) : (2365010390U))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-32762)))));
                    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_4 [i_0 - 1]), (((((/* implicit */_Bool) 69527934U)) && (((/* implicit */_Bool) var_3)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2681986165317680648LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32749))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) - (-8555994229986446173LL)))));
        arr_12 [i_3] = ((/* implicit */long long int) (-(((((/* implicit */int) var_7)) / (((/* implicit */int) arr_3 [i_3]))))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) : (var_11)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_4))))) ? (((var_2) / (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) (-(var_1))))))));
            var_23 = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [17ULL]))) : (var_12))) << (((((/* implicit */_Bool) 2681986165317680648LL)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_4] [i_5])) / (((/* implicit */int) (unsigned char)196))))) ? (min((((/* implicit */unsigned int) var_1)), (arr_6 [i_4] [i_4] [(signed char)11] [i_5]))) : (((((/* implicit */_Bool) arr_13 [i_5])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_4] [i_4])))))))));
            var_24 = ((/* implicit */long long int) arr_2 [i_5]);
        }
        var_25 += ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_4 [i_4])), (((var_14) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 2681986165317680645LL)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_6)))))))));
        var_26 = var_15;
        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4])) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_4])), (var_6)))))))));
    }
    var_28 -= ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)0)), (((short) ((2681986165317680636LL) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
    var_29 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((-397694218) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_13)))))) : (((((/* implicit */_Bool) var_11)) ? (var_15) : (var_15))))));
    var_30 = ((/* implicit */unsigned int) var_17);
}
