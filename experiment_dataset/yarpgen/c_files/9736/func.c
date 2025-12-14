/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9736
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
    var_15 &= ((/* implicit */unsigned int) (((~(-1614210285))) - ((+(((/* implicit */int) max((var_2), (var_2))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 4])) && (((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1 - 3] [i_1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                arr_8 [i_1 - 4] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))) + (arr_6 [i_0] [i_1 + 1]))) > (max((arr_6 [i_0] [i_0]), (arr_6 [(signed char)2] [i_0])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (+((~((-(arr_2 [i_2] [i_2])))))));
                                arr_18 [i_1] [i_1] &= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)-81)))))))));
                                var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1 - 2])))) ? (((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0])))) : (((/* implicit */int) arr_4 [i_0]))));
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (arr_17 [i_1] [i_1 - 2] [i_1] [i_2 - 2] [i_2 - 1])))) ? ((-(((/* implicit */int) arr_13 [i_0] [i_1 + 1] [3] [i_1 + 1])))) : ((~(((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) var_8);
                                arr_25 [i_6] = ((/* implicit */unsigned short) (-((+(var_1)))));
                                var_20 = (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))))));
                            }
                        } 
                    } 
                }
                arr_26 [i_0] [i_1] = (-(((unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1 - 2])) && (((/* implicit */_Bool) arr_19 [i_1] [i_1 - 4] [i_0] [i_0]))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_14))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)5627)))), (((/* implicit */int) min((var_9), (var_12)))))) == ((~(((((/* implicit */int) (short)127)) ^ (((/* implicit */int) var_6))))))));
}
