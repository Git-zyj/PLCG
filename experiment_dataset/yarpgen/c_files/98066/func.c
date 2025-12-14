/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98066
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [(signed char)3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(15403488961938374025ULL))), ((+(3043255111771177571ULL)))))) ? (18446744073709551615ULL) : (((unsigned long long int) arr_5 [i_0]))));
                    var_10 += ((/* implicit */int) (((+(min((18446744073709551601ULL), (((/* implicit */unsigned long long int) 957150645)))))) < ((+(arr_5 [i_0])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
    var_12 = ((/* implicit */unsigned long long int) ((int) 1ULL));
}
