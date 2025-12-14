/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59944
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((13277570601657569881ULL), (((/* implicit */unsigned long long int) (unsigned char)234)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] = ((/* implicit */unsigned char) (~(min((-4518249855670902498LL), (-1LL)))));
                                arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2731)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6750)) >> (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-4411))));
                                var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1326451460))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) == (((/* implicit */int) ((short) 6ULL)))))) | (((/* implicit */int) var_8))));
    var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                var_21 *= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4411))) * (arr_9 [i_6] [7LL] [i_5] [i_5] [i_5])))));
                arr_20 [i_5] [i_6] [i_5] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned short) (short)-4407)), ((unsigned short)7678))));
            }
        } 
    } 
}
