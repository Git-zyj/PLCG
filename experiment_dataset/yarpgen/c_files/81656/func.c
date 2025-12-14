/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81656
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [(unsigned short)14] [i_4] |= ((/* implicit */long long int) arr_10 [i_0] [i_1] [(short)11] [i_2 + 1] [i_3] [i_4] [i_4]);
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) (signed char)-108)), ((short)-30942)))), (((long long int) var_4))))) ? (max((((((/* implicit */_Bool) 13)) ? (-5100731141288686750LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))), (var_9))) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3] [i_1])), (var_2)))))));
                                arr_13 [(unsigned char)23] [i_0] [(unsigned short)17] [i_3] [i_3] = (+((-(7418642030187337891LL))));
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)77))));
                    var_11 = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3212))) : (0U))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) >= (var_8))))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (var_8))))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (var_9)));
                var_14 = ((/* implicit */long long int) var_0);
            }
        } 
    } 
}
