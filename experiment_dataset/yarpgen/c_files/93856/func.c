/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93856
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) 0U);
                    var_10 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) arr_2 [i_1]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (1014417004)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (short)-15584))));
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) < (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (var_9)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)136))) : ((-(var_6)))))));
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_11 [i_3] [i_3])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) + (min((((/* implicit */unsigned int) var_1)), (12U)))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (short)0);
                    arr_20 [i_5] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) max((arr_15 [i_4] [i_3] [i_4]), (((/* implicit */unsigned char) arr_14 [i_3] [i_4]))))), (arr_18 [i_3] [i_4] [i_4] [i_4 + 2]))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(-471342502))))));
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_18 [i_6] [i_6] [i_6] [i_6])), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6])) : (-1020936140)))) - (max((10U), (((/* implicit */unsigned int) 2067519560))))))));
        arr_25 [i_6] = ((/* implicit */long long int) arr_18 [i_6] [i_6] [i_6] [i_6]);
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) (-(-2041123004)))) ? (((((/* implicit */_Bool) (short)-26293)) ? (((/* implicit */unsigned int) -2)) : (0U))) : (((unsigned int) 4294967289U))))));
            var_16 = ((/* implicit */signed char) arr_21 [i_6] [i_7]);
            var_17 |= ((/* implicit */long long int) (-(((((/* implicit */int) arr_14 [i_6] [i_7])) / (((/* implicit */int) var_1))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
        {
            arr_32 [i_6] [i_8] = ((/* implicit */unsigned int) arr_21 [i_6] [i_8]);
            arr_33 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-14312)) + (2147483647))) >> (((((((/* implicit */_Bool) 0)) ? (arr_29 [i_6] [i_6] [i_8]) : (arr_27 [i_6]))) - (3959572266U)))));
            arr_34 [i_6] = ((/* implicit */unsigned char) ((signed char) arr_12 [i_6]));
        }
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (short)26304))));
    var_19 = ((/* implicit */unsigned int) var_2);
}
