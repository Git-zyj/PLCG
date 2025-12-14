/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82226
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_1);
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0 - 3] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((arr_2 [i_0 - 3] [(_Bool)1] [i_1]) + (arr_2 [i_0 - 3] [i_0] [i_1])));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) arr_13 [i_1] [i_1] [i_0 - 1] [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(_Bool)1] [i_0 - 3] [(_Bool)1])) - (((arr_7 [i_1 + 1] [i_1 + 1] [(_Bool)1]) ? (((/* implicit */int) arr_7 [(unsigned short)2] [i_1 - 1] [(unsigned char)0])) : (((/* implicit */int) arr_7 [i_5] [i_1] [8ULL]))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((/* implicit */int) (!((_Bool)1))))));
                        arr_18 [i_5 + 1] [i_5] [i_5 + 1] [i_1] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 - 3] [i_1 - 1] [(unsigned short)12] [i_1] [i_0] [i_1 - 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_12 [i_0 - 3] [i_0 - 3] [(unsigned short)5] [i_1] [i_0] [i_1 + 1] [i_5 + 2])))))));
                        var_22 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1 + 1] [(unsigned short)6])) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 3] [2] [i_0])))))), (((/* implicit */int) var_11))));
                    }
                }
            } 
        } 
    } 
    var_23 = var_5;
    var_24 = var_5;
    var_25 += ((min((var_9), (((_Bool) var_16)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((int) ((var_15) | (((/* implicit */int) (_Bool)1))))));
}
