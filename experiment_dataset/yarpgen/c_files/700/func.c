/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/700
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (235668493034643658ULL)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (18211075580674907958ULL)));
                            arr_8 [i_0] [i_1] [i_2] [i_3] = (((!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_0])))) ? ((-(((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 1] [i_1 + 3])))) : (((/* implicit */int) (signed char)-8)));
                            var_20 += ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18211075580674907936ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) + (arr_7 [i_0] [i_1 + 3] [i_1 + 2] [12LL]))), (((/* implicit */unsigned int) ((signed char) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (signed char)107))))))));
                            var_21 = ((/* implicit */unsigned long long int) min(((+(((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))))))), (((/* implicit */unsigned int) var_6))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_10);
}
