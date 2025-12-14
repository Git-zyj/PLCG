/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93654
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) & (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) (_Bool)0);
        var_11 ^= ((/* implicit */short) min(((+(((/* implicit */int) (unsigned char)161)))), (((/* implicit */int) (unsigned char)0))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1] [i_2] [i_2])), (((unsigned char) arr_5 [i_2])))))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_3] [i_2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */int) arr_6 [i_1]);
                        var_12 = ((/* implicit */int) (~((((_Bool)1) ? (8789647187112912160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
                    }
                } 
            } 
            arr_18 [i_2] = ((/* implicit */short) arr_4 [(unsigned char)3]);
        }
    }
    var_13 = ((/* implicit */int) (~(var_0)));
}
