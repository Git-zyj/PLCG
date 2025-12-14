/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94200
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) arr_3 [i_0] [i_1 - 3]);
                            var_14 = ((/* implicit */signed char) min((65535ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_3 + 1] [i_2 - 1])) ? (((0) & (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_5])) ? (65535ULL) : (((/* implicit */unsigned long long int) -3605601151798154798LL)))) - (65521ULL)))))) <= (((arr_1 [14] [i_1 - 2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)4] [1LL] [i_4])))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [13U] [i_1] [i_0]))) : (var_0)));
                            var_17 = ((/* implicit */short) var_10);
                            var_18 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_26 [i_7] = ((/* implicit */unsigned int) arr_24 [i_9] [i_8 - 3] [i_7] [i_7] [i_6]);
                            arr_27 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_6])) ^ ((~(((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8 + 1] [10] [i_8 - 1]))))));
                            var_19 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_19 [i_7] [i_8 - 1] [i_9 - 1] [i_9 - 1]))))));
                            var_20 = ((/* implicit */int) (-((+(((((/* implicit */_Bool) arr_15 [1] [i_9])) ? (-3605601151798154798LL) : (((/* implicit */long long int) 1002160014))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((var_5) <= ((~((+(((/* implicit */int) var_9))))))));
                            arr_34 [i_7] [i_7] [1ULL] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) + (((/* implicit */int) arr_28 [i_7] [i_10] [(signed char)18]))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_19 [i_6] [i_7] [i_10] [i_11])) : (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) arr_22 [i_11] [i_10] [i_6] [i_6])) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(short)11] [(short)11] [i_10] [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
