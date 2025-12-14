/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96382
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = var_12;
                var_16 = ((/* implicit */unsigned long long int) -574217381);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 &= ((/* implicit */int) arr_10 [22] [i_1] [i_0] [i_4]);
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4235166725766191762ULL)) ? ((+(3458764513820540928ULL))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14987979559889010709ULL)))));
                                arr_13 [5] [5] [i_1 + 3] [(unsigned short)0] [i_1] [16U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * ((+(arr_12 [(short)4] [3ULL] [i_2])))))) <= (((arr_2 [i_2 + 3] [2U]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_1] [i_1])))))));
                                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_1))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((14987979559889010665ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) var_5))))) <= (16777208))))));
}
