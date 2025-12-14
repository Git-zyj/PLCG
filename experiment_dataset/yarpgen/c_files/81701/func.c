/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81701
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((((unsigned long long int) (unsigned char)249)) / (10234178810277530108ULL))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [(unsigned char)7]))) ? (((unsigned int) 132120576)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10234178810277530108ULL)) ? (((/* implicit */int) arr_12 [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_3]))))) ? (((((unsigned int) arr_2 [i_3] [i_4])) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_4])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))));
                var_18 = ((/* implicit */unsigned int) ((unsigned char) ((int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) arr_11 [i_4])) : (10234178810277530125ULL)))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)253))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_0 [i_3]))));
            }
        } 
    } 
}
