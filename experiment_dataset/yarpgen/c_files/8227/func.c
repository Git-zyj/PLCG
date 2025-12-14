/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8227
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_5)) : (arr_0 [i_0] [i_0])));
        var_15 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (5043409622429213927ULL));
        var_16 = ((/* implicit */signed char) ((arr_1 [i_0]) + (10327074540076860987ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 = (+(((((/* implicit */_Bool) 5043409622429213926ULL)) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (((((/* implicit */_Bool) var_4)) ? (13403334451280337672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)5]))))))));
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((signed char) -1859504355)))));
            var_19 = ((/* implicit */long long int) 5043409622429213934ULL);
            var_20 = ((/* implicit */signed char) min((((/* implicit */int) (!(arr_5 [i_1] [i_1] [i_2 - 1])))), (max((arr_3 [i_2 + 3]), (((/* implicit */int) (signed char)100))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) ^ (var_11)))));
            var_22 = arr_10 [i_1] [i_3] [i_3];
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned char)41))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)12479)) : (var_1))))));
        }
    }
    var_25 += ((/* implicit */_Bool) var_4);
}
