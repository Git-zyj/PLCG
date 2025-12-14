/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95880
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((arr_1 [i_0] [i_1]) + (var_2))))), (((max((16594197555109297097ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                var_19 = 1852546518600254511ULL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_20 = min((((((/* implicit */_Bool) ((arr_1 [i_2] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (max((((/* implicit */unsigned long long int) var_12)), (9762343114895287740ULL))) : (((14616191216037333650ULL) ^ (18446744073709551615ULL))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_2])), (arr_8 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3461088758875088186ULL)))))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3830552857672217965ULL))))));
                var_21 = (~(arr_8 [i_3]));
                var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_14)) ? (((arr_2 [i_2 - 1] [i_2 - 1]) ^ (var_4))) : (min((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_2] [i_2 - 1])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_20 [(short)0] [i_3] [i_4] [i_5] [2ULL] [i_6] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_7 [i_5]), (arr_14 [i_2 - 3])))), (((((/* implicit */_Bool) var_16)) ? (((16594197555109297087ULL) >> (((((/* implicit */int) arr_6 [i_3])) - (105))))) : ((-(var_1)))))));
                                var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (7150271322439550060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
