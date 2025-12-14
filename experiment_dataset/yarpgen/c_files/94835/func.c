/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94835
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] [3LL] [i_0] [i_0] [i_2 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1745159198)) ? (((int) (unsigned short)45336)) : (((/* implicit */int) (_Bool)0))));
                            arr_10 [i_3] [i_3] [i_0] = min((max((((/* implicit */long long int) var_12)), (var_5))), (min((((/* implicit */long long int) ((int) var_6))), (min((var_7), (((/* implicit */long long int) arr_4 [(_Bool)1] [i_2 - 4] [i_3])))))));
                            arr_11 [i_3] [i_2 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-80)) + (((/* implicit */int) (signed char)-80))))) || (((((/* implicit */long long int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) != (var_5)))));
                            arr_12 [i_0] = ((/* implicit */long long int) var_2);
                            var_13 -= max(((-(((var_4) / (((/* implicit */int) (signed char)79)))))), (min((((/* implicit */int) ((unsigned short) 67108863))), (min((((/* implicit */int) (signed char)64)), (var_8))))));
                        }
                    } 
                } 
                arr_13 [i_0] [(_Bool)0] = ((/* implicit */unsigned short) ((2570028960195203727LL) > (((/* implicit */long long int) max((((/* implicit */int) (signed char)85)), (arr_6 [i_1] [i_1] [i_1 + 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_14 = min((((long long int) var_8)), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) 1508722507)))))))));
}
