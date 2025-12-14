/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79757
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_15 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) arr_0 [2])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) : (((arr_0 [i_1]) - (arr_0 [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    var_19 = (~(4040726491U));
                    arr_13 [i_2 - 1] [i_3] = ((/* implicit */_Bool) (~((-(arr_0 [i_2 + 1])))));
                    var_20 = min((((/* implicit */unsigned long long int) ((arr_8 [i_2 + 2] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2] [i_3])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_3])) ? (((/* implicit */int) arr_5 [(unsigned char)16])) : (((/* implicit */int) arr_2 [i_2] [i_3]))))) ? ((-(arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_3] [i_3])), (arr_1 [i_4]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max(((short)-29566), (((/* implicit */short) (unsigned char)255))))) ? (9223372036854775807LL) : (min((((/* implicit */long long int) (unsigned char)240)), (((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_10))))))));
}
