/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93834
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] &= ((/* implicit */short) (+((+(min((797940153U), (((/* implicit */unsigned int) (unsigned short)65535))))))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                arr_17 [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (signed char)-30)), (arr_0 [i_4]))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)47604)), (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (short)28022)) : (((/* implicit */int) arr_15 [i_3] [i_3])))))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (min((2527526922U), (((/* implicit */unsigned int) (short)-26895))))));
            }
        } 
    } 
    var_14 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned short)65535))))), (((unsigned int) (unsigned short)23661)));
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (int i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        {
                            arr_28 [i_8 - 3] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294963200U)), (((long long int) arr_21 [i_5 - 1] [i_6]))));
                            /* LoopSeq 4 */
                            for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                            {
                                arr_32 [i_9] [20ULL] [i_7] = ((/* implicit */long long int) (unsigned short)65522);
                                arr_33 [i_5] [i_6] [i_5] [i_8 - 3] [i_5] = ((/* implicit */unsigned char) (short)28030);
                            }
                            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                            {
                                var_15 -= ((/* implicit */long long int) (unsigned short)5);
                                var_16 = (signed char)-30;
                                var_17 -= ((/* implicit */short) (signed char)-30);
                                var_18 = ((/* implicit */short) (~(((/* implicit */int) (signed char)32))));
                            }
                            for (signed char i_11 = 2; i_11 < 20; i_11 += 1) 
                            {
                                arr_40 [i_5] [i_5] [i_6] [i_5] [i_6] [i_8] [i_11] = ((/* implicit */_Bool) var_6);
                                arr_41 [i_11 + 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned char) var_8);
                            }
                            for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 2) 
                            {
                                arr_45 [i_7] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 230177663)) ? (-1212351455006023299LL) : (1099511496704LL)));
                                arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (max((var_10), (((/* implicit */unsigned int) (unsigned short)5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 797940157U))))) : (((/* implicit */int) (unsigned short)58392))));
                            }
                        }
                    } 
                } 
                arr_47 [i_5] [i_6] [i_5 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
