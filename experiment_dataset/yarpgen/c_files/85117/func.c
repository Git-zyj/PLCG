/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85117
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
    var_10 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_9))))), (var_5)))));
    var_11 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) var_4))));
    var_12 = ((((/* implicit */_Bool) var_9)) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_0)) : (var_3))), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2115008680965873630ULL)) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned short)3998)))) : (var_6)))));
    var_13 -= ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(unsigned char)19] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)14])) : (var_5)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) arr_8 [i_0 + 1]);
                                var_15 = ((/* implicit */unsigned long long int) arr_8 [0ULL]);
                                var_16 = ((/* implicit */unsigned char) arr_9 [23U] [8ULL] [i_0]);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */int) arr_6 [(signed char)23] [i_1] [6U] [15]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((470679575), (470679577)));
                                var_18 = ((/* implicit */int) ((470679577) != (((/* implicit */int) (unsigned char)118))));
                                arr_20 [(signed char)13] [i_0] = ((/* implicit */unsigned short) ((min((arr_17 [(signed char)3] [i_0 - 3] [18] [i_5 + 2]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))) << (((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [10U] [(unsigned short)12])))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_5))) : (((/* implicit */unsigned long long int) var_0)))) - (7214820593319142118ULL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
