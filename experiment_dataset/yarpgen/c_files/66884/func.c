/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66884
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
    var_11 = ((/* implicit */signed char) (+(max((((9434555776218916773ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((signed char) (-2147483647 - 1)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) arr_3 [7ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_0 [i_0]))))) : (var_1)))));
            var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) (short)299)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((2147483642) >> (((((/* implicit */int) var_10)) - (100))))))))));
            var_16 -= ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0 - 4]));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (6297671318375041045ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))));
            arr_6 [i_0] = max(((+(arr_3 [i_0 - 3] [i_0 - 3]))), (min((arr_3 [i_0 - 3] [i_0 - 3]), (arr_3 [i_0 - 3] [i_0 - 3]))));
            var_18 ^= ((/* implicit */long long int) var_2);
            arr_7 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_2]), (arr_4 [i_0 - 1])))) ? (2147483616) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (max((arr_3 [i_0 - 3] [i_0]), (((/* implicit */unsigned long long int) (signed char)127))))));
        }
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 4; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29427)) ? (4072702907945936443LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))))))))) ? (((/* implicit */int) ((unsigned char) 15691051369332244366ULL))) : (((/* implicit */int) arr_9 [i_3]))));
            var_20 -= ((/* implicit */short) ((unsigned long long int) arr_8 [i_4]));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_9 [i_4])) ? (-2147483643) : (((/* implicit */int) (signed char)109)))), (((((/* implicit */int) arr_2 [(signed char)1])) - (((/* implicit */int) arr_8 [i_4])))))))))));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_12 [i_5 - 4] [i_5 - 1])) : (398204742)));
            arr_14 [i_3] [i_5 - 3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_12 [i_3] [i_5]))))) : (((/* implicit */int) (unsigned char)31))));
        }
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (signed char)91))) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) arr_2 [i_3])))) <= (((((/* implicit */int) arr_8 [(signed char)0])) / (((/* implicit */int) arr_8 [(signed char)10])))))))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3])) >= (((/* implicit */int) max((arr_2 [i_3]), (arr_2 [i_3]))))));
    }
    var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    var_26 = ((/* implicit */unsigned char) ((min((var_1), (((/* implicit */unsigned long long int) var_10)))) / (var_5)));
    var_27 = ((((/* implicit */_Bool) -1554916372)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4503395826116608122ULL)) ? (12539802824383047613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))))))) : (18446744073709551615ULL));
}
