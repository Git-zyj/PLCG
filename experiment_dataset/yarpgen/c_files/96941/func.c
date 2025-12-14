/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96941
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3])) & ((-(((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2 + 1]))))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]);
                                arr_14 [i_4] [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~((+(min((((/* implicit */int) (unsigned short)65535)), (-1315586269)))))));
                                arr_15 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_2] [i_3 - 1] [i_3 + 1]), (((/* implicit */unsigned char) var_2)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_2])) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 3] [(_Bool)1] [i_1]))))), (var_14)))));
                    arr_16 [i_1] = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned int) (unsigned short)21660)), (693548966U))))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */short) min(((~(var_4))), (((/* implicit */unsigned int) var_15))));
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) ((short) var_7))))));
    var_21 = ((/* implicit */unsigned int) var_12);
    var_22 = ((/* implicit */_Bool) (~(var_6)));
}
