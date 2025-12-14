/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59373
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned int) (~(var_16)));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 262143U));
                            var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 2]), (311799928U)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 1] [17U])) : (var_2)))));
                            arr_14 [i_2 - 1] &= ((/* implicit */unsigned long long int) min(((-(262161U))), (((unsigned int) 1U))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((var_1), (((/* implicit */unsigned long long int) 4294705126U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_22 [16U] [i_6] [i_5] [16U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [18ULL])) ? (4294705135U) : (arr_17 [0U])))) ? (((((/* implicit */_Bool) arr_17 [20U])) ? (arr_17 [6U]) : (arr_17 [10ULL]))) : (((((/* implicit */_Bool) var_16)) ? (arr_17 [8ULL]) : (arr_17 [0ULL])))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [i_4] [i_6])) ^ (min((var_14), (((/* implicit */unsigned long long int) 262143U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_21 [i_4] [i_4] [i_4] [i_4]), (16777215U))) != ((~(arr_20 [i_4] [i_4] [i_4]))))))) : (var_7)))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((arr_19 [i_5] [i_6]) == (((unsigned int) ((unsigned long long int) 281474842492928ULL))))))));
                }
            } 
        } 
    } 
}
