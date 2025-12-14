/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63736
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
    var_11 = ((/* implicit */unsigned short) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [(short)8] [i_1] [(short)8] [i_3]), (((((/* implicit */_Bool) 2376603060U)) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (14U)))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3))))));
                            var_13 = ((/* implicit */unsigned char) ((short) (-((+(4294967270U))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967270U), (((/* implicit */unsigned int) arr_0 [i_1] [i_0]))))) ? (var_9) : (((/* implicit */unsigned int) (+(-1584551077))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)195)))) : ((-(((4294967270U) >> (((((/* implicit */int) var_6)) - (142)))))))));
            }
        } 
    } 
}
