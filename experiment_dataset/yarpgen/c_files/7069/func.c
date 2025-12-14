/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7069
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
    var_11 = ((/* implicit */unsigned char) (unsigned short)65535);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3] [i_4])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [(short)22] [i_2] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-15540)))) : (((/* implicit */int) min((arr_4 [i_3] [(short)23] [i_4 + 2] [i_3]), (arr_4 [i_4] [i_3] [i_0] [i_0]))))));
                                arr_14 [i_2] [i_4] [i_2] [(signed char)17] [i_4] [i_1] = ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49910))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_10);
}
