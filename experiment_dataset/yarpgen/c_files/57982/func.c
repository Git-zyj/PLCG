/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57982
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_1 + 1] = ((/* implicit */long long int) var_1);
                                var_10 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_3))) ? (max((((/* implicit */long long int) arr_2 [i_0 + 1] [i_1 + 1])), (arr_4 [14LL] [i_1 - 2]))) : (arr_4 [i_2 - 3] [i_2 - 3])))) ? (((((/* implicit */_Bool) max((131071), (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_7)) : (-919389080))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 4])))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                    arr_14 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (+(min((((var_5) << (((var_6) + (4632727596860516605LL))))), (((/* implicit */int) ((signed char) 1120831896139523373LL)))))));
                    var_12 = ((/* implicit */int) ((long long int) (~((+(-919389080))))));
                    arr_15 [(signed char)10] [(signed char)3] [i_1 + 1] [i_0 + 1] = ((/* implicit */signed char) min((-919389080), (919389060)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) 919389055)) && (((/* implicit */_Bool) -1813401099)))))))));
                    arr_25 [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5 + 2])) ? (((/* implicit */long long int) (~(var_8)))) : (((((/* implicit */_Bool) -919389080)) ? (4503599627370495LL) : (((/* implicit */long long int) var_8))))))) ? (((max((((/* implicit */long long int) arr_20 [i_5 - 1])), (-737272072790396473LL))) / (((/* implicit */long long int) (-(var_3)))))) : ((~(arr_21 [i_7] [i_6] [i_5])))));
                }
            } 
        } 
    } 
}
