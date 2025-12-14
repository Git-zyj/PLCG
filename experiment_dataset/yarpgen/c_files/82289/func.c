/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82289
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
    var_18 = ((/* implicit */int) ((((/* implicit */int) var_14)) > (var_13)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_2] [(unsigned short)17] [18U] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_1]);
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [17ULL] [i_0 + 1] [i_0 - 2])) : (arr_5 [i_0] [i_0])))));
                        arr_12 [i_0] [i_1] [i_0] [(unsigned short)7] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_0 + 1] [i_1] [i_3] [(unsigned short)17])), (arr_9 [i_0 + 1])))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) (~(((long long int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)6])))))));
        var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [(short)4] [i_0])) != (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [(unsigned char)12] [(unsigned char)20] [i_0] [(unsigned char)16])))))) + (((unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(short)3] [i_0])))))))));
        var_21 = ((/* implicit */unsigned char) var_17);
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2))))))));
        arr_16 [(unsigned short)16] = ((/* implicit */short) ((unsigned char) (-(arr_9 [i_4]))));
        var_22 = ((/* implicit */unsigned char) arr_6 [i_4] [i_4] [i_4]);
        arr_17 [i_4] = min((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [6] [i_4] [i_4] [(unsigned short)0] [i_4])))), (((((/* implicit */int) arr_13 [i_4])) + (((/* implicit */int) arr_8 [i_4] [(unsigned char)13] [(unsigned char)13] [i_4] [i_4] [18])))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))))));
}
