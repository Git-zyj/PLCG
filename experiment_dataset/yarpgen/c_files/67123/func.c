/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67123
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0 + 2] [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_0 + 2]), (arr_1 [i_0 + 2])))) <= (((arr_0 [i_1] [5LL]) ? (arr_3 [i_0 + 2] [i_0]) : (var_9)))))) << (((((/* implicit */int) (unsigned short)65513)) - (65509)))));
                    var_13 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23709))) + (arr_3 [i_2] [i_0]))), (((/* implicit */unsigned long long int) 0LL)))) + (arr_2 [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (short)-32583))));
                                arr_24 [i_3] [i_4] [i_5] [i_3] [i_4] [i_4] [(short)9] = (-(((/* implicit */int) max(((short)-23105), ((short)23730)))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_3] [i_4] = ((/* implicit */unsigned char) 42936232);
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_6)))), (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)138)))) - (var_2)))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_8))), (((var_4) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) ((var_0) > (((/* implicit */int) (short)23709)))))));
}
