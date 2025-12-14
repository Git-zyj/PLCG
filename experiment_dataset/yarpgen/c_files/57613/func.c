/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57613
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_3 [i_1] [i_0 - 1]);
                var_18 = ((/* implicit */unsigned int) ((arr_1 [i_1]) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-34)) ? (-899325647) : ((+(arr_3 [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (unsigned int i_4 = 3; i_4 < 7; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4] [i_3] [i_2])) ^ (((((/* implicit */int) arr_10 [(unsigned short)5] [i_3] [i_2])) << (((((arr_6 [i_4]) + (1653407683))) - (23)))))))) ? (max((((/* implicit */unsigned int) arr_10 [i_4] [(signed char)6] [(signed char)6])), (((arr_1 [i_3]) | (((/* implicit */unsigned int) arr_6 [8U])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_3] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) arr_10 [i_6] [i_3] [i_2]);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6318480771172339631ULL)) ? (((/* implicit */long long int) 899325646)) : (4859810513458617151LL)));
                                var_21 = ((/* implicit */unsigned char) var_3);
                                var_22 = ((/* implicit */signed char) min((((-4859810513458617152LL) + (4859810513458617151LL))), (((/* implicit */long long int) arr_11 [i_2] [i_4] [i_5] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
