/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71324
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
    var_11 = ((/* implicit */unsigned short) max(((~(((((/* implicit */int) (unsigned short)19024)) | (((/* implicit */int) var_1)))))), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 *= ((max((((/* implicit */unsigned long long int) 3341874362U)), (arr_2 [i_0]))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | (((arr_2 [17ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(unsigned short)13]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_6))))));
                                var_13 *= ((/* implicit */unsigned char) -2185788714328204855LL);
                                var_14 *= ((/* implicit */signed char) (~(((/* implicit */int) min((arr_10 [i_4] [i_4] [3] [i_4] [i_3 - 1]), (var_8))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) 2075287835860402032LL))))), ((+(arr_0 [i_0])))))) || (((/* implicit */_Bool) 16302229361154609005ULL))));
                arr_13 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) min((2185788714328204854LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)88)) | (((/* implicit */int) arr_9 [i_0] [i_0] [7ULL] [(short)0] [i_0]))))))));
            }
        } 
    } 
}
