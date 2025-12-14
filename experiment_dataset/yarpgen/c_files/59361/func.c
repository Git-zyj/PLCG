/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59361
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
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [(unsigned short)2] [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((2147483621), (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4]))))))))) : (max((((((/* implicit */_Bool) 1734563399U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_1] [i_1]))) : (var_3))), (((/* implicit */unsigned int) var_4))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_0 [i_3] [i_1]);
                                var_17 |= min((((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))), ((+(arr_12 [i_0] [i_0 + 3] [i_0] [i_0 - 3] [i_0 - 3]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [4LL] [24LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_5)) : (arr_10 [1ULL])))) ? (min(((+(1880366993863772546ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)1] [(signed char)1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_2] [i_1] [i_0 + 2]))))))) : (((/* implicit */unsigned long long int) var_15))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_4);
    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) var_3))))))))));
}
