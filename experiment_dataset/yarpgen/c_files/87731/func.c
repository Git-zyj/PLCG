/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87731
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
    var_14 &= ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_3)) ? (var_7) : (var_2))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)88)), (-676579743416296961LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)-12409)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_3]))))) * (arr_2 [i_0] [i_0])));
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_1] [i_2]), (arr_0 [i_2] [i_3]))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) min(((short)-12409), ((short)-12409))))), (((arr_0 [i_0] [i_1]) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (676579743416296961LL))))))));
                arr_13 [i_1] = ((/* implicit */unsigned int) (-((~((~(1536452124361053400LL)))))));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1])) : (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_15 = ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1500942731U)) : (var_7))));
}
