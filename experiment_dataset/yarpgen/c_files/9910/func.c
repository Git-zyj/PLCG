/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9910
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14301))) * (((unsigned int) var_13))));
    var_21 = ((/* implicit */unsigned short) var_7);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (5838869943925469472ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) >> (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65029))) : (((((/* implicit */_Bool) (unsigned short)63)) ? (3027443606U) : (2147483647U))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL))))))) ? (((/* implicit */unsigned long long int) (~((+(2147483676U)))))) : (arr_2 [i_0] [(_Bool)0]))))));
        var_24 = ((/* implicit */long long int) var_10);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((6U), (((/* implicit */unsigned int) (unsigned char)255))))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) ^ (((/* implicit */int) (_Bool)1))))) ? (((arr_3 [i_1] [i_0]) - (((/* implicit */long long int) arr_0 [(unsigned short)2] [(unsigned short)2])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) != (var_2)))))))) : (((((/* implicit */_Bool) 18040515357093502912ULL)) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))));
            var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((long long int) arr_1 [i_1] [i_1])) : (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_1])))))));
            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-41))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [16LL] [16LL])) ? (arr_7 [i_2] [i_2]) : (arr_9 [i_2] [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : ((+(arr_8 [i_2])))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */signed char) ((unsigned long long int) arr_12 [i_4]));
            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (var_6)));
            arr_19 [i_4] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_3])) ? (arr_8 [i_3]) : (arr_17 [i_3] [i_4])))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))));
            arr_20 [i_4] = ((signed char) arr_13 [i_3]);
        }
        for (long long int i_5 = 4; i_5 < 24; i_5 += 1) 
        {
            arr_24 [i_3] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) arr_13 [i_3])));
            var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        }
        arr_25 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3] [5U])) / (((/* implicit */int) arr_6 [i_3] [i_3]))));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        arr_28 [(signed char)10] [8] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) (unsigned short)31550)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 24; i_7 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) (+(arr_7 [i_7 + 1] [i_7 + 1])));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 993851816)) ? (arr_15 [i_6] [i_7]) : (((/* implicit */int) (signed char)-41)))))));
            arr_31 [i_7] = ((/* implicit */unsigned short) (+(arr_9 [(unsigned char)24] [i_7 + 1])));
            arr_32 [i_7] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
        }
    }
}
