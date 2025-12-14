/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74175
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (unsigned char)1);
                var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)254)) ? (arr_0 [i_0 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3 - 1] [(signed char)4] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1))));
                            arr_10 [i_3] [i_0] = ((/* implicit */unsigned int) 8321475267896430703ULL);
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_8))));
                            arr_11 [i_0 - 3] [i_1] [i_1] [i_3 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_0 - 2] [i_3 - 1] [i_2] [i_2]), (((/* implicit */unsigned int) (_Bool)0))))) || (((/* implicit */_Bool) (+(-1LL))))));
                            arr_12 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((((((/* implicit */long long int) var_16)) & (arr_2 [8ULL]))) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_1 [i_0]);
                                arr_22 [i_4 + 1] [i_0 + 1] [i_4 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) (((+(min((((/* implicit */int) var_11)), (-2147483622))))) < ((-(((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38737))))))))));
                                arr_23 [i_0 - 2] [(signed char)7] [i_4] [10ULL] [22] [i_5] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_4 + 1] [i_0 + 2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 - 1] [i_4 - 1] [i_0 - 2]))))));
                                arr_24 [i_0] [i_1] [i_4] [15LL] [i_5] [i_4] = ((/* implicit */unsigned short) var_4);
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((arr_7 [i_4 + 1] [i_6 - 1] [i_6] [i_6]) != (arr_7 [i_4] [i_6 - 1] [i_6] [i_6 - 1])))), (max((((/* implicit */unsigned char) var_3)), (var_13)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned int) var_13)), (var_16))))) ? (((((/* implicit */_Bool) var_7)) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) > (6ULL))))))) : (((/* implicit */unsigned long long int) var_9))));
}
