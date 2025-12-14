/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62714
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) max((arr_3 [i_1] [i_1]), (arr_1 [i_0])))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (signed char)-99))))) ? ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) min((var_15), (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) (+(arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), ((+(((((/* implicit */_Bool) -327002024)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned long long int) 3682752609U);
                        var_20 *= ((/* implicit */int) (!((!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)56))))))));
                        var_21 ^= var_9;
                    }
                }
            } 
        } 
    } 
}
