/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64394
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
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17064381393881028368ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-91))))) * (((arr_1 [i_0]) | (arr_1 [i_0]))))))));
        var_13 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (2590955269U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) != ((+(arr_0 [i_0] [i_0])))));
        var_14 |= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((var_10) | (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_15 = ((/* implicit */short) (+(((long long int) 491520U))));
        var_16 -= ((/* implicit */short) ((long long int) min((arr_4 [i_1]), (arr_4 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [i_2])))) == (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_3 [i_1])))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_17 += ((/* implicit */short) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1] [i_2 + 2])) >= ((~(((/* implicit */int) arr_9 [(signed char)0]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0));
                            var_19 = ((/* implicit */int) ((unsigned long long int) ((short) arr_5 [i_2])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */short) arr_15 [i_1] [i_1] [i_2] [i_1] [0ULL] [i_6]);
                            arr_19 [i_6] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_9 [i_2]))))));
                            var_21 += ((signed char) (+(((/* implicit */int) arr_10 [i_3] [i_3] [i_6]))));
                        }
                        arr_20 [i_1] = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
            arr_21 [i_2] = ((/* implicit */long long int) (short)5039);
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-125)) != ((-(((/* implicit */int) (short)-6259))))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    arr_27 [i_7 - 1] [i_8] = ((/* implicit */long long int) ((((1152921504606846976LL) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [(unsigned short)17] [i_7] [i_1]))))) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_7 - 1] [i_7 - 1] [i_8])))));
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_23 [i_8] [13LL] [i_1])))));
                }
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 0LL);
                arr_30 [13LL] [i_2] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) 0ULL));
                arr_31 [i_7] [i_2] [i_1] = ((/* implicit */signed char) var_5);
            }
            for (unsigned int i_9 = 2; i_9 < 20; i_9 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_26 [i_9] [i_2 + 3] [i_9] [i_2])) > (var_2))) ? (arr_15 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(arr_18 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 2]))))));
                            arr_40 [i_1] [i_1] [i_9] [i_1] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((var_1) | (((/* implicit */long long int) -1613978756)))) : (((/* implicit */long long int) -1613978753))));
                        }
                    } 
                } 
                var_25 ^= (!(((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2 + 1] [i_9 + 1] [i_9 - 1])));
                var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)36929))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16553629116775261562ULL))))) : (((((/* implicit */int) (signed char)71)) / (((/* implicit */int) (signed char)20))))));
                var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_9 + 1] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_9] [i_1]))));
            }
        }
    }
}
