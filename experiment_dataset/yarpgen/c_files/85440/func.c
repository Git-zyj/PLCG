/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85440
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */int) var_0);
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (+(arr_1 [(_Bool)1] [(unsigned char)9])))))));
                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-24025)) ? (2147483647) : (15)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_7);
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
                var_19 = ((/* implicit */_Bool) (~((+(985759957)))));
                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((int) -1243411317))) ? ((-(arr_9 [i_2 - 2] [i_3]))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3])) ? (arr_9 [i_2 - 3] [i_2 - 3]) : (arr_9 [i_2 - 1] [13U])))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_2] [(signed char)14] [i_5 - 1] [i_5 + 1] [i_6] = ((/* implicit */unsigned short) (-(arr_7 [i_2])));
                                arr_22 [10] [10] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) arr_16 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]))))));
            }
        } 
    } 
}
