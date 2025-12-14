/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59910
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_18 = ((/* implicit */short) (+(-236003116)));
            arr_5 [i_1] [i_1 + 1] = ((/* implicit */short) min((-12), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59361)))))));
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551601ULL))))), (min((18446744073709551597ULL), (((/* implicit */unsigned long long int) 2837122649U))))));
        }
        arr_6 [i_0 - 2] = ((/* implicit */unsigned short) max((18446744073709551601ULL), ((~((+(14ULL)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */short) (-(min((15ULL), ((+(15ULL)))))));
        arr_11 [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (14ULL))), (((/* implicit */unsigned long long int) (short)2))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((18446744073709551600ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        arr_12 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551589ULL))));
        arr_13 [i_2] = (unsigned char)111;
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned char)246)), (18446744073709551581ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)76))))))))));
        /* LoopNest 2 */
        for (short i_4 = 4; i_4 < 14; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */long long int) (_Bool)1);
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)0)), (max(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)0)))))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) 18446744073709551610ULL);
        arr_22 [i_3] [i_3] = min((max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551601ULL))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (5ULL))));
    }
    var_26 &= (_Bool)1;
    var_27 &= var_4;
}
