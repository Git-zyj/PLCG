/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74219
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (_Bool)1)))))) ? (min((((((/* implicit */_Bool) var_9)) ? (var_16) : (var_16))), (((/* implicit */unsigned long long int) ((_Bool) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_1] [i_3 - 1] [i_0])), (((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_1] [14] [i_2] [i_0])) ? (((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_11 [i_0 - 2] [i_1] [(unsigned char)8] [i_1] [i_0]))))));
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((_Bool) (unsigned short)61574))), ((unsigned short)3961)));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned char)75))))) ? (((((/* implicit */_Bool) 4968104692519695778LL)) ? (((/* implicit */unsigned long long int) 422212465065984LL)) : (arr_10 [i_1] [i_3 - 1] [i_3 - 2] [i_4] [(short)6] [i_4 - 1] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)61569)))))));
                                var_21 = (_Bool)1;
                                arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_15);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_9 [i_2] [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 3]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 140737488355327ULL)) ? (arr_8 [i_5] [i_6] [i_6] [i_5 - 1] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 850565553U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (873951420U))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_5 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4938))) : (((5050309184435139387LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61574)))))))));
                var_24 = ((/* implicit */unsigned char) var_9);
                arr_18 [i_6] [i_5] [0ULL] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)28995));
            }
        } 
    } 
}
