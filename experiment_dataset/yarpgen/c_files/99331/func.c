/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99331
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) 13081951996897002870ULL);
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) arr_6 [i_0]))))));
                var_14 = ((/* implicit */short) (_Bool)1);
                var_15 = ((/* implicit */int) (+(arr_0 [i_1] [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -1547871506)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (2859034843U)))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) (-(5U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (int i_6 = 4; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_18 = min((((/* implicit */long long int) ((((/* implicit */int) (signed char)46)) != (((((/* implicit */int) var_7)) >> (((var_13) + (1934836371)))))))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                                var_19 = max((arr_16 [i_2] [i_2 - 2] [i_6 - 3] [i_6] [i_6]), (min((arr_16 [(unsigned short)1] [i_2 + 2] [i_6 + 1] [i_6] [i_6]), (arr_16 [i_2] [i_2 + 2] [i_6 - 2] [i_6] [i_6]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2 + 4])))))) > (((((/* implicit */_Bool) var_2)) ? (arr_22 [i_2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]) : (arr_22 [i_2] [i_4 + 2] [i_4] [i_4] [i_4 + 1])))));
                }
            } 
        } 
    } 
}
