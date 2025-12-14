/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85417
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((3652939556U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116)))))), ((~(arr_7 [i_0] [i_0 - 3] [i_0])))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned char) arr_5 [i_0]);
                                var_18 = min((arr_0 [i_0]), (((/* implicit */long long int) var_1)));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (7070626837519415002ULL))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 11376117236190136614ULL))))))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 11376117236190136613ULL)) || (((/* implicit */_Bool) (unsigned short)17442))))), ((~(arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 1] [(unsigned short)2] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned long long int) (unsigned short)32835)))));
    var_21 = ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */unsigned char) var_14);
}
