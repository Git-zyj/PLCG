/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77613
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
    var_18 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((unsigned long long int) max(((unsigned short)45098), (((/* implicit */unsigned short) (short)32764)))));
                                var_20 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_2] [i_3 - 1] [i_4 + 2]);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)12] [i_4 - 3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (-2928438459240985186LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (max((((arr_7 [i_0] [i_1] [i_1] [i_0]) >> (((((/* implicit */int) var_0)) - (36))))), (((/* implicit */unsigned int) max((arr_4 [i_0] [i_1] [i_3 - 2]), (((/* implicit */signed char) (_Bool)0)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) var_5);
                }
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_0] [i_1])), (arr_8 [1] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_1] [i_1] [(short)6])) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [20ULL] [i_0] [i_0])))))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */_Bool) ((((arr_5 [i_0] [i_1] [14]) ? (((/* implicit */int) (short)-19899)) : (((/* implicit */int) arr_3 [(unsigned short)2] [6LL] [6LL])))) * (((/* implicit */int) arr_9 [3ULL] [i_1] [i_0] [3ULL] [i_0] [3ULL] [i_0]))))) || (((/* implicit */_Bool) 6143107824943229085ULL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_14 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_5] [i_5])) | (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    var_24 -= ((/* implicit */long long int) ((65535ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_21 [20ULL] [20ULL] [19ULL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_6 - 1] [i_6]))));
                    arr_22 [i_5] [(_Bool)1] [i_7] [i_5] = ((/* implicit */signed char) (+(arr_18 [i_6 + 1] [i_6 - 1] [i_6 - 1])));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)5)) < (((/* implicit */int) (short)-8832)))))));
                }
            } 
        } 
        arr_23 [i_5] = ((((/* implicit */int) (signed char)82)) % (((((/* implicit */int) (short)-5076)) | (((/* implicit */int) (signed char)-110)))));
    }
}
