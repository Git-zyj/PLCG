/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61727
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
    var_20 = var_9;
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((((/* implicit */int) arr_5 [(short)9] [i_2] [i_2] [i_0 + 1])) + (2147483647))) << (((var_12) - (1347557069))))) : (var_7)));
                                var_21 = ((/* implicit */long long int) ((max((((/* implicit */long long int) var_8)), (var_11))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_1))));
                                var_24 = ((/* implicit */unsigned char) arr_19 [i_6] [i_2] [(short)15] [i_1] [i_2] [12]);
                                arr_21 [(short)13] [i_2] [i_2] [i_5] [i_6 + 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)54787)) : (((/* implicit */int) (unsigned short)51018))))) ? (var_5) : ((+(((/* implicit */int) (signed char)126))))))), (min((max((((/* implicit */unsigned int) var_2)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) - (((/* implicit */int) var_15)))))))));
                                var_25 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) arr_16 [i_2 + 1] [i_2 - 1] [13U]))), (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)105)), (var_7)))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_6 [5ULL] [i_2] [6] [6]))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_1] = ((/* implicit */short) var_1);
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (unsigned short)54787))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (int i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                {
                    arr_31 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) arr_26 [i_9] [i_8]))));
                    arr_32 [i_9] [i_7] [i_7] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) var_1)) < (var_16))))));
                    arr_33 [i_8] [(short)10] [(_Bool)1] [i_8] = var_18;
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) var_15))))), (arr_9 [i_7] [i_7 - 2] [i_7 + 2] [i_9 - 1] [i_7] [i_9])))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((var_19), (((/* implicit */signed char) var_9)))))))));
}
