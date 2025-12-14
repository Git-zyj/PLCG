/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94381
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1914379163)))) ? ((~(max((-1914379146), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_2 [i_4] [i_0]))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), ((-((~((-(1762272008U)))))))));
                                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) 1762272005U)) ? (305194675U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((min((((/* implicit */unsigned short) (short)-32755)), ((unsigned short)65516))), (((/* implicit */unsigned short) max((arr_2 [i_2 - 2] [i_2 - 2]), (arr_2 [i_2 + 2] [i_2 + 2]))))));
                                var_22 = ((unsigned long long int) arr_12 [i_5 + 1] [i_5] [i_5] [i_0]);
                                arr_16 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_5 + 2] [i_2 + 2]))) ? (arr_5 [i_0] [i_5 + 2] [i_2 + 2]) : (max((arr_5 [i_0] [i_5 + 2] [i_2 + 2]), (arr_5 [i_5 + 2] [i_5 + 2] [i_2 + 2])))));
                                var_23 = ((/* implicit */unsigned int) (!((!((!(var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))) : (max((((var_7) ^ (var_15))), (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) var_9))))))));
}
