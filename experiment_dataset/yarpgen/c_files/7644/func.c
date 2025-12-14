/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7644
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
    var_17 = ((/* implicit */short) var_3);
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (var_4) : (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) var_8);
                    arr_8 [(unsigned char)1] [(unsigned short)5] [(unsigned short)5] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)126), (((/* implicit */unsigned char) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0 + 3]))));
                        arr_12 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_3] = ((/* implicit */unsigned int) (((-(470179617U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))));
                        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 2] [i_1 - 2])) && (((/* implicit */_Bool) (unsigned short)65535))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [i_0 + 3]))));
                    }
                    var_22 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1610612736))))), (((long long int) (unsigned char)222))))));
                }
            } 
        } 
    } 
}
