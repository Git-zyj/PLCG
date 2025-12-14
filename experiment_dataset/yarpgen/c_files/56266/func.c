/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56266
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
    var_12 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned char) var_11))));
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9054336743012724252ULL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_10)))))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_8)))))));
    var_14 = ((/* implicit */signed char) ((((var_0) <= (((/* implicit */int) var_10)))) ? (((/* implicit */int) (short)-104)) : (var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3]) != (((/* implicit */unsigned long long int) var_4)))))) | (((unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (-2589891810764863263LL) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 701766331)) > (8191U)))) : (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4])) - (var_7)))))));
                                var_15 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(arr_10 [i_4] [i_1] [i_1] [i_0])))) ? ((~(arr_12 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] [5LL]))) : (max((((/* implicit */int) var_5)), (-701766331))))) <= (max((((((/* implicit */_Bool) 377530473)) ? (((/* implicit */int) var_6)) : (-485953294))), (((var_0) - (701766338)))))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_2] [11] [i_3] [i_4] [5ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((((/* implicit */long long int) -1996318174)) | (var_1))) <= (((/* implicit */long long int) 701766334))))) : (max((max((var_4), (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) arr_2 [i_0]);
                    arr_17 [i_2] [(unsigned char)21] [i_0 + 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))) && (((/* implicit */_Bool) var_6))))) : ((~(701766331))));
                }
            } 
        } 
    } 
}
