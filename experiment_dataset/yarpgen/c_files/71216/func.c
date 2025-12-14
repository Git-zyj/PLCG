/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71216
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)147)) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) var_5))));
        var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_11 = ((/* implicit */int) ((((((/* implicit */int) arr_11 [i_1] [i_2])) < (((/* implicit */int) arr_7 [i_1] [i_2])))) ? (((((/* implicit */_Bool) 638265473)) ? (4085237072U) : (3883989242U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8)))))));
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))));
            var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_5 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) != (1428865232U)))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1]) << (((/* implicit */int) var_8))))) ? (2866102032U) : (((((/* implicit */_Bool) 8247641087328346609LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41787))) : (912292378U)))));
                var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (1283635616U))) ? ((-(arr_4 [3U]))) : (var_5)));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
            {
                arr_16 [i_1] [i_1] [i_1] [21] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) ^ (arr_4 [i_2])))) - (arr_8 [i_1])));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_4] [i_4])) ? (arr_5 [i_1 + 1]) : (((/* implicit */long long int) arr_14 [i_1] [i_1 - 2] [(unsigned short)0]))));
                var_17 = ((/* implicit */unsigned int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44197)))));
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
            {
                arr_19 [i_1] [i_1] [i_5] = arr_5 [4LL];
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_1 - 1] [i_1 + 1] [i_1] [1LL]) ? (var_6) : (var_5)))) ? (((/* implicit */int) (unsigned short)44182)) : ((((_Bool)1) ? (1307225574) : (((/* implicit */int) arr_12 [i_5] [i_2] [i_1] [i_1]))))));
            }
        }
        arr_20 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [15] [i_1] [i_1 - 2] [i_1 - 2])) ? (4085237072U) : (arr_4 [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19625)))));
        arr_21 [i_1] = ((/* implicit */unsigned long long int) arr_2 [(signed char)9]);
    }
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (3655835304516500858LL))) | (((/* implicit */long long int) var_3)))))));
    var_20 = ((((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)44)))) << ((((-(var_3))) + (1680737535))))) >> (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_0)))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_6)) : (var_9)))))));
}
