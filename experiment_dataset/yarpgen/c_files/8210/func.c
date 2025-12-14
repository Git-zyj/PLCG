/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8210
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (arr_2 [i_0] [i_0])));
        var_18 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0] [i_0]));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_5 [i_2] [i_5]);
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_12))))), ((short)(-32767 - 1))))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_19 [i_6] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)43)))) : (max((((/* implicit */unsigned int) arr_8 [i_1])), (arr_4 [i_1] [i_2])))))));
                    var_21 |= ((/* implicit */long long int) (~(((((/* implicit */int) ((signed char) 4095))) | (((/* implicit */int) var_12))))));
                    var_22 = ((/* implicit */int) var_16);
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) arr_2 [i_2] [i_7]);
                    var_24 = ((/* implicit */int) var_7);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_25 = var_1;
                    arr_26 [i_8] [i_2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 20LL))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_8]))));
                    var_26 = ((/* implicit */unsigned char) ((arr_22 [i_1]) | (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_1 - 1] [i_2])))))));
                    var_27 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) arr_2 [i_8] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_25 [i_1] [i_2]), (((/* implicit */short) var_14)))))))), (((arr_22 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((((((/* implicit */_Bool) ((arr_9 [i_1] [i_2] [i_1]) | (((/* implicit */int) var_9))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1])), (arr_10 [i_1 + 2] [i_2] [i_2])))) : ((~(((/* implicit */int) arr_7 [i_2])))))), ((+(arr_13 [i_1] [i_1] [i_1] [i_2] [i_9] [i_9]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_24 [i_2]))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) : (var_6)));
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_9]);
                        }
                        var_31 = ((/* implicit */short) ((var_8) ? ((+(((/* implicit */int) var_4)))) : (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                }
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) var_1);
}
