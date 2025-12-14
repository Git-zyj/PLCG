/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67867
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_3]), (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (signed char)96)), (arr_1 [i_2])))))))));
                            arr_10 [i_3] [i_2] [i_2] [19U] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 2])) : (((/* implicit */int) (signed char)-110)))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) / ((-(arr_7 [i_0] [i_1] [i_1 + 1] [i_1 - 1]))))), (((/* implicit */long long int) (+(-3)))))))));
                var_14 ^= ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)109)))) ^ ((-(((/* implicit */int) arr_0 [i_0 - 2] [i_0])))))), (((/* implicit */int) arr_0 [i_0] [i_1]))));
                arr_11 [i_0 + 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 1])) + (((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 1])))), (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 1]))))));
                var_15 = ((/* implicit */unsigned char) (-(((var_7) >> (((arr_7 [i_1 - 1] [4ULL] [i_0] [i_0 - 1]) - (5811657865548456875LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_2);
}
