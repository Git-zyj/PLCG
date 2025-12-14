/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57769
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
    var_10 &= ((/* implicit */unsigned short) (short)32767);
    var_11 = ((/* implicit */unsigned short) ((var_6) ^ (((/* implicit */int) var_3))));
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)30765);
                    var_13 = ((/* implicit */short) max((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37038))) < (arr_5 [i_2 + 2] [i_2] [i_2]))))));
                }
            } 
        } 
        arr_8 [5U] = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned short) ((((/* implicit */int) (short)10348)) >= (((/* implicit */int) var_3))))), (arr_4 [i_0]))));
        arr_9 [i_0] [i_0] &= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_4] [i_3] = ((/* implicit */short) var_5);
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max(((~(var_5))), (((/* implicit */unsigned int) arr_16 [i_3] [i_3] [i_3] [i_3])))))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (short)32767))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))), ((-2147483647 - 1))));
                                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((-6171033880176039844LL), (((/* implicit */long long int) (unsigned char)77)))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)23))))))))));
                                arr_26 [i_3] [i_6] [i_7] = max((arr_22 [i_3] [i_3] [i_5] [i_3] [i_3]), (((/* implicit */unsigned int) arr_18 [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = (short)32767;
        var_19 = ((/* implicit */unsigned short) arr_19 [i_3] [i_3] [i_3] [i_3]);
    }
    var_20 = ((/* implicit */long long int) (short)32767);
}
