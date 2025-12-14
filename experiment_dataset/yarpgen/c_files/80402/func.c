/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80402
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
    var_17 *= ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_14)), (var_2)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(max(((+(1452870980U))), (((/* implicit */unsigned int) arr_3 [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((((unsigned long long int) arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_1])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 1])))))));
                                var_20 = ((/* implicit */_Bool) max((min(((short)1452), ((short)-10687))), (((/* implicit */short) max((arr_10 [i_2] [i_1 + 3] [i_0 - 2] [i_3] [i_1]), (((/* implicit */unsigned char) var_12)))))));
                                var_21 = ((/* implicit */short) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100))))), ((-(((/* implicit */int) var_13)))))) & (((/* implicit */int) (unsigned char)254))));
                            }
                        } 
                    } 
                    arr_11 [i_0 + 1] [i_1] [i_2] = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    var_22 = (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)23)), ((short)-4773))))))));
}
