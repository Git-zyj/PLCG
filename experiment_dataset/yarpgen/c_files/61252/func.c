/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61252
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
    var_11 = ((/* implicit */unsigned short) var_9);
    var_12 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((arr_4 [i_0] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) (+((~(((/* implicit */int) var_8)))))))));
                arr_9 [i_0] = ((/* implicit */unsigned int) (-(((((((long long int) -1196951567)) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (182)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_0]))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((var_3) + (2147483647))) << (((var_9) - (3764521)))))) || (((/* implicit */_Bool) ((short) var_5))))))));
                                var_13 *= ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
