/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7775
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
    var_11 = ((/* implicit */unsigned short) (((~(((/* implicit */int) max(((signed char)90), (((/* implicit */signed char) var_9))))))) < ((((+(var_10))) + (((/* implicit */int) (short)-15255))))));
    var_12 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (((((/* implicit */int) (short)8824)) / (((/* implicit */int) (signed char)-90))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) var_4);
                                var_14 = ((/* implicit */unsigned short) (!(var_9)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_0 [i_1])))) / (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (arr_2 [i_2 - 1])))));
                }
            } 
        } 
    } 
}
