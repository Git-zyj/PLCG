/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79106
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
    var_12 += ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (_Bool)1)), ((-(var_5))))) - (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) + (((((/* implicit */int) (unsigned short)53975)) * (((/* implicit */int) var_10)))))))));
    var_13 = var_3;
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [2U] = ((/* implicit */short) (_Bool)1);
        var_14 = ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_15 = ((unsigned int) (short)-32758);
                                var_16 = ((int) ((((/* implicit */_Bool) (+(arr_6 [(_Bool)1] [i_1] [1ULL])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
                                arr_15 [i_1 - 1] [(_Bool)1] [22U] [i_3] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) (-((~((((_Bool)1) ? (((/* implicit */int) arr_0 [7U])) : (0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0] [(short)8])) : (arr_9 [22U] [i_0] [i_0])))) ? (((((/* implicit */int) arr_1 [i_0 - 2])) ^ (var_1))) : ((~(((var_1) << (((((/* implicit */int) var_0)) - (1)))))))));
    }
    var_17 = ((/* implicit */short) var_1);
}
