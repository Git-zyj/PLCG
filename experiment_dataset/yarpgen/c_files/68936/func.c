/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68936
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
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? ((+(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) (((((+(var_1))) % (((/* implicit */unsigned long long int) -1429370756)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) (unsigned short)47507)) || (((/* implicit */_Bool) var_15))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [(signed char)4] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                                var_20 *= ((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) ? (((var_8) / (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                                var_21 = ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [10LL] &= ((((/* implicit */int) var_4)) & (((/* implicit */int) var_10)));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (+(var_14)));
}
