/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88481
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (2395561971980946840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) min(((short)25678), (((/* implicit */short) (_Bool)1))))) ? ((~(((((/* implicit */_Bool) arr_1 [4ULL] [4ULL])) ? (-8198087388619000791LL) : (arr_2 [i_0]))))) : (((/* implicit */long long int) (+((~(1409563878U))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8198087388619000795LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(0LL)))))))));
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [(signed char)0] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (short i_6 = 4; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26497))) : (8198087388619000790LL));
                                var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_18 [i_6])))) ? (((((/* implicit */_Bool) (signed char)126)) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_5] [i_5]))) : (((unsigned int) arr_4 [i_5])))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (14LL)))) ? (11943727529965368414ULL) : (((((/* implicit */_Bool) (short)26771)) ? (7822847943044670297ULL) : (((/* implicit */unsigned long long int) 126564063U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) 3015114713574620072LL)) >= (((/* implicit */unsigned long long int) -2418412271605196881LL)))))) : (1002049372868397314ULL)));
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)30863))));
            }
        } 
    } 
}
