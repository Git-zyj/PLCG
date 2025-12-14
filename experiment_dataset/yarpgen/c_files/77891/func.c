/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77891
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
    var_10 = ((/* implicit */unsigned char) ((unsigned int) (+(min((var_7), (var_2))))));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (-(min((((var_0) ? (var_6) : (var_6))), (((/* implicit */long long int) min(((short)32753), (((/* implicit */short) (_Bool)1))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2]))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_0 [i_1] [i_1]))));
                var_14 = ((/* implicit */short) min((min((((/* implicit */int) arr_3 [i_1] [i_1])), ((-(((/* implicit */int) arr_2 [2] [2])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [7ULL] [i_1]))))) / ((~(((/* implicit */int) arr_5 [i_0] [i_0 - 3] [2U]))))))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_1 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) (+((+(arr_7 [i_2])))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_16 [i_2] [6U] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (~(min((arr_11 [i_3]), (arr_11 [i_2])))));
                            arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned int) (_Bool)1)), (1048575U))), (((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_4] [8U] [i_2] [i_2]))))), (arr_12 [i_5] [i_4] [i_3] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
