/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7163
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
    var_15 ^= ((/* implicit */unsigned int) ((signed char) (~(var_10))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (signed char)126);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)24576)) != (-1157973872)))));
                        var_17 ^= ((((/* implicit */_Bool) ((arr_9 [i_3 + 1] [i_0 - 2]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_0 + 1])))))) ? ((+(((/* implicit */int) arr_9 [i_3 + 1] [i_0 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 2])) == (((/* implicit */int) arr_9 [i_3 + 1] [i_0 - 1]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 + 3]))) == (arr_12 [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_14 [i_4 + 1] [i_4 + 1])))) : (196237737U)));
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_16 [i_4 - 1]), (arr_16 [i_4 - 1]))))));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((unsigned short) (~(-4724683403787077149LL))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_12) : (((/* implicit */long long int) arr_17 [i_5] [i_5]))))) ? (1226218011U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_4] [i_4]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 + 1]))) != (((((/* implicit */_Bool) (unsigned short)41999)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (445354096U))))))) : (((((/* implicit */_Bool) (unsigned short)30428)) ? (arr_12 [i_4]) : (arr_12 [i_4])))));
                }
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (unsigned short)1875))));
                    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_3)), (4201418842U)));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_5])) ? (arr_17 [9U] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13815)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_5] [i_4] [i_4]))) : (213366741U)));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_30 [i_4 + 3] [i_4] [i_4 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)23495))));
                                arr_31 [i_4] [i_8] [(signed char)2] [i_9] [i_10 - 1] |= ((/* implicit */long long int) (unsigned short)8176);
                                var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4] [i_9] [i_8])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4 + 3] [i_4] [(_Bool)1]))) == (arr_26 [i_9] [i_10])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47196))) == (7882923406359027830LL))))));
                            }
                        } 
                    } 
                }
                var_26 = max((((((/* implicit */_Bool) arr_23 [i_4] [i_4 + 3] [i_4])) ? (-7393845024413310659LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (max((arr_23 [i_4] [i_4 + 3] [i_4 - 1]), (arr_23 [i_4 + 1] [i_4 - 2] [(_Bool)1]))));
            }
        } 
    } 
}
