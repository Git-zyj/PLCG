/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76159
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2])) : ((-(((/* implicit */int) (unsigned short)23135))))));
                var_16 -= ((/* implicit */unsigned long long int) max((((min((((/* implicit */unsigned int) (unsigned short)3385)), (65535U))) ^ (((/* implicit */unsigned int) -309895778)))), (((/* implicit */unsigned int) var_8))));
                var_17 = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) -1907851536)) > (65531U)));
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_10 [i_2] [i_3] [i_4]), (((/* implicit */long long int) arr_6 [i_2] [(signed char)3]))))) ? (((unsigned long long int) arr_6 [i_2] [i_4])) : (min((var_14), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (9223372036854775807LL))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4755)))))) ? ((~(((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (signed char)-77)))))) : (((/* implicit */int) (unsigned short)8))));
                                arr_24 [i_2] [i_2] [i_4] |= ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-55)), (arr_15 [i_2] [i_2] [i_2])))), ((-(((/* implicit */int) arr_8 [i_4])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_5);
}
