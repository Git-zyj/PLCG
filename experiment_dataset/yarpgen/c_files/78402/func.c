/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78402
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
    var_18 = ((/* implicit */unsigned char) ((unsigned short) ((max((var_9), (((/* implicit */long long int) var_2)))) < ((-(var_7))))));
    var_19 = ((/* implicit */unsigned char) ((var_16) - (var_6)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((15877023353971626783ULL) < (2569720719737924832ULL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_0 [i_4 - 4]);
                                arr_12 [i_0 - 3] [i_1] = ((/* implicit */unsigned long long int) (-(((((((arr_9 [i_0] [i_0 + 1]) + (9223372036854775807LL))) >> (((var_15) + (1387314072536478018LL))))) ^ (((arr_9 [i_4] [i_1 + 2]) / (var_7)))))));
                                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2])))))));
                                arr_13 [i_4 + 1] [i_3] [i_2] [i_1 + 1] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(0U)))))))));
                                arr_14 [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62640))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (max(((-(arr_10 [i_0] [i_0] [i_1] [i_1] [i_1 - 2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) (+(((var_13) / (arr_0 [i_0]))))))))));
                    var_23 = max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) : (3204554926U)))))), ((+(arr_3 [i_0 + 1]))));
                }
            } 
        } 
    } 
}
