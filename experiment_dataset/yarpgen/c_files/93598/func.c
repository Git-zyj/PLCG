/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93598
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
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & (((var_1) & (arr_11 [i_1] [15U])))));
                                arr_15 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((int) (!((!(((/* implicit */_Bool) 1930405144U)))))));
                                arr_16 [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_11)) : (7125600967302396031ULL)))))) : (((((/* implicit */_Bool) max((arr_11 [i_1] [i_1]), (((/* implicit */unsigned int) -1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) : (((((/* implicit */_Bool) 4655988351695234588ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9348)))))))));
                                var_17 = ((/* implicit */signed char) arr_11 [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                arr_22 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_5])), ((unsigned short)9348))))) : ((((_Bool)1) ? (arr_17 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (1166506996485155530LL)));
                var_18 = ((/* implicit */unsigned int) max((var_18), (var_11)));
            }
        } 
    } 
}
