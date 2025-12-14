/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79642
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
    var_11 = ((/* implicit */unsigned int) ((_Bool) 1446703848083326219ULL));
    var_12 += ((/* implicit */unsigned long long int) ((unsigned char) var_5));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) arr_9 [i_3] [i_3] [i_3] [i_3] [i_3]);
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((1699243569U), (((/* implicit */unsigned int) (_Bool)1)))))));
                        var_15 = ((/* implicit */_Bool) min((var_1), (arr_4 [i_0] [(_Bool)1] [i_2])));
                        arr_10 [8ULL] [8ULL] [i_1] [i_2] [i_3] = arr_3 [(signed char)12];
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_16 = ((_Bool) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) (unsigned char)24))));
                                var_18 = arr_16 [i_4 + 2] [14ULL] [i_4 + 2] [14ULL];
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)));
                    arr_22 [(signed char)13] [(signed char)13] [(signed char)13] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((unsigned int) var_0)), (((/* implicit */unsigned int) (_Bool)1)))))));
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) 6673815300030204862ULL));
                }
            } 
        } 
        arr_23 [i_0] [5ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)245)), (max((-1208902226739142543LL), (((/* implicit */long long int) (unsigned char)13))))));
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)123))));
    }
    var_22 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
    var_23 = max((((/* implicit */unsigned long long int) (_Bool)1)), (min((2561276586200844604ULL), (((/* implicit */unsigned long long int) (unsigned char)245)))));
}
