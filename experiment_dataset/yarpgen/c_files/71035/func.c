/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71035
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_9 [i_1] [(unsigned char)14] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_6 [i_1])))));
                    var_19 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_3 [0ULL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_0]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_20 += ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) (unsigned char)230)), (arr_3 [i_3]))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_11 [i_1 + 2] [(unsigned short)9])) >> (((/* implicit */int) arr_11 [i_0] [i_1 - 1])))) - (((((/* implicit */_Bool) (unsigned short)37577)) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_0])) : (((/* implicit */int) (unsigned short)37577))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) arr_1 [i_0] [(unsigned char)15])), (arr_2 [i_0]))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)10]))) | (arr_10 [i_0] [i_1 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_5 [i_0] [i_1])))))))));
                }
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_23 += ((/* implicit */signed char) var_18);
                    var_24 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_11 [i_1 + 1] [i_4])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_0] [i_4])), ((unsigned char)203)))))));
                    var_25 = ((/* implicit */unsigned short) ((arr_12 [i_0] [i_1 + 1] [i_4]) > (max((arr_12 [(unsigned char)12] [i_1 + 2] [(unsigned char)12]), (arr_12 [i_1] [i_1 + 2] [i_1 + 1])))));
                }
                for (signed char i_5 = 3; i_5 < 16; i_5 += 1) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)228)) && (((/* implicit */_Bool) (unsigned short)37580)))))));
                    arr_18 [i_0] [i_0] [i_5 - 1] = ((/* implicit */unsigned char) arr_14 [i_5] [i_1]);
                    var_27 += (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)117)), (arr_4 [i_0] [i_1 + 3])))));
                    arr_19 [(_Bool)0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(signed char)5] [i_5 + 1] [i_1 - 1] [i_5 - 3])) && (((/* implicit */_Bool) arr_12 [i_0] [i_5 - 2] [i_5])))))));
                    var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 3])) ? (((/* implicit */int) (!(arr_6 [(unsigned char)13])))) : (((((/* implicit */int) (signed char)-117)) % (arr_8 [i_5] [(unsigned short)6] [i_0]))))), ((-((-(((/* implicit */int) (signed char)25))))))));
                }
                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0] [i_1 + 1] [i_1]) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1])))))));
                arr_21 [(unsigned char)8] [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)39)), (min((((((/* implicit */_Bool) arr_13 [2ULL] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27973))) : (15640881068773577002ULL))), ((~(arr_10 [(_Bool)1] [i_1 + 3])))))));
                var_29 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1 + 2])) ^ (((/* implicit */int) (signed char)-54))))) % (min((arr_7 [i_1 - 1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(unsigned short)8])))))) ^ (((/* implicit */unsigned long long int) arr_16 [i_0] [(_Bool)1] [i_1]))));
            }
        } 
    } 
    var_30 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_10)))))))));
    var_31 = var_1;
}
