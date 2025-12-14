/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83853
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
    var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-83)), (var_7)))))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2)))), (((((/* implicit */int) (unsigned short)33112)) * (((/* implicit */int) (signed char)(-127 - 1)))))))));
    var_13 = min((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) ((((/* implicit */_Bool) -778999157)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) ^ ((-(var_1))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_14 |= ((/* implicit */int) ((max((((arr_1 [i_0]) << (((((/* implicit */int) (unsigned short)12951)) - (12930))))), (((/* implicit */unsigned long long int) arr_2 [(short)17] [1LL])))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8321499136LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3794))) : (-2014757488035455059LL)))), (min((((/* implicit */unsigned long long int) 154460741)), (arr_1 [i_0 + 1])))))));
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((short)-24928), (((/* implicit */short) var_7))))) || (((/* implicit */_Bool) -8321499139LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_16 ^= ((((/* implicit */_Bool) arr_4 [15] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [(unsigned short)15]));
        arr_6 [i_1] [i_1] = ((6121865037930936936ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24928))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [(unsigned char)19]);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((arr_4 [i_2] [i_2]) / (arr_4 [i_2] [(short)4]))))));
        arr_9 [i_2] [i_2] = (unsigned short)65527;
    }
    var_19 = ((/* implicit */long long int) var_5);
    var_20 = ((/* implicit */int) max((var_5), (((var_5) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)215)), ((short)24674))))))));
}
