/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88587
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
    var_14 = ((/* implicit */unsigned int) ((((unsigned int) var_7)) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 |= ((/* implicit */short) (+(((/* implicit */int) var_8))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 4; i_3 < 10; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) (~(2854415310U)))) ? (((unsigned int) arr_11 [i_1] [(short)3] [i_3] [i_3])) : (((unsigned int) var_7)));
                        var_18 ^= ((_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_11))));
                        var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_2]))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_3))));
                    }
                } 
            } 
            arr_14 [i_2] = ((/* implicit */unsigned long long int) var_0);
            var_21 = ((/* implicit */short) ((((unsigned long long int) var_8)) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1])))))));
        }
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_17 [i_1] [i_5]))));
            arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) -2147483638)) > (var_12))));
            arr_20 [i_5] [i_5] = ((/* implicit */_Bool) var_6);
            var_23 = ((/* implicit */unsigned int) arr_18 [i_1] [i_5] [i_1]);
            var_24 = ((/* implicit */unsigned int) var_0);
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (arr_10 [i_1] [i_6] [i_1]))))) > (((((/* implicit */_Bool) arr_0 [i_6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (65535U))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) ((short) var_0))) | (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3))))))))));
            var_27 = ((/* implicit */unsigned int) arr_21 [(unsigned char)9] [i_6]);
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)99)) + (((/* implicit */int) (_Bool)1))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_3))));
        }
        var_30 = ((/* implicit */unsigned long long int) var_6);
    }
}
