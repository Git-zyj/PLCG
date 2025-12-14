/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64567
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
    var_19 = ((/* implicit */unsigned int) (signed char)51);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)19605)) << (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 3] [i_1] [i_1 + 3])) < (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3] [i_1 + 3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1383987650888237809LL)) ? ((~(((/* implicit */int) arr_11 [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (unsigned short)960)))) : ((-(((/* implicit */int) var_9))))))));
                                arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) <= ((-(var_1))))));
                                arr_13 [i_4] [i_1 + 2] [i_1] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1]))))) >> ((((~(-9223372036854775803LL))) - (9223372036854775778LL)))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) var_18);
                    arr_17 [i_5 + 1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55650))) : (4157078721U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)219)) / (((/* implicit */int) var_15)))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_6 [i_5 - 1] [i_5] [i_5 + 1]))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) (unsigned short)25467);
                        var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_20 [i_1 + 3] [i_0])))) ? ((+(((/* implicit */int) (unsigned short)60379)))) : (((((/* implicit */int) arr_11 [i_0])) - (((/* implicit */int) arr_11 [i_0]))))));
                        arr_21 [i_1] = ((/* implicit */unsigned char) ((arr_15 [i_5 + 1] [i_5 - 1] [i_0]) - (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5] [i_5] [i_5 - 1] [i_5] [i_0])) * (((/* implicit */int) var_17)))))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) var_5))) - (arr_15 [i_5] [i_1 + 1] [i_0]))))))));
                        arr_22 [i_6] [i_5 - 2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), ((-(arr_20 [i_6] [i_0])))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_1 + 2] [i_1 + 2] [i_5] [i_1 + 2] [i_0] [i_0])) - ((-(((/* implicit */int) (unsigned short)65520))))));
                        arr_25 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_5] [i_5] [i_5] [i_5]), (arr_18 [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7 + 2] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) arr_7 [i_7 - 1] [i_5 - 2] [i_1] [i_0] [i_0])) : (var_12)))) : (((long long int) 17301056062202240337ULL)))))));
                        arr_26 [i_1] [8LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                    }
                    arr_27 [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) var_9)) - (((/* implicit */int) var_8)))) + (2147483647))) << (((((((((/* implicit */int) var_2)) != (var_3))) ? (min((arr_18 [16] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1383987650888237794LL)))) : (((/* implicit */unsigned long long int) ((long long int) var_10))))) - (1383987650888237794ULL)))));
                }
                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
}
