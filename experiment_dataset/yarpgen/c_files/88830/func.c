/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88830
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) + (((((unsigned long long int) var_7)) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (var_14)))))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */signed char) ((arr_6 [i_1 - 2] [11ULL] [i_0]) | (min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_6 [i_1] [i_1] [9])))))));
                var_18 = ((/* implicit */unsigned char) (-(arr_3 [i_1 - 1] [i_1 + 2])));
                var_19 = ((((/* implicit */_Bool) min((arr_3 [i_1 + 1] [i_1 + 2]), (arr_3 [i_1 + 1] [i_1 + 2])))) ? (min((arr_3 [i_1 + 1] [i_1 + 2]), (arr_3 [i_1 + 1] [i_1 + 2]))) : (arr_3 [i_1 + 1] [i_1 + 2]));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((long long int) (+(arr_3 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((((unsigned long long int) ((short) var_8))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_9 [i_3 + 2] [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_2]))))) ? (arr_7 [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_2])))))) == (max((((/* implicit */unsigned long long int) min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned short) arr_11 [i_2] [i_2] [(short)11]))))), ((+(arr_9 [i_3 + 2] [(signed char)4])))))));
                var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_2])) ? (max((arr_9 [i_2] [i_3 - 1]), (arr_9 [i_2] [i_3 + 3]))) : ((~(arr_9 [i_2] [i_3]))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_8 [4U] [i_2])))))))));
                arr_14 [i_2] [i_3] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3 - 1])) && (((/* implicit */_Bool) min((arr_9 [i_2] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_3 - 1] [i_3])))))));
            }
        } 
    } 
}
