/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81859
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
    var_14 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4098276242U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4098276242U)) ? (var_10) : (var_11)))) : (((196691050U) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) | (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((var_3) ^ (((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) ^ (((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) / (((((/* implicit */unsigned int) -1551815131)) / (var_7)))))) / (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((4098276241U) * (var_7)))) : (((arr_2 [i_0] [i_3 + 1]) % (((/* implicit */long long int) var_12)))))))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((-(arr_7 [i_0 + 1] [i_1] [i_2 + 1] [i_3 + 1] [i_2 + 1]))))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4098276264U))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1] [i_0 + 2]))))))))))));
            }
        } 
    } 
}
