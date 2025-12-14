/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88257
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((((/* implicit */_Bool) 1936898110U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_1])))))))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) var_11)), (1936898126U)))))));
                var_18 += (!(((/* implicit */_Bool) var_5)));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned int i_5 = 4; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) 1541647512U)) : (((arr_15 [i_5] [(unsigned short)10]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (arr_10 [i_2]))))))));
                            arr_16 [(unsigned short)13] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 + 2] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_8 [i_3 + 2] [i_5 + 1])) : (((/* implicit */int) arr_11 [i_3 + 2] [i_5 + 1] [i_5 + 1]))))) : (2958880327U)));
                            arr_17 [i_2] = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_3 - 1] [i_3 + 3]));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 2358069186U)) ? (var_1) : (((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) -1761342857)) : (arr_4 [i_4] [i_3] [i_2]))))));
                        }
                    } 
                } 
                arr_19 [i_2] [16U] = ((/* implicit */unsigned int) arr_8 [i_3] [i_2]);
                arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) 4294967295U);
                arr_21 [i_2] = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_11);
}
