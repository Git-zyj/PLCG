/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76324
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
    var_17 &= ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] [(signed char)2] = ((/* implicit */int) (short)-30024);
                        arr_12 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_1] [5LL] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) var_16);
                        arr_18 [i_4] [i_2] [i_2] [i_1] [2] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 0LL)) ^ (12964154125195267267ULL))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [(unsigned char)8])))))));
                    }
                    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (short)28629)))))));
                    var_19 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (short)5079);
    var_21 = ((int) 5482589948514284333ULL);
}
