/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57802
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) var_2)), ((+(var_4)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */long long int) var_7);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2])) / (((/* implicit */int) arr_2 [i_2]))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (1425990989U) : (1425990989U)))) ? (((/* implicit */int) arr_7 [i_0 - 2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [(unsigned short)10])))))));
                            var_22 -= ((/* implicit */unsigned long long int) var_8);
                            arr_10 [i_1] [(unsigned short)13] [(unsigned short)13] [i_1] [(short)12] [i_1] = ((/* implicit */unsigned char) (+(min(((+(arr_9 [(unsigned char)1] [(short)2] [i_2] [i_3]))), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                            var_23 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max(((-(1425990989U))), (min((1425990999U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))));
                var_25 ^= ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (((+(arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1]))) ^ (((/* implicit */unsigned long long int) (-(((1425990989U) / (((/* implicit */unsigned int) var_7)))))))));
                                var_27 *= ((/* implicit */short) 1425990999U);
                                arr_25 [i_4] [i_6] [i_6] [(short)2] [i_8] = max((2868976307U), (((/* implicit */unsigned int) (+(var_16)))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
}
