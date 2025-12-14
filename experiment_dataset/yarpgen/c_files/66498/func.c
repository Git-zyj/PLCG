/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66498
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
    var_10 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 + 1])))))));
                                var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 1])) ? (arr_7 [i_1 + 2] [i_1 + 4]) : (arr_7 [i_1 - 1] [i_1 - 2]))), (((((((/* implicit */_Bool) -725014301)) ? (arr_6 [i_3]) : (((/* implicit */unsigned long long int) 274877906688LL)))) % (min((9ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_3] [(unsigned char)11]))))))));
                                var_13 += ((/* implicit */unsigned char) (+(min((549755813824LL), (((/* implicit */long long int) (_Bool)1))))));
                                var_14 ^= -725014292;
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_1] [i_2]);
                    arr_14 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((max((2197949513728ULL), (arr_2 [i_1 + 4] [i_1 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_1 - 1] [i_2 + 2]), (((/* implicit */signed char) ((36020000925941760LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-16542))))))))))));
                }
            } 
        } 
    } 
}
