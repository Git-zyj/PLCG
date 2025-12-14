/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85197
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
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) 7334070036821511929ULL);
                                var_16 = ((/* implicit */signed char) arr_10 [i_0] [i_2] [i_3] [i_4]);
                                var_17 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (arr_4 [i_3] [i_1] [i_1]))) >> (((((/* implicit */int) (short)30035)) - (30009)))));
                                var_18 *= ((/* implicit */short) var_14);
                                arr_16 [i_0] [i_3] [(_Bool)0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4)) >> (((((/* implicit */int) var_5)) + (33)))))) <= (((arr_6 [i_1] [i_1] [i_4] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))))))) || (((/* implicit */_Bool) min(((+(5409920295753321565ULL))), (((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */long long int) var_0))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((unsigned long long int) var_14)) < (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]))))), (max((((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2]))))), (((/* implicit */long long int) 4294967295U))))));
                                var_19 = max((arr_12 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */long long int) (short)-14151)));
                                var_20 -= ((/* implicit */long long int) ((unsigned short) ((min((((/* implicit */unsigned long long int) var_14)), (arr_0 [i_5]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6]))) * (((((/* implicit */unsigned long long int) 1U)) / (arr_8 [i_0]))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_22 = arr_14 [i_1] [i_1] [i_1] [i_1];
                                var_23 -= ((/* implicit */short) (~(arr_8 [i_7 + 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 &= ((short) ((4294967291U) >> (((min((((/* implicit */long long int) var_15)), (-1303853699684659305LL))) + (1303853699684659328LL)))));
    var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (!(var_10)))) * (((/* implicit */int) ((var_4) >= (1303853699684659304LL))))))), (var_7)));
}
