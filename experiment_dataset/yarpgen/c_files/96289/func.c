/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96289
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
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) var_16))))))) ? (min((((/* implicit */unsigned long long int) var_3)), ((-(var_14))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (((unsigned long long int) var_4))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
            {
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))) * (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? ((~(((/* implicit */int) (!(var_1)))))) : (((/* implicit */int) arr_5 [i_1])));
                var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1])))))));
                var_23 = ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) / (((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_12)))));
            }
            for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
            {
                arr_12 [(_Bool)0] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                arr_13 [i_0] [(_Bool)1] [i_3] [i_3] = ((/* implicit */int) var_2);
                var_24 = ((/* implicit */unsigned int) var_11);
                var_25 = ((arr_1 [i_3]) ^ (((arr_4 [i_0] [i_1]) ? (var_3) : (arr_1 [i_0]))));
                arr_14 [14U] [i_1] = ((/* implicit */_Bool) (~((-(var_3)))));
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
            {
                arr_17 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4] [3LL]))))));
                var_26 = ((((int) var_4)) << (((arr_9 [i_1] [i_1]) - (3008446962U))));
                arr_18 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_4 [i_0] [i_1])))) & (((/* implicit */int) var_0))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                var_27 -= ((/* implicit */unsigned int) (-(196616143)));
                arr_21 [i_0] [(short)12] [i_5] [i_0] = ((/* implicit */signed char) var_18);
            }
            arr_22 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (arr_20 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
            arr_23 [i_0] = ((/* implicit */_Bool) max((((((var_3) | (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) 592757912)))), (((((/* implicit */_Bool) ((int) var_18))) ? (((/* implicit */long long int) (~(var_7)))) : ((-(9223372036854775788LL)))))));
        }
        for (long long int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                arr_29 [i_0] [6] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (592757932) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) var_12))));
                var_28 = arr_6 [i_0] [i_6] [13];
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            arr_35 [i_6 - 2] [i_6] [i_8] [i_7] [16] [i_6] = ((unsigned long long int) arr_11 [i_6] [i_8] [8] [i_8]);
                            var_29 = ((/* implicit */unsigned long long int) var_13);
                            arr_36 [i_0] [i_6 - 3] [i_7] [i_8] = ((/* implicit */long long int) ((int) (~(arr_20 [i_0] [i_6 - 3]))));
                        }
                    } 
                } 
            }
            for (int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                var_30 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_10] [i_6] [i_10])) / (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (592757940))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_6))))))));
                arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) ((_Bool) var_1)))) % (((((/* implicit */unsigned long long int) 29U)) % (var_18)))));
                arr_40 [(_Bool)1] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((2311514162U), (((/* implicit */unsigned int) ((_Bool) var_7))))))));
            }
            var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) & (max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)0] [i_6] [2])), (var_14)))))));
            arr_41 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_15 [i_0] [i_0] [14LL])))) - (((/* implicit */int) arr_26 [i_6 - 3] [(unsigned short)0] [i_6]))))) : (max((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60323))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))))));
        }
    }
}
