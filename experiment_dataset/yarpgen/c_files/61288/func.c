/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61288
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) (-(((unsigned int) min((((/* implicit */unsigned int) (_Bool)0)), (var_16))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_13))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-106)))))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 |= ((var_6) >= (var_6));
                            arr_26 [i_8] = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
}
