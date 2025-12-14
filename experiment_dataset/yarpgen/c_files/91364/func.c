/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91364
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
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (10642895725757505528ULL) : (((/* implicit */unsigned long long int) var_19))))))) ? (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) : (17922989746376459452ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((arr_2 [i_0 + 4]) <= (arr_2 [i_0 + 2]))) ? ((-(arr_2 [i_0 + 1]))) : (min((arr_2 [i_0 + 4]), (arr_2 [i_0 - 1]))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned short) 2901618572U));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [i_0 + 1])), (523754327333092160ULL)))) && (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [9U] [10ULL] [i_2] [(signed char)4] [(unsigned short)16])), (arr_0 [i_1])))) && (((/* implicit */_Bool) 63U))))));
                                arr_17 [i_0 + 1] [i_4] = ((/* implicit */signed char) arr_11 [i_0 + 2] [i_2 - 1] [i_3 + 2] [i_4 + 1]);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (17922989746376459455ULL))) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_19)) : (arr_10 [i_0] [3] [i_1] [i_1]))))))) : ((((~(17922989746376459454ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 523754327333092160ULL)) && (((/* implicit */_Bool) 17922989746376459452ULL))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (1485146139) : (var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) 20ULL))))))))));
}
