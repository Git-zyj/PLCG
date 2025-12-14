/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83474
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
    var_13 = ((/* implicit */short) min(((!(var_5))), (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ? (max((4294967289U), (((/* implicit */unsigned int) (signed char)114)))) : (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))) ? (arr_1 [i_1]) : (((((/* implicit */int) arr_3 [i_0] [24U] [i_0])) & (((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) + (2147483647))) << (((2950876643026309829LL) - (2950876643026309829LL)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((arr_8 [i_0] [i_1] [i_1] [i_2] [0LL]) | (min((arr_7 [i_3 + 2] [i_3 - 1] [i_3] [i_3]), (arr_7 [i_3] [i_3 + 2] [i_3] [i_3 - 1])))));
                            arr_9 [i_3] [i_0] [i_1] [i_1] [i_2] [i_3] = arr_8 [i_0] [(signed char)2] [i_2] [i_0] [i_1];
                            var_16 = arr_1 [i_2];
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((var_10) ? (((unsigned int) var_10)) : (min((((/* implicit */unsigned int) var_3)), (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 18; i_5 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((((var_9) && (((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5 - 2])))), (((((/* implicit */_Bool) arr_12 [i_5 - 2] [i_5 - 3])) || (var_10)))));
                arr_14 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_11 [i_4]))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)227)))), ((!(((/* implicit */_Bool) var_11))))))) : (min((arr_5 [i_4 + 2]), (arr_5 [i_4 - 1])))));
            }
        } 
    } 
}
