/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85853
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
    var_17 = 8922500622855347020ULL;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_7)))))), (min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1 - 2]))))));
                            arr_9 [i_0] [(signed char)13] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)0))));
                            var_19 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_0])) || (((/* implicit */_Bool) 6926947729189467814LL))))));
                            arr_10 [i_2] [i_2] &= ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                var_20 = max((((/* implicit */unsigned short) max((arr_2 [i_1 + 2]), (arr_2 [i_1 - 1])))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36494))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            {
                arr_15 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((var_8) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6778771318216888186LL)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned short)29042)))))))), (max((((/* implicit */long long int) (signed char)2)), (arr_12 [i_4] [i_5])))));
                arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((arr_12 [i_5] [(_Bool)1]) & (arr_12 [i_4] [i_5]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_8)) < (((/* implicit */int) var_5))))))))));
            }
        } 
    } 
}
