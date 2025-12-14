/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67441
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(arr_0 [i_0] [i_1])))) ? (arr_4 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2] [i_3]))));
                                var_18 = ((/* implicit */signed char) arr_3 [i_2]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((unsigned int) (+((+(var_13))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((+((~(((/* implicit */int) var_1)))))) >> ((((-(((/* implicit */int) (short)13677)))) + (13677))))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) / (arr_4 [i_0 + 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) var_15)) ? (arr_4 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_13);
}
