/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72042
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) min(((-(arr_4 [i_0 - 1] [i_0 - 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)59126)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) min((arr_2 [i_0]), ((unsigned char)10)))))))));
                    var_16 &= ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_2 + 1]);
                    var_17 = ((/* implicit */short) (+(min((((/* implicit */long long int) (_Bool)1)), (691735948926518480LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_8 [i_3] [i_4 - 1] [i_3])), (((var_8) / (((/* implicit */int) arr_9 [(signed char)16] [i_4 - 1] [8LL]))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (short i_6 = 4; i_6 < 22; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4 - 2] [i_4 - 1])) : (((/* implicit */int) arr_10 [(signed char)5] [i_4 - 2] [i_4 + 1])))), ((~(((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4]))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_15 [i_6 - 2] [6LL] [i_6] [i_6 - 3])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
