/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93720
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
    var_11 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [5LL]))) + (var_6))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) -3674747319689947009LL)) : (var_6))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (6977807663764254593LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((3674747319689947039LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)35))))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)41306)) ? (3674747319689947008LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41306))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) min((var_8), (var_8)))) & (((unsigned int) (short)-28011)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_6 [i_3 - 1] [(short)5] [i_2] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((6977807663764254589LL) | (var_5)))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 3674747319689947039LL)) : (var_6))))))));
                                var_13 = ((/* implicit */int) var_4);
                                var_14 = ((/* implicit */signed char) var_7);
                                var_15 = min((((/* implicit */unsigned int) (signed char)-56)), (641824255U));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) min((((3674747319689947016LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-25837))))), (var_0)))), ((+(8639289142095988418LL)))));
                }
            } 
        } 
    } 
}
