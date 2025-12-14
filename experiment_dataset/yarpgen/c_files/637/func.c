/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/637
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3521294680U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (min((((/* implicit */unsigned int) var_6)), (122880U))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) | ((~(((/* implicit */int) var_3)))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((122883U) - (122881U)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) : (122880U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))))));
                                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2 - 1] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 - 3] [i_2 - 1])))), ((~((-(((/* implicit */int) arr_6 [i_3] [i_1] [i_2 + 1] [i_2]))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_2] [i_0])) : (((/* implicit */int) arr_1 [i_2] [i_2 - 2]))))))))) - ((+(max((arr_12 [i_4] [(unsigned char)5] [i_2] [(unsigned char)5] [(signed char)0] [(unsigned char)5]), (((/* implicit */unsigned int) (unsigned char)249))))))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)249)) ? (4294844430U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) arr_0 [i_2] [i_1]))) : (((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_2] [(unsigned char)4] [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((signed char) max((arr_13 [i_0 + 1] [i_2] [2LL] [i_5] [i_0 + 1]), (arr_13 [i_0] [i_2] [i_0] [i_5] [i_6]))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_2))));
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_13))))))));
                            }
                        } 
                    } 
                    var_23 -= min((((/* implicit */unsigned int) arr_2 [i_2 + 1] [i_0 + 3])), (min((122862U), (4294844415U))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) arr_2 [i_7] [i_7]);
                /* LoopNest 3 */
                for (short i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9 + 3] [i_9 - 1])) ? (((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 3] [i_9 - 1])) : (((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 3] [i_9 - 1])))))));
                                arr_38 [i_10] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_2 [i_9 - 2] [i_9 - 1])) ^ (((/* implicit */int) arr_30 [i_8] [i_8] [(signed char)10]))))));
                                arr_39 [(short)8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4294844433U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7] [i_8])) || (((/* implicit */_Bool) var_1)))))) : (((unsigned int) arr_26 [i_10] [i_8]))))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8] [i_8] [i_7]))) == (var_2)))), (((short) arr_16 [i_10]))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_7] [i_10] [i_11])) < (((/* implicit */int) ((unsigned char) 4294844455U))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */signed char) min((var_26), (arr_29 [i_7] [i_7] [i_7] [i_8])));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((signed char) 4294844430U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 4294844415U)) ? (4294844414U) : (4294844433U))))));
}
