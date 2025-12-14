/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83039
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
    var_15 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) min(((short)-2333), (((/* implicit */short) var_2))))), (max((((/* implicit */unsigned short) var_7)), (var_1))))), (max((max((((/* implicit */unsigned short) var_2)), (var_1))), (var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_2] = ((/* implicit */signed char) var_8);
                            arr_14 [i_2] [3ULL] [i_2] [i_2] = ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */signed char) var_0);
                arr_16 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_12)), (var_7)))), (min((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_13)), (var_5)))))));
            }
        } 
    } 
}
