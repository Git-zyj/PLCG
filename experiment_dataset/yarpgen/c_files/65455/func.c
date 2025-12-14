/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65455
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
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_16)), ((unsigned char)60)))) ? (((/* implicit */int) var_5)) : (var_12)));
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((min((6068592329278117044ULL), (((/* implicit */unsigned long long int) min(((unsigned char)195), (((/* implicit */unsigned char) (_Bool)1))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-5892))))) || (((/* implicit */_Bool) (~(2863541869951107554ULL))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4 - 1] [i_3] [(_Bool)1] [i_2] [i_1] [(unsigned short)11] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]);
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 6068592329278117044ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32739))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-118))))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_10 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59084))) / (arr_10 [i_0 - 1]))))));
                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_10 [i_0 - 1])))) ? (((((/* implicit */int) arr_9 [i_1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) & (((/* implicit */int) arr_9 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) arr_9 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15108)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))))));
            }
        } 
    } 
}
