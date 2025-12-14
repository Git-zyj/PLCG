/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92427
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) var_13));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_16 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */short) var_15);
                                arr_19 [i_1 + 3] [i_2] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_9 [i_1])) / (((/* implicit */int) arr_7 [i_1 + 4] [i_1 + 4])))), ((~(((/* implicit */int) var_2))))));
                                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) (signed char)123)), ((short)31213))))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                                arr_21 [i_1] [i_1] [i_5] [i_1] [i_5] [i_3] [i_1] = ((/* implicit */short) (~(((min((((/* implicit */long long int) var_14)), (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5]))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (signed char)-123))))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (((arr_14 [i_1] [i_1] [i_3] [i_1 + 3] [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [(unsigned char)19] [i_2] [i_1 + 3])))))));
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) var_13);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_6] [i_6]))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [(short)10])) / (((/* implicit */int) arr_9 [(unsigned short)8]))));
        arr_27 [i_6] = ((/* implicit */long long int) var_8);
        var_19 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)26002))))));
    }
    var_20 = var_4;
}
