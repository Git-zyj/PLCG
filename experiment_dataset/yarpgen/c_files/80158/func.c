/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80158
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
    var_13 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */int) ((_Bool) ((((6228995314003294855LL) != (((/* implicit */long long int) arr_2 [i_1])))) ? (min((arr_5 [i_0] [i_1] [i_1]), (2305843009213693952LL))) : (((/* implicit */long long int) 1941441427U)))));
            var_14 = ((/* implicit */unsigned short) 1941441427U);
        }
        arr_7 [i_0] [i_0 - 1] = (((!(((/* implicit */_Bool) -5011072225160069913LL)))) ? (arr_1 [1LL]) : (min((((/* implicit */long long int) (+(-1140319826)))), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        var_15 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [18ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (9223372036854775804LL))) <= ((-(arr_5 [(unsigned short)12] [i_0 - 1] [13LL])))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((_Bool) max((1140319801), (((/* implicit */int) ((((/* implicit */_Bool) 1140319779)) || (((/* implicit */_Bool) arr_2 [i_0]))))))));
                    var_17 = ((/* implicit */long long int) ((unsigned int) (!(((2353525858U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-24136))))))));
                }
            } 
        } 
    }
}
