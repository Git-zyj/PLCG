/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58078
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
    var_18 ^= ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                arr_5 [i_1] = (-(((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_0)))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((arr_3 [i_0]) >> (((arr_3 [i_1]) - (8384179652306392149ULL))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) arr_9 [(unsigned short)7] [14U]);
        arr_11 [i_2] [i_2] &= ((/* implicit */unsigned int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))));
        var_22 = arr_8 [i_2] [i_2];
        var_23 = ((/* implicit */unsigned short) min((var_23), (((unsigned short) arr_9 [i_2] [i_2]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned int) (unsigned short)8519)))));
        var_25 = ((/* implicit */unsigned long long int) ((long long int) max((((var_2) & (var_2))), (((/* implicit */long long int) (~(arr_7 [i_3])))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_13 [i_4])))) ? (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((arr_8 [i_4] [19ULL]) & (arr_18 [(signed char)1]))));
        arr_20 [(unsigned char)3] [i_4] = ((/* implicit */short) arr_9 [i_4] [i_4]);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 3] [8LL] [i_6 + 4])) != (((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 3] [(unsigned short)1] [i_6 + 4]))));
                    var_27 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) var_16)));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14101771720873514871ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6005))) : (4294967274U)));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)8190), ((short)-6005)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_7]))) : (var_1))) : (((unsigned long long int) arr_12 [i_7] [(unsigned short)9]))));
        var_30 += ((/* implicit */short) arr_8 [i_7] [i_7]);
    }
}
