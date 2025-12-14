/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73115
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
    var_20 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = var_8;
                arr_5 [i_0 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) 2906532945U))))), (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_0])))))) == ((-(((/* implicit */int) (short)4))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_16 [10LL] [i_2] [i_2] [i_3 + 1] [i_4] = ((/* implicit */long long int) ((unsigned short) (short)-11));
                                arr_17 [i_2] [i_4] = ((/* implicit */long long int) max((max((min((var_7), (((/* implicit */unsigned long long int) arr_14 [i_2] [i_1] [(unsigned char)0] [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_12 [1] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4]))) : (var_5))))), (((/* implicit */unsigned long long int) ((var_4) / ((~(((/* implicit */int) (short)0)))))))));
                                arr_18 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_10)))) ^ (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_7);
}
