/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59952
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
    var_18 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_1 [i_1]);
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_0 [i_1] [14LL]))));
                    arr_7 [i_0] [i_0] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) && (((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_2] [i_1]))))))))) >= (arr_1 [i_1]));
                }
                for (signed char i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_0]))) == (arr_2 [i_3 - 1] [i_3 + 2] [i_3 - 1])));
                        arr_12 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1]))) + (arr_6 [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_8 [i_0])))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_3 + 3] [i_3] [i_3] [i_3 + 3] [i_1] [i_1]) <= (arr_10 [i_3 + 3] [10U] [i_3 + 1] [i_3 + 3] [(_Bool)1] [i_0])))))));
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_17))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((arr_10 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 - 1]) + (2147483647))) >> (((arr_10 [i_3 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 3]) + (1424252317))))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 3])) * (((/* implicit */int) arr_0 [i_3 - 1] [i_3 + 1])))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 + 3])) / (((/* implicit */int) arr_9 [i_3 + 2])))))));
                    }
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) arr_1 [i_3]))));
                    var_27 += ((/* implicit */_Bool) arr_1 [i_3]);
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_18 [i_0] [(short)7] [i_1] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_6]))) >= (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6])))))));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (arr_6 [i_6 + 1] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-45))))))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_0]))));
                }
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_9 [(signed char)20]))))) || (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) arr_16 [(unsigned short)4])))))))));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) != (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [14])))) != (arr_10 [i_0] [i_0] [i_0] [i_0] [16ULL] [i_0])))) | (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_8 [i_0])))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_5))));
}
