/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56718
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (-1026373124)))))))));
                    var_11 = ((/* implicit */int) min((var_3), (((/* implicit */long long int) (-(-1026373121))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_1] [i_2 + 2] &= ((/* implicit */long long int) (~(((-1434553127) | (((((/* implicit */int) (unsigned short)12644)) >> (((1636439349) - (1636439321)))))))));
                                var_12 = (~((~(var_6))));
                                var_13 = ((/* implicit */signed char) var_8);
                                arr_13 [20] [i_0] [15] [i_0] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) (+(min((var_6), (((/* implicit */long long int) (unsigned short)12632))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (-(((max((((/* implicit */unsigned long long int) var_6)), (var_2))) % (((/* implicit */unsigned long long int) var_6))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 1205639128)) >= ((-(var_2)))))), ((~(var_0)))));
}
