/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87696
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        arr_9 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_2]))))) ? ((((~(((/* implicit */int) arr_2 [i_0] [i_1])))) >> (((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_8 [(unsigned short)3] [2LL] [i_2] [i_2 - 4] [(unsigned short)3])))) - (45728))))) : ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */int) var_12)) - (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (short)25174)) : (((/* implicit */int) arr_3 [(unsigned short)10] [i_1] [i_0 + 1]))))))));
                        arr_10 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-13047)))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_5 [i_1] [i_3])))))) ? (((int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))) : (((/* implicit */int) var_12))));
                        var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1)))) || (((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) (unsigned short)0)), (var_9)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((short) ((unsigned short) arr_6 [i_0] [i_0] [i_1 - 2] [i_4] [i_5] [i_5 - 1])));
                            var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)-8)) / (((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 2] [i_2 + 1] [i_4] [i_5 + 1] [i_5 - 1]))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_2 - 3] [i_4] [i_2 - 3] [12] [i_0 + 1] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_0)) ? (2244483875450891321LL) : (((/* implicit */long long int) var_13)))) >> (((((/* implicit */int) arr_16 [i_0 - 2] [1] [i_2] [1] [i_0 - 2])) - (24453))))) < (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_1] [i_2 - 3] [i_4] [i_0 - 2] [i_6])))));
                            var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */_Bool) arr_16 [i_6] [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min((arr_16 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_5 [i_1 + 1] [i_2 - 3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29850)) && (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 - 4])))))))));
                            var_25 = ((min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-13)), (var_10)))), ((~(((/* implicit */int) var_0)))))) | (((((/* implicit */int) (signed char)76)) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) (unsigned short)65534)))))));
                            var_26 -= var_18;
                        }
                        arr_19 [i_0] [(unsigned short)15] [i_2] [i_4] = ((/* implicit */short) (-(((((/* implicit */int) (short)8629)) ^ (((/* implicit */int) arr_15 [i_0 + 1] [i_1 - 2] [i_2 - 3] [i_2 + 1]))))));
                        arr_20 [i_4] [(signed char)3] [(signed char)3] [i_0] = var_3;
                        arr_21 [i_0] [i_1] = ((/* implicit */short) (+(min((((/* implicit */long long int) arr_1 [i_4])), (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_4 [i_4] [i_2] [i_1] [i_0])))))));
                    }
                    var_27 = ((/* implicit */unsigned short) max((max((min((((/* implicit */long long int) (unsigned short)37628)), (arr_14 [i_0] [(unsigned short)16] [i_0 - 2] [i_0] [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10624))) : (var_6))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (short)17983)))))))));
                    var_28 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)37628))));
                    arr_22 [i_0] [i_0] [i_0] &= min((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1 - 1] [i_0 - 2])), ((unsigned short)35698)))), ((+(((/* implicit */int) (unsigned short)37628)))));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                    arr_26 [(short)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_0] [i_0 - 3] [i_0 - 3] [(unsigned short)7] [(short)0] [i_0]) : (arr_14 [i_0 - 2] [i_0 - 3] [i_1] [i_7] [i_0 - 2] [i_7])));
                }
                for (int i_8 = 4; i_8 < 14; i_8 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0 - 1] [i_1 - 1]))))), (arr_24 [i_0] [i_0] [i_0 - 3])));
                    arr_30 [i_1] [16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11)) >> (((/* implicit */int) (unsigned short)20))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_8 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1] [i_0])))))));
                    arr_31 [i_1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)38))) ? (var_6) : (((long long int) arr_6 [i_1 - 1] [i_8] [i_1 - 1] [i_1] [i_0] [i_0])))))));
                }
                arr_32 [i_0] = var_11;
            }
        } 
    } 
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_13))) / (((/* implicit */int) var_5)))))))));
}
