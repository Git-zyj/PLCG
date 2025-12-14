/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8672
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) (signed char)49)) - (31)))))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))))) >> (((8936830510563328ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_14)))), (((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_15)))))))));
    var_17 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((18437807243198988266ULL) - (18437807243198988261ULL)))))), (min((var_9), (((/* implicit */unsigned int) var_6))))))));
    var_18 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_1]))))) + (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) ((unsigned short) (unsigned short)65535))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)0))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_8 [i_1] [i_1] [i_2]);
                                var_21 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)26))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [(short)8] [i_0 + 1] [i_3] [i_4])) : (((/* implicit */int) var_8)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))));
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_12 [i_1] [i_4] [i_4 - 1] [i_1]), (arr_12 [i_1] [i_4] [i_4 - 1] [i_1])))), (((((/* implicit */_Bool) arr_12 [i_1] [i_4 - 1] [i_4 - 1] [i_1])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_12 [i_1] [i_4 - 1] [i_4 - 1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0 - 1] = ((/* implicit */unsigned int) ((((_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_2 [i_0] [10]))))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [2] [i_0 + 1] [i_0])) : ((-(((/* implicit */int) var_14))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0] [7U] [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        var_24 -= ((/* implicit */signed char) ((1278879326) + (((/* implicit */int) (_Bool)1))));
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_19 [i_5])));
    }
}
