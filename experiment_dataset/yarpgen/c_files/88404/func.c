/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88404
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
    var_13 = ((((int) var_10)) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-20954)), (510552127U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 3784415178U))))) : (var_2))) - (1))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-((-(((/* implicit */int) ((unsigned char) var_3))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 += ((/* implicit */unsigned long long int) min((510552127U), (((/* implicit */unsigned int) (unsigned char)11))));
                    var_16 |= ((/* implicit */signed char) max((1002544988), (((/* implicit */int) ((short) (+(var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned char) ((((var_6) >> (((var_6) - (3759369386773690341ULL))))) <= (((/* implicit */unsigned long long int) (+(var_12))))))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (1446659893U)));
                                var_19 = min((((/* implicit */unsigned long long int) var_12)), ((-((~(var_5))))));
                                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((min((3784415169U), (((/* implicit */unsigned int) var_7)))) > (((/* implicit */unsigned int) arr_11 [i_3] [i_0]))))), ((unsigned short)7800)));
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_3] [(_Bool)1] [i_4] = ((/* implicit */long long int) arr_4 [i_1] [i_3] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
