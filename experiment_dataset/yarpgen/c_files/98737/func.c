/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98737
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */short) (~((~(((/* implicit */int) arr_5 [i_1] [i_0 + 2] [i_2]))))));
                    var_17 = ((/* implicit */_Bool) var_11);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (short)-28179))))));
                arr_16 [i_4] = ((/* implicit */signed char) var_12);
                var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 - 1] [i_4 - 1])) ? (arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 4]) : (((/* implicit */unsigned long long int) 2147483648U))))));
                var_20 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_2), (arr_13 [i_4] [i_4])))) ? (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (short)-7256))))));
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_3] [i_3] [i_4])) < (((/* implicit */int) arr_4 [i_3] [i_3] [i_4 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_3] [(short)4] [i_4])) ? (((/* implicit */int) arr_4 [i_4 - 1] [i_4] [(short)12])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_4 - 2])))) : (((/* implicit */int) arr_4 [i_3] [i_4 + 2] [i_4 - 4]))));
            }
        } 
    } 
}
