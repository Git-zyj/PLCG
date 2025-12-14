/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70952
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
    var_19 = ((/* implicit */short) max((min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) ((unsigned char) var_2))))), (((/* implicit */int) min((((short) (_Bool)1)), (var_15))))));
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))), ((((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */int) var_17)) + (((/* implicit */int) (unsigned short)15808)))) : (((/* implicit */int) max((var_15), (((/* implicit */short) (_Bool)1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)17313))))) : (((/* implicit */int) var_9))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 1])) ? (arr_0 [i_1 - 1] [i_1]) : (arr_0 [i_1 + 1] [i_0])));
            var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) var_9);
            var_25 &= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0])))));
        }
        for (unsigned short i_3 = 2; i_3 < 12; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_5] [i_0] [i_0] [0ULL] |= (short)3371;
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-20633)) : ((+(((/* implicit */int) (short)-25896))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((arr_16 [i_3 + 3] [i_5]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37190)) ^ (((/* implicit */int) var_14)))))));
                        arr_19 [i_5] |= ((/* implicit */short) ((unsigned long long int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-30099))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) arr_7 [i_3 + 4]);
        }
        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_0] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6587)) ? (((/* implicit */int) var_15)) : (arr_14 [i_0] [i_6 + 3] [i_0] [i_0])));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((arr_17 [i_6 + 2] [i_6 + 2]) * (((/* implicit */unsigned long long int) 23413510U)))))));
        }
        var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (short)10677))));
        var_32 = ((/* implicit */short) max((var_32), (arr_10 [i_0])));
    }
}
