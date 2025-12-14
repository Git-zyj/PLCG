/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59865
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (-(((max((var_9), (((/* implicit */long long int) 2603502623U)))) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [13U])))))));
                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_2 [10])))) && (arr_1 [i_1 + 1] [i_1 - 1]))))));
                var_17 |= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                var_18 = min((((var_13) - (var_13))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) || (((((/* implicit */_Bool) (signed char)95)) && (((/* implicit */_Bool) var_11))))))))))));
                    var_20 = ((/* implicit */short) var_12);
                    var_21 *= ((/* implicit */unsigned int) ((min((min((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_1] [i_2]))), (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [(_Bool)1])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) 1691464673U))))))))));
                    var_22 &= ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                    var_23 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (_Bool)1)));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min(((_Bool)1), (var_5)))) : (((/* implicit */int) arr_3 [i_1 + 1] [(unsigned char)12] [(unsigned char)12])))))))));
                    arr_11 [i_0] [i_3] [i_3] = (~(max((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)4] [i_0]))))))));
                    var_25 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_2) : (((/* implicit */unsigned int) var_7)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_7)))) && (((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) : (((unsigned long long int) ((arr_8 [i_0] [(unsigned char)6]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                    var_26 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [7LL] [(signed char)2] [(unsigned char)5])))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1]) : (((arr_7 [(_Bool)1] [i_1 - 1] [i_3] [i_1 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))));
                    var_27 += ((/* implicit */signed char) 6264163171115750510LL);
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) min((max(((~(var_4))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((max((var_13), (((/* implicit */unsigned int) var_7)))) & ((~(1691464673U))))))));
}
