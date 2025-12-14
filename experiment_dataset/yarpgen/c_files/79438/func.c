/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79438
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
    var_17 = ((/* implicit */int) min((var_2), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) min((371733435682434079LL), (((/* implicit */long long int) (short)-12645))))) : (((unsigned long long int) 18446744073709551598ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_18 = max((max((arr_5 [i_1 + 1] [i_1] [i_1 + 1]), (arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]))), (max((arr_5 [i_1 - 1] [1LL] [i_1 + 2]), (arr_5 [i_1 + 2] [i_1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 2]), (arr_1 [i_2] [i_0])));
                            var_20 = ((max((arr_2 [i_2] [1LL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-2147483647 - 1))))))) << (((((unsigned long long int) ((((/* implicit */_Bool) 1065275824)) ? (arr_7 [i_0] [i_3] [i_3]) : (((/* implicit */int) (short)3584))))) - (18446744073569597082ULL))));
                            var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)3569)), (10318220498238881511ULL)))) || (((/* implicit */_Bool) 7646758553050660931ULL))))), (min((((/* implicit */unsigned long long int) ((arr_0 [i_0 + 2] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])))))), (((9ULL) / (8128523575470670095ULL)))))));
                            var_22 = ((/* implicit */short) ((min((max((((/* implicit */unsigned long long int) arr_3 [i_2])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0 - 2] [i_0])))) ^ (15872ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
