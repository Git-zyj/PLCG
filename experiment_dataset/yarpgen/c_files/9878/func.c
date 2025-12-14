/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9878
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
    var_10 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((/* implicit */signed char) (((-(((/* implicit */int) var_6)))) & ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_12 -= ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-26873)) ? (145452297898593972ULL) : (14774187713350380958ULL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))) : (max((var_5), (((/* implicit */unsigned long long int) var_7)))))))));
        var_14 *= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) : (arr_4 [i_1] [i_1])))), (((4605651331718821217ULL) / (((/* implicit */unsigned long long int) -2496364646093140899LL)))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */unsigned int) ((((-1803893939) + (2147483647))) >> (((18301291775810957644ULL) - (18301291775810957627ULL)))))) : (((((/* implicit */_Bool) 145452297898593971ULL)) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 635264807U)))))));
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) 666502872))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) * (145452297898593960ULL)))))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_3 [i_1] [i_1])) : (82838191925481597LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2242))) : (arr_4 [i_1] [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_3 [i_1] [i_1]))))))))));
    }
}
