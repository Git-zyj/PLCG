/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95633
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((short) ((_Bool) (unsigned short)41182)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(short)11] [i_2 - 1] [i_1] [0U] [(short)11] [i_2] = ((/* implicit */signed char) ((_Bool) ((signed char) -1447963107703905104LL)));
                                arr_14 [i_0] [i_0] [(signed char)3] [i_2] [i_0] [i_3] [i_2] = ((/* implicit */int) ((((unsigned long long int) var_0)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) var_5)) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)16454)))) ^ (((long long int) var_2))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)16454))) && (((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
}
