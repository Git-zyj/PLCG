/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72203
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0 + 1] [i_1 + 1] = max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4207769405U))), (((/* implicit */unsigned int) arr_3 [i_1])));
                arr_7 [i_0] [i_1] [i_1 + 1] = ((/* implicit */_Bool) 87197899U);
                arr_8 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5909558307963004569LL)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1]))))) ? ((-(((((/* implicit */_Bool) 4207769405U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_0 + 1])))))) : (((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_13))))) | (((/* implicit */int) arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned short) 2040U);
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 + 2])))))));
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) 5909558307963004569LL)) ? (((/* implicit */int) (short)-20724)) : (((/* implicit */int) (unsigned short)9485))));
                            arr_13 [i_3] [i_3] [i_3] [9U] [(unsigned short)1] = ((/* implicit */unsigned char) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0 + 1] [7] [i_1 + 1] [i_1 + 1])), (var_14)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_23 = ((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((int) var_5))))) / (min((((/* implicit */long long int) (-(87197890U)))), (max((((/* implicit */long long int) var_14)), (var_1))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) arr_11 [i_5] [(_Bool)1] [(unsigned short)4] [i_4] [i_5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((~(((((/* implicit */_Bool) 1048320U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15396277899834554095ULL))))) <= (((/* implicit */unsigned long long int) var_17)))))));
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_6))));
}
