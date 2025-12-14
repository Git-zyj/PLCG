/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85057
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
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */_Bool) min((min((((/* implicit */short) (unsigned char)218)), (min((arr_3 [(unsigned short)7] [i_1] [i_1]), (((/* implicit */short) var_2)))))), (((/* implicit */short) (signed char)40))));
                arr_5 [i_0] &= ((/* implicit */signed char) min(((_Bool)1), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) (signed char)-48))))));
                arr_6 [i_1] [9] [(unsigned char)1] |= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_3 [i_0 - 2] [i_0] [i_0 - 2]), (arr_3 [i_0 - 2] [i_0] [i_0 - 2])))), (arr_0 [i_0 - 2])));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (min((((var_9) % (((/* implicit */unsigned int) var_15)))), (arr_1 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_14))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_4) << (((((/* implicit */int) var_6)) - (1))))) % (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((((/* implicit */int) var_14)) / (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_23 [i_2] [i_3] [i_2] [(short)10] [6ULL] = ((min((var_12), (((/* implicit */unsigned int) arr_18 [i_3] [i_4 - 1])))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))));
                                arr_24 [(_Bool)0] [i_2] [i_4 - 1] |= ((/* implicit */unsigned long long int) var_13);
                                arr_25 [i_4] [i_3] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((short) arr_17 [1] [6LL] [6LL])))))));
                            }
                        } 
                    } 
                } 
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_3 + 1] [i_3 - 1] [i_3 - 1]), (((/* implicit */long long int) arr_18 [i_2] [i_3 - 1]))))) ? (((arr_18 [i_2] [i_3 - 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_18 [i_2] [i_3 - 1])))) : (0)));
                var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-48)) * (((/* implicit */int) (_Bool)1))))), (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_14)))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_21 &= ((/* implicit */signed char) (_Bool)1);
                            arr_31 [i_3] [i_3] [i_3] [i_8] [i_3] = ((/* implicit */_Bool) min((max((((/* implicit */int) (signed char)-79)), (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (-1892066225) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned short)30674))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (signed char i_10 = 2; i_10 < 12; i_10 += 4) 
                    {
                        for (int i_11 = 3; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_17 [(unsigned short)10] [i_9] [i_10])))));
                                arr_40 [(signed char)10] [i_3] [i_3] [i_3] [i_10 + 1] [i_10 - 2] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (-1541318358) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_1))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -8582392710709256009LL)) ? (((/* implicit */unsigned long long int) -7023000932732584463LL)) : (17873661021126656ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
