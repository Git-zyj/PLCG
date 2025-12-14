/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57571
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
    var_13 &= ((/* implicit */short) min((((((unsigned int) var_6)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_1)))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_11))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_1]))) - ((~(((/* implicit */int) var_7))))));
            var_16 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_4))))));
            var_17 = ((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) ? (((arr_3 [i_0] [i_1]) ? (((/* implicit */int) var_6)) : (arr_1 [7] [i_0]))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        }
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [11LL] [i_0])) : (arr_1 [i_0] [i_0]))))) : (min((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_12)))), ((~(((/* implicit */int) var_5))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) >> (((((/* implicit */int) var_2)) - (216)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])))))) ^ (((((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (var_1) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */int) var_7)))))))));
        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [5U])), (arr_0 [i_2] [i_2])))) : (((/* implicit */int) arr_5 [i_2])))), (((((/* implicit */_Bool) arr_0 [(_Bool)1] [13U])) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [(short)4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) && (((_Bool) var_6)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((arr_3 [i_3] [i_3]) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_8 [i_3] [10LL]) : (((/* implicit */int) arr_9 [i_3])))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) var_12))))))));
        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [(signed char)6] [i_3])))) <= (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) arr_7 [(unsigned char)0])) & (((/* implicit */int) var_12))))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_3])) - (((/* implicit */int) arr_10 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (var_11) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3]))) : (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_3])), (var_5)))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_8)))))))));
        var_25 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3])) * (((/* implicit */int) var_5)))))))) ? (min((((/* implicit */int) var_7)), (max((var_10), (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [1LL])))))));
    }
}
