/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83780
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) 1021586648275979686LL);
        var_18 = ((/* implicit */unsigned int) ((short) 5354073515215776008LL));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_19 = ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (max((1965243302809230892LL), (((/* implicit */long long int) arr_2 [i_1])))));
        arr_4 [7LL] [i_1] = ((/* implicit */unsigned int) -691783496);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */short) arr_7 [i_2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (unsigned int i_5 = 3; i_5 < 8; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11692)) && (((/* implicit */_Bool) 1400805876))));
                            arr_18 [i_3] [i_5] [5ULL] [5ULL] [i_3] = ((/* implicit */unsigned short) (unsigned char)1);
                        }
                    } 
                } 
            } 
            arr_19 [i_3] [3U] = ((/* implicit */short) 7670529852275314328ULL);
            arr_20 [i_3] = ((/* implicit */unsigned int) var_11);
            var_22 = 10776214221434237288ULL;
        }
        for (short i_7 = 3; i_7 < 8; i_7 += 3) 
        {
            var_23 ^= ((/* implicit */unsigned short) 18446744073709551606ULL);
            var_24 = ((/* implicit */short) arr_9 [i_2] [i_2] [i_2]);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2] [i_7 + 1] [i_7 + 1])) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 1794577596U)) == (10ULL))))));
        }
        for (long long int i_8 = 4; i_8 < 10; i_8 += 3) 
        {
            arr_27 [i_2] [(_Bool)1] [i_8] = ((/* implicit */long long int) ((unsigned short) var_16));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((2ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 3187803561U)))))))));
            var_27 = ((/* implicit */unsigned char) arr_2 [i_2]);
        }
        var_28 = ((arr_15 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    }
    var_29 = ((/* implicit */int) (short)1173);
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned short) var_8)))));
    var_31 = ((/* implicit */unsigned long long int) var_2);
    var_32 = var_6;
}
