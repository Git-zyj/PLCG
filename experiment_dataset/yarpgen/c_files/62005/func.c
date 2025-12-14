/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62005
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
    var_12 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (unsigned short)14356)), (((unsigned long long int) var_3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_3 [i_1] [i_1])))));
                var_14 *= (+((+(((/* implicit */int) ((arr_3 [6] [i_1]) && (arr_2 [i_0] [i_0])))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (unsigned short)51174));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) var_7);
                                arr_16 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_8] [(short)2] [i_7] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3])) * (((/* implicit */int) arr_7 [i_8]))))) ? (max((((/* implicit */long long int) var_8)), (var_0))) : (((/* implicit */long long int) ((int) var_8)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_17 [i_8] [i_7] [8LL] [8LL])))))))));
                                var_16 = ((((/* implicit */_Bool) min((var_4), (arr_12 [i_2] [i_3] [i_4] [i_2] [i_3])))) ? (arr_11 [i_2] [10LL]) : ((((!(((/* implicit */_Bool) var_1)))) ? (arr_11 [i_2] [i_8]) : (arr_6 [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
