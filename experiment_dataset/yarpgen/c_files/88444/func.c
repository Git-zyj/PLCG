/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88444
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
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)192)), (arr_1 [i_0 + 1])))) ? (min((arr_1 [i_0 + 1]), (arr_4 [i_0 + 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_20 = min(((unsigned char)0), ((unsigned char)82));
                                var_21 = ((/* implicit */_Bool) 5931021926683169954ULL);
                            }
                            var_22 *= ((/* implicit */unsigned long long int) arr_6 [i_2]);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (max((max((max((33292288ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1 + 1] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) -2777146377017168347LL)) : (arr_9 [i_0] [i_0 - 2] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                var_25 |= ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (unsigned char)6)))));
                var_26 = ((/* implicit */int) (unsigned char)15);
            }
        } 
    } 
}
