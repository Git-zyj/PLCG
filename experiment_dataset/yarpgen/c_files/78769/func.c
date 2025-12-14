/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78769
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
    var_10 = ((/* implicit */short) 46694149);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_1])))) ? (((arr_4 [i_1] [i_1]) ^ (arr_4 [i_0] [i_1]))) : (max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)0))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (+(-695998167789806741LL)));
                                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((long long int) var_6)))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((short) (short)0)))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)65531);
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [(short)10]);
            }
        } 
    } 
}
