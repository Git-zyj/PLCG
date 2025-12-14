/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76269
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
    var_20 = ((((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? ((-(var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((((/* implicit */int) (short)-24724)) - (1425743676))) : ((+(var_14)))))));
    var_21 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [(_Bool)1] = arr_2 [i_0];
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)78)) : (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_2 [i_1]))))) : (min((((/* implicit */int) (short)18432)), (arr_4 [i_1] [i_0] [i_0]))))), (arr_5 [i_0] [i_0])));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned char)193)))) ? (((/* implicit */long long int) arr_5 [i_1] [i_0])) : (arr_1 [i_1])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)224)))) : ((((_Bool)1) ? (((/* implicit */int) (short)13091)) : (-1223196291))))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_19))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) 2147483647);
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_7 [i_2 + 1]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_2 [i_4]))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_4] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (arr_7 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1])))));
                    var_27 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]);
                    arr_20 [i_5] [12] [i_4] [5LL] [5LL] = ((int) arr_12 [i_0] [i_3] [i_4 + 2]);
                    var_28 = ((/* implicit */unsigned int) arr_18 [i_5] [i_4] [i_0] [15U] [i_0] [i_0]);
                }
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(arr_12 [i_0 + 2] [i_4 + 2] [i_4 + 1]))))));
                        arr_25 [i_4] [i_6] [i_6] [(unsigned char)12] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        arr_26 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [16] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) arr_21 [i_0 + 1] [i_0 + 2] [i_4] [i_0 - 1] [i_0 + 1])) : (arr_0 [i_0] [i_0])));
                        arr_27 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_11 [i_0] [i_6] [i_7]))));
                    }
                    arr_28 [i_0] [i_4] [i_6] [i_4] = arr_7 [i_3];
                }
            }
            for (int i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
            {
                arr_33 [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) arr_5 [i_3] [i_3]);
                arr_34 [i_8] [i_8] [i_8] = arr_23 [i_0] [i_0] [i_0] [(_Bool)1] [i_0];
            }
            var_30 = ((/* implicit */long long int) arr_24 [i_0] [i_3] [i_3] [6] [i_3]);
            arr_35 [i_3] = arr_12 [i_3] [i_3] [i_3];
        }
        var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (short)18432)) : (((/* implicit */int) max(((short)-24724), ((short)18432))))))));
    }
}
