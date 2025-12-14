/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77247
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
    var_15 = ((/* implicit */unsigned long long int) 2027664719);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_10)))) : ((+(((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-18775))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (_Bool)1);
                                var_18 ^= ((/* implicit */_Bool) max(((+(((/* implicit */int) ((unsigned char) 3029316382U))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(unsigned char)18])) && (((/* implicit */_Bool) var_2)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) arr_17 [i_0] [i_6] [i_5] [i_6] [i_7] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_5]))))))));
                                arr_20 [(unsigned char)7] [i_0] = ((/* implicit */signed char) (unsigned short)32905);
                                var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_22 |= ((/* implicit */unsigned long long int) arr_18 [6] [i_1] [i_0]);
            }
        } 
    } 
}
