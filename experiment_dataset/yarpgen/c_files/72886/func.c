/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72886
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((var_5), (var_11))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (signed char)28);
                    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_2 + 2]))))), (max((3829870143343811221LL), (((/* implicit */long long int) arr_4 [i_1 + 1] [i_0] [i_2 + 2]))))));
                    arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_0] = ((/* implicit */short) var_10);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (signed char)111))))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_1] [(signed char)8] [i_1 - 1]))) ? (((arr_3 [(signed char)2] [(signed char)2]) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_4)))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) var_7)) >> (((var_5) - (14428746954446209194ULL))))) - (10)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
