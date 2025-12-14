/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97518
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_1 [i_3] [i_4]);
                                var_21 = ((/* implicit */int) var_15);
                                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (3626230803U)));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_1]));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (((/* implicit */long long int) arr_0 [i_2] [i_5])))))) >= ((~(13161315032371744825ULL)))));
                                var_24 = ((/* implicit */signed char) (+(((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_6])), (5285429041337806794ULL))) / (5285429041337806805ULL)))));
                                var_25 = ((/* implicit */unsigned char) arr_18 [i_0] [(unsigned short)2] [i_0]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) min(((unsigned char)255), ((unsigned char)0)))) <= (((/* implicit */int) var_19)))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_14);
}
