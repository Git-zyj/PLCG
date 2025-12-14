/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55226
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)26350))))) <= (arr_0 [i_0])));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((((9390724624536755044ULL) * (min((9390724624536755044ULL), (9056019449172796571ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_11)), (var_8))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0] [13LL] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [10ULL] [(signed char)9] [i_0] [i_0])))))) || (((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (unsigned short)26350))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 4; i_5 < 13; i_5 += 3) 
                {
                    arr_17 [i_0] [i_1] [(unsigned short)6] = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_5] [i_5 - 4]);
                    var_20 = ((/* implicit */unsigned char) var_15);
                    arr_18 [i_0] [i_5 - 4] [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-22180)), (max((arr_10 [i_5 - 2] [i_5 - 4] [i_5] [i_5 - 3] [i_5 - 2] [i_5] [i_5]), (arr_10 [i_5 + 1] [i_5 - 3] [i_5] [i_5] [i_5 - 4] [i_5] [i_5])))));
                }
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) var_3);
    var_22 = ((/* implicit */long long int) var_15);
}
