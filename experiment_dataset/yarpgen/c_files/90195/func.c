/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90195
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [4ULL] [i_1] = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (arr_0 [i_0 + 3]) : (((/* implicit */int) (_Bool)1)))), (min((arr_2 [i_0 + 3]), (((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_3] [i_3 - 2] [i_2] [i_2])), (var_4)))) ? (((((/* implicit */_Bool) (-(arr_3 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))) : (3008709258U))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (short)4032))))), (3008709258U)))));
                            arr_13 [i_1] [i_1] = ((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_2] [i_0 - 1]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((max((16383ULL), (12351347908140181055ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_0])) : (((((/* implicit */_Bool) 1286258038U)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)-29983)))))))));
                var_20 = ((/* implicit */unsigned long long int) 1286258022U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 3] [i_4 - 1] [i_4] [i_4 - 2] [2U]))) == (4194176469U))) ? (arr_4 [i_4] [i_4] [(unsigned char)13]) : ((~(arr_9 [i_5])))));
                var_22 = ((/* implicit */int) var_11);
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned int) min((((5044725787958826886ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (max((var_1), (((/* implicit */unsigned long long int) (short)6012))))));
                                var_24 = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)6012)))), (var_11))) == (var_10)))));
                            var_26 = ((/* implicit */unsigned long long int) (unsigned char)81);
                        }
                    } 
                } 
            }
        } 
    } 
}
