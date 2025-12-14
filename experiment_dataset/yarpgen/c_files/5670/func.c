/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5670
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) (~(3956120775U)));
                arr_8 [i_1] = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [i_2] [i_4] = ((/* implicit */short) var_16);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (-((~(3956120775U)))));
                                var_19 = ((((((/* implicit */_Bool) 338846521U)) || (((/* implicit */_Bool) 3956120775U)))) ? ((~(var_10))) : (((/* implicit */long long int) (-((-(((/* implicit */int) arr_24 [i_2] [i_3] [i_2] [6] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((var_4) >> (((var_6) - (2745807772U)))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            for (long long int i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 338846521U)) ? (var_10) : (((/* implicit */long long int) 3956120775U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_2)) : (arr_3 [4LL])))) : (arr_11 [i_8 + 1] [i_7]))), (((/* implicit */unsigned long long int) (~(((int) 1264460124U)))))));
                    arr_32 [i_7] [5LL] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-25085)) + (2147483647))) << (((((((/* implicit */int) (short)-25070)) + (25076))) - (6)))))) >= (min((((/* implicit */unsigned long long int) 4272539545U)), (16212030996053979267ULL)))))) * (((/* implicit */int) arr_25 [i_8]))));
                }
            } 
        } 
    } 
}
