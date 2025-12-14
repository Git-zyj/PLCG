/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9016
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_0))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) 3475997309U)))))));
    var_20 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (~(var_9)))), (((unsigned long long int) var_12)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) ((signed char) 537237276U)))))))));
    var_21 &= ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_22 -= ((/* implicit */long long int) arr_2 [15LL]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */short) arr_7 [i_4] [i_1]);
                                var_23 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-1), (min((1818071806), (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) -2982465129420077952LL)) ? (arr_11 [i_0] [i_0] [i_0] [i_1]) : (arr_11 [4U] [i_1] [(short)18] [i_1])))));
                                var_24 = var_13;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
