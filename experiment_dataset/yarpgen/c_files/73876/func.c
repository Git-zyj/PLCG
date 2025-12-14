/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73876
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(3970642646U)));
        arr_3 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) var_15);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [8LL] [i_0])) : (((/* implicit */int) var_5))))))))));
            var_19 = ((/* implicit */short) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26567)) % (((/* implicit */int) (unsigned char)165))))) ? (3970642646U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                arr_11 [i_0] [12LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)57524)) >> (((arr_10 [i_0] [8] [i_0] [i_0]) + (963063397))))), (((/* implicit */int) ((unsigned char) var_8)))))) ? ((~(min((((/* implicit */int) arr_8 [i_2] [i_0] [i_0])), (arr_10 [i_2] [i_1] [i_0] [(short)4]))))) : (((/* implicit */int) arr_9 [i_2] [i_0]))));
                arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)1] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10332))) : (max((arr_1 [i_1]), (((/* implicit */unsigned int) min((arr_10 [(signed char)1] [i_1] [(signed char)1] [i_0]), (((/* implicit */int) (unsigned char)13)))))))));
            }
        }
    }
    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15945))))) ? (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24))) : (-8308317460803175935LL))) : (((/* implicit */long long int) 1180951968))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1516168153U)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (35167192219648LL)))))) : (9279410785249533606ULL)));
        arr_16 [i_3] [i_3 + 1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [(unsigned short)17] [i_3]))));
        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
    }
    var_23 |= ((/* implicit */short) var_11);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)56)) || (((/* implicit */_Bool) var_3)))))) : (((-9223372036854775806LL) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_12))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-18712)))))) : (var_4)));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)55017)))) & (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))));
}
