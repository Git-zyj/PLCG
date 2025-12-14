/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71567
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = (+((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 6; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_4] = ((unsigned int) ((arr_15 [i_4 - 3] [i_4 - 3] [i_4 - 2] [(unsigned short)2] [i_2 + 2]) | (arr_15 [(unsigned char)3] [i_4 + 3] [i_4 - 1] [i_4] [i_2 + 3])));
                                var_18 = max((268435440), (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] |= ((/* implicit */_Bool) (~(1074617374)));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((0U) <= (((/* implicit */unsigned int) -1074617352)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [3]))) : (max((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (15426986257874092739ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0])) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [0ULL])) - (29552)))))))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) 4294967286U)) ^ (min((3019757815835458876ULL), (((/* implicit */unsigned long long int) var_4)))))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-1)), ((short)-16551)));
}
