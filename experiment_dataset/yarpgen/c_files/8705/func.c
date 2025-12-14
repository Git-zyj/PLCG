/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8705
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) (-(min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
        arr_3 [10LL] |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_2 [(short)10]))))) ? (((((/* implicit */_Bool) (unsigned char)223)) ? (1691713239956891837ULL) : (((/* implicit */unsigned long long int) -26LL)))) : (((unsigned long long int) (short)1317)))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned char)76))))) == (((((/* implicit */int) arr_1 [13U])) << (((/* implicit */int) arr_2 [i_0]))))))) == (((/* implicit */int) min((var_10), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_0])))))))));
    }
    var_21 = ((/* implicit */int) var_13);
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] |= ((/* implicit */signed char) arr_5 [i_1]);
        arr_9 [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1]) << (((((-1989256896) + (1989256898))) - (2)))))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -227939520)) : (arr_10 [i_2] [i_3]))))) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) arr_12 [i_2] [8ULL])))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? ((-(arr_11 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3])))));
        }
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_11 [i_2]))));
        var_25 *= ((/* implicit */unsigned long long int) max((((unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_11 [i_2]) : (((/* implicit */unsigned int) 227939520))))), (var_12)));
        arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (-227939528)))) < (((/* implicit */int) (unsigned short)22986))));
    }
    var_26 ^= ((/* implicit */unsigned char) ((1957448601) == (var_9)));
}
