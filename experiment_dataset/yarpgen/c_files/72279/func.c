/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72279
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (-(3751226464U)))) * (((long long int) (_Bool)1))))));
                var_21 = ((/* implicit */_Bool) min((min((((((/* implicit */unsigned long long int) arr_4 [(signed char)9])) + (arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [(short)21]) && (((/* implicit */_Bool) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(unsigned char)14] [i_1])) > (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                arr_7 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */long long int) (!(arr_10 [i_0] [i_0] [i_0])));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (unsigned char)199)))) == (((/* implicit */int) max((var_12), (((/* implicit */signed char) (_Bool)0))))))))) + (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */long long int) arr_4 [i_0])), (var_19))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(signed char)1]))))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [(unsigned char)19] [i_0] [i_1] [(unsigned char)19] [i_1]))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [(unsigned char)18] [i_0] [i_0] [i_0] [i_1])) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) arr_0 [i_1])) ^ (arr_1 [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_18);
    var_24 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 11; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned int) arr_3 [i_5] [i_5]);
                var_26 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) 6573903430552248027LL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) arr_18 [i_5])))) : (((/* implicit */int) min((var_2), (((/* implicit */short) (_Bool)1))))))) + (52)))));
                arr_22 [i_5] = ((/* implicit */long long int) max(((short)22301), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_8))))))));
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_20 [i_5] [i_5])), (min((((/* implicit */unsigned short) arr_14 [i_5] [i_5] [i_6 - 2] [i_6] [(unsigned short)20])), (arr_5 [i_5] [i_5]))))))));
                arr_23 [i_5 - 2] [i_5] [i_6] = ((/* implicit */int) (((+(min((arr_1 [i_5 - 1]), (((/* implicit */unsigned long long int) var_2)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_5] [10])))));
            }
        } 
    } 
}
