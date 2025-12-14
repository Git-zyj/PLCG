/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88059
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
    var_17 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_2 [4] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_16))))));
        var_19 = ((/* implicit */short) 16383);
        arr_3 [i_0] = ((/* implicit */long long int) (signed char)-79);
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (35184372088831ULL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [0LL]))) : (arr_6 [i_1] [i_1]))) : (((arr_6 [i_1] [i_1]) | (var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)25824)))) : (((((/* implicit */unsigned long long int) ((-6513547770143706886LL) | (((/* implicit */long long int) 16383))))) ^ (arr_7 [i_1 + 1])))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 1])))) | ((~(-16404)))));
            var_22 += ((/* implicit */long long int) min(((signed char)79), ((signed char)-56)));
        }
        var_23 |= ((/* implicit */short) ((((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_8 [i_1] [i_1])), (var_4))))) ^ (((((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 2])) ^ (((/* implicit */int) var_0))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_24 += ((/* implicit */signed char) var_12);
            var_25 &= ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_3 + 1])) : (((/* implicit */int) (unsigned short)52949)))) ^ (((((/* implicit */_Bool) (unsigned short)21530)) ? (473770784) : (16403))))), (max((473770769), (((/* implicit */int) arr_4 [i_1 - 1]))))));
            arr_12 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_3 + 1] [i_1]))) ? (((/* implicit */long long int) ((int) var_1))) : (((long long int) arr_9 [i_1]))))) ^ (((((/* implicit */_Bool) ((var_16) ^ (var_3)))) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) -4923197500135700255LL))))));
        }
        for (signed char i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_26 *= ((/* implicit */signed char) (+(((long long int) max((250140104), (-473770767))))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (arr_15 [i_4 + 1] [i_4 + 1]) : (arr_15 [i_4 - 1] [i_4 - 2]))) | (((arr_15 [i_4 - 1] [i_4 - 1]) | (arr_15 [i_4 - 1] [i_4 - 1]))))))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), ((+(((/* implicit */int) arr_14 [i_1 - 1] [i_4 - 2]))))))) ? (min((473770766), (((/* implicit */int) max((arr_10 [i_1] [i_1]), (((/* implicit */unsigned short) var_11))))))) : (((/* implicit */int) arr_4 [i_4]))));
            arr_17 [i_1 + 3] [i_4] = (((+(max((-473770785), (16403))))) ^ (((/* implicit */int) ((_Bool) arr_15 [i_4 - 1] [i_4 + 1]))));
        }
    }
    var_29 ^= ((/* implicit */short) max(((~(var_4))), (((var_4) ^ (-1700911335)))));
    var_30 = ((/* implicit */unsigned long long int) (+(var_1)));
    var_31 = ((/* implicit */signed char) var_6);
}
