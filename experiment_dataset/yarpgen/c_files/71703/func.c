/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71703
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
    var_17 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 += (-(((unsigned long long int) var_8)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [9] = ((/* implicit */unsigned short) (((~(var_5))) != (((((int) arr_8 [14ULL] [14ULL] [14ULL] [i_2])) + (((/* implicit */int) (unsigned char)200))))));
                                arr_17 [i_3] [i_1] [i_1] [i_1] [i_4] |= ((/* implicit */long long int) (!(((max((((/* implicit */unsigned long long int) (short)25206)), (2147483520ULL))) > (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_1 + 2]))))));
                                var_19 &= ((/* implicit */unsigned short) (((+(((unsigned long long int) (short)25206)))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)25206)))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2017606356)) ? (arr_5 [i_1 - 1] [i_3] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_3] [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) -4885688362775611133LL))));
                                var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_1 + 2])), (var_13))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)24437))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((unsigned short) var_0));
}
