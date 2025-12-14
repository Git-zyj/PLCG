/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60330
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) var_14)), (min((((/* implicit */int) var_10)), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_16))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (arr_1 [(unsigned char)6])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_6 [7ULL]))) | (arr_3 [i_1]))), (min((((/* implicit */long long int) arr_4 [(unsigned char)14] [(unsigned char)14])), (arr_3 [i_1])))))) ? (((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) : (((long long int) arr_5 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_5 [i_1]) / (((/* implicit */unsigned long long int) arr_3 [i_1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) != (((/* implicit */int) arr_4 [(unsigned short)13] [i_1]))))))))))));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_6 [17LL]))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) 3273817484U)) || (((/* implicit */_Bool) -2792440665648410583LL)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 4; i_4 < 15; i_4 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((((arr_3 [i_4]) <= (((/* implicit */long long int) arr_11 [i_4] [i_2 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))) != (arr_5 [i_2 - 2]))))) : (arr_3 [i_2 - 2])))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_9 [i_2]) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))))) >> (((/* implicit */int) ((signed char) arr_12 [i_2])))));
            }
            for (unsigned int i_5 = 4; i_5 < 15; i_5 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2])) ? (arr_11 [i_2 + 2] [i_5 - 2]) : (arr_8 [i_2]))));
                var_27 += ((/* implicit */long long int) ((arr_5 [i_3]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)6] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [(short)2]))) : (arr_8 [0LL]))))));
            }
            for (unsigned int i_6 = 4; i_6 < 15; i_6 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 2] [i_3]))))) ^ (((/* implicit */int) ((signed char) arr_16 [i_2] [i_3] [i_2] [i_2])))));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_9 [2LL]))));
            }
            var_30 -= ((/* implicit */unsigned short) ((unsigned long long int) 2792440665648410560LL));
        }
        var_31 &= ((/* implicit */unsigned char) ((2792440665648410588LL) >= (-2792440665648410575LL)));
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_2)), (var_11))), (((/* implicit */int) max((var_13), (((/* implicit */short) var_7)))))))) ? (((/* implicit */int) var_12)) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_10))))), (((int) var_9))))));
    var_33 ^= ((/* implicit */unsigned short) max((max((((/* implicit */int) ((var_11) < (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))))), (((/* implicit */int) var_0))));
}
