/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99501
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26444))) < (arr_7 [i_2] [i_1] [i_0])))))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-32751))))));
                    var_10 &= ((/* implicit */unsigned short) var_3);
                    var_11 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1]) - (var_2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3 - 1] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (short)32763)) - (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) (short)-32740)), (arr_7 [i_1] [i_2 + 2] [i_4])))))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned int) max((arr_6 [i_4] [i_4] [i_4 + 1] [i_2 - 2]), (-1505098329)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_9);
}
