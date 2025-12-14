/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7020
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
    var_12 -= ((/* implicit */_Bool) (short)-5501);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5500)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5501))) : (622372020332253617LL)))), (arr_9 [i_2] [i_3] [i_2] [i_1] [i_2]))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_2]), (((/* implicit */unsigned char) var_10))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) -441238967))))))))) ? (max((((/* implicit */long long int) arr_12 [i_4] [i_3] [(short)11] [i_0])), (-622372020332253604LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) ((short) arr_11 [i_4] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((arr_5 [i_5] [i_2]), (((/* implicit */long long int) var_6)))) + (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) + (622372020332253609LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (short)32027)) / (((/* implicit */int) arr_13 [i_2] [(unsigned char)9] [i_5]))))))) : (max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_6])) ? (((/* implicit */long long int) 179510081U)) : (arr_5 [i_1] [i_6 - 1])))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (1325886004)));
                                arr_19 [i_0] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */short) max(((-(((/* implicit */int) (unsigned short)17862)))), (((((/* implicit */int) (unsigned short)24936)) % (((/* implicit */int) max((((/* implicit */short) (unsigned char)58)), ((short)32765))))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [i_5] [i_6 - 1]), (arr_8 [i_0] [i_1] [i_0] [(unsigned char)2] [i_6 + 2]))))) : (arr_9 [i_6 + 2] [i_1] [i_2] [i_5] [i_5])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
