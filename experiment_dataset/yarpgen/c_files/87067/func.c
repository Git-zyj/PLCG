/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87067
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned char)0] [(unsigned char)0] [i_2] = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) << (((((/* implicit */int) (unsigned short)65529)) - (65529))))), (((((/* implicit */int) max(((unsigned short)65529), (((/* implicit */unsigned short) (_Bool)1))))) << (((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8)))) - (26901)))))));
                    arr_9 [(unsigned short)0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)24308))));
                }
            } 
        } 
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min((-1310650391301228525LL), (((/* implicit */long long int) (unsigned char)72)))))));
        arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1310650391301228546LL)) > (arr_0 [i_0])))) ^ (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)61))))));
    }
    for (short i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */short) max(((signed char)10), ((signed char)127)));
        var_12 = (((+(((/* implicit */int) ((((/* implicit */int) (signed char)82)) != (((/* implicit */int) (short)-17115))))))) << (((arr_14 [i_3]) - (1541748402))));
    }
    var_13 += ((/* implicit */long long int) var_6);
}
