/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75088
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) << (((-8416187371466676692LL) + (8416187371466676710LL))))))));
        var_17 = ((((/* implicit */_Bool) (~(6223401136909625145LL)))) ? ((~(2309350902U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1985616421U) <= (2309350900U))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(1131240883)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (17179869183ULL))));
                                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_17 [(short)10] [i_1] [i_2] [i_3] [6LL]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) var_15);
    }
    for (unsigned char i_6 = 4; i_6 < 12; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)16)), (2309350895U)))) : (var_5))));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) & (arr_21 [(signed char)2])))));
        var_22 = ((/* implicit */short) ((((unsigned long long int) 1938379276961993449LL)) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1985616401U)), (max((((/* implicit */long long int) 1985616392U)), (-2251787206654921172LL))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (int i_8 = 2; i_8 < 13; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) arr_25 [i_6 + 3] [i_6 + 3]))));
                    arr_29 [i_6] [i_6] [(short)4] [(short)4] = ((/* implicit */short) (~(((arr_21 [i_6 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    var_24 = ((/* implicit */int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), ((~(var_9))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_13))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 14; i_9 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-906782141)))) ? (max((((/* implicit */int) (signed char)126)), (var_14))) : ((-(((/* implicit */int) var_4))))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned long long int) var_0)), (9478297147796759798ULL))))) : (((/* implicit */unsigned long long int) max((arr_25 [i_6 - 1] [i_9 - 1]), (arr_25 [(signed char)12] [4U]))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_38 [i_6] [i_9] [i_6] [i_9] = ((/* implicit */_Bool) (((~(((arr_34 [i_6] [(unsigned char)13] [i_10] [i_11]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) >> (((((1073741823) & (1356557419))) - (282815586)))));
                        arr_39 [i_10] |= ((/* implicit */signed char) min((((/* implicit */int) (!(((var_9) > (var_9)))))), (arr_25 [4U] [i_9])));
                        arr_40 [(unsigned char)9] [(unsigned char)9] [i_10] [i_6] [(signed char)0] = ((/* implicit */unsigned int) ((long long int) ((-906782141) <= ((~(arr_32 [5] [i_9] [5]))))));
                    }
                } 
            } 
        }
    }
    var_27 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (((/* implicit */int) var_4))));
}
