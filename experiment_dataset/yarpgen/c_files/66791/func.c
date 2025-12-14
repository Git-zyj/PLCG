/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66791
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
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)88)) && (((/* implicit */_Bool) var_2)))) ? ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 2] [i_3])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_3] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) max((((long long int) arr_3 [i_2 + 2])), (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_3])))))))) : ((-(arr_9 [i_0] [i_1])))));
                            var_15 += ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_3]);
                            arr_10 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((int) max((arr_9 [i_0] [i_0]), (arr_9 [i_0] [i_0]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_2] [i_2])), (arr_1 [i_0])))) ? (min((var_9), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_1] [i_2] [i_2 + 4] [i_3]), (((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_1]))))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_1] |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) + (-6621437551200910249LL))) : (var_11))));
                arr_12 [i_0] [i_1] &= var_1;
            }
        } 
    } 
    var_16 -= ((/* implicit */short) ((((int) (-(var_9)))) + ((-((+(((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned char) 3742139756U);
                    var_18 += ((unsigned int) (-((-(arr_17 [i_4] [i_5])))));
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4]))))), ((-(((/* implicit */int) arr_13 [i_6]))))))) <= (min((arr_16 [i_5]), (((/* implicit */unsigned int) (signed char)-73))))));
                }
            } 
        } 
    } 
}
