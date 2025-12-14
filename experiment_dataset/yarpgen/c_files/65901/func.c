/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65901
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((3557034748039053617LL) == (3557034748039053617LL)))) | (((/* implicit */int) ((3557034748039053617LL) >= (3557034748039053616LL))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_3] [(short)6] [i_0] = ((/* implicit */signed char) max((((_Bool) (short)-32752)), (((arr_0 [i_0] [i_0 - 1]) <= (arr_0 [i_0] [i_0 - 1])))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_1 [2U] [(_Bool)1]))));
                            arr_12 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((3557034748039053598LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(short)20] [i_0])) : (((/* implicit */int) (unsigned short)52774))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [i_1] [(_Bool)1])), (((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) + (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) arr_0 [i_4 - 3] [i_5]);
                arr_18 [i_4] [i_4] = arr_8 [i_5] [i_5] [i_4] [i_4 - 1];
            }
        } 
    } 
}
