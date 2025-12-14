/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88854
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)242)))))));
    var_18 = ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)14))))), (var_16)));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1561330395U)) ? (((/* implicit */long long int) 2733636906U)) : (-119283546276080301LL)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1] [i_0 - 1]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
        var_21 ^= ((/* implicit */unsigned char) (+(264442807)));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4286)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1561330418U)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned short)511)), (-691730135)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) (~(arr_15 [i_2])));
                                var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), (arr_9 [i_1] [i_2] [i_1]))))))), (max(((unsigned char)242), (((/* implicit */unsigned char) (_Bool)1))))));
                                arr_16 [i_1] [i_4] [i_3] [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 691730136))))) | ((~(((/* implicit */int) var_11))))))));
                                arr_17 [i_1] [10U] [i_3] [(signed char)7] [i_3] |= ((/* implicit */short) (~(max((((var_2) / (((/* implicit */long long int) 96054018)))), (((/* implicit */long long int) arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 2] [i_4] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_11)))))));
                }
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)30)), (543165792)));
    }
    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
    {
        arr_22 [i_6 + 3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */signed char) (-(((((/* implicit */int) var_11)) & (max((691730135), (((/* implicit */int) var_10))))))));
        var_28 = ((/* implicit */unsigned int) arr_20 [i_6 + 4] [3U]);
    }
}
