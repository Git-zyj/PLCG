/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95578
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
    var_20 = var_6;
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = ((short) ((((/* implicit */unsigned long long int) (+(var_15)))) & (min((((/* implicit */unsigned long long int) var_17)), (var_6)))));
                                var_21 *= ((/* implicit */short) (((+((-(var_7))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_17) : (var_17))))))));
                                arr_15 [i_4] [2] [i_0] [i_0] [2] [i_0] |= ((/* implicit */unsigned short) var_7);
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((unsigned short) ((var_9) ^ (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */short) (~(((int) ((long long int) var_7)))));
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */short) (+(var_9)));
}
