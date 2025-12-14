/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90854
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) var_3);
                    arr_9 [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_4)))), (arr_7 [i_0] [i_1 - 3] [i_0])))), (arr_2 [i_2])));
                    var_18 += ((/* implicit */unsigned long long int) min((max((arr_3 [i_2] [i_2] [i_2 + 1]), (arr_3 [i_2 + 3] [i_2] [i_2 + 1]))), (((/* implicit */unsigned short) var_4))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-83)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [(_Bool)1] [i_0])) == (((/* implicit */int) var_6))))) % (((/* implicit */int) var_6))))) : (((var_9) % (((/* implicit */long long int) ((int) (short)104)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) (~(985811030U))))) > (((/* implicit */int) max((min(((signed char)-125), ((signed char)93))), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)11267))))))))));
                                var_21 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 3])))), ((-(((/* implicit */int) arr_13 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 3] [i_3]))))));
                                var_22 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_3] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_6))))), ((-(3309156265U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)64930)))) < (var_0)))), (((((/* implicit */int) max(((short)-9038), (((/* implicit */short) (signed char)121))))) * (((/* implicit */int) (_Bool)0))))));
}
