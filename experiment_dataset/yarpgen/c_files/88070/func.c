/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88070
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (14942)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) (short)-8266))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_2] [(short)7]) - (((/* implicit */long long int) ((/* implicit */int) max(((short)-30148), (((/* implicit */short) (signed char)103))))))));
                            var_17 = ((/* implicit */unsigned long long int) (-(arr_9 [i_0] [i_3] [i_2] [i_3])));
                            var_18 = ((((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)11))))))) - (max(((+(var_14))), (((/* implicit */long long int) (+(var_3)))))));
                            arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)7] [i_3]);
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-30148);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = (-((-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) / (arr_5 [i_0] [i_1]))))));
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) 9223372036854775807LL)))));
                var_20 = ((/* implicit */short) (~(11326001272685946408ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))) : (((/* implicit */unsigned long long int) max((var_7), (var_7))))));
}
