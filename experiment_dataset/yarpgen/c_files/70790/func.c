/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70790
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (+(min((var_19), (((/* implicit */unsigned int) (unsigned short)65535))))));
        var_21 ^= (+(((int) var_1)));
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = var_5;
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) (signed char)0))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) (-(var_10)))) : (arr_4 [i_1] [i_1])))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [5] [i_1 - 2] [i_1 - 3] [19U])) - (((/* implicit */int) var_11))))), (min((((/* implicit */unsigned int) var_2)), (var_19)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_2)), (arr_11 [(short)16] [i_4] [(short)16] [(short)16]))))));
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_17))))) | (min((var_10), (((/* implicit */int) arr_5 [i_4])))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-1)))))));
        arr_18 [i_5] [i_5] = ((/* implicit */int) (signed char)-66);
        var_26 = ((/* implicit */int) ((signed char) (signed char)81));
    }
    var_27 = ((/* implicit */unsigned char) (((-(var_3))) != (max((min((var_3), (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-103)))))))));
}
