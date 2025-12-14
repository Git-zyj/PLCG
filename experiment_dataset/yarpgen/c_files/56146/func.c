/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56146
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (min((((long long int) arr_0 [i_0] [i_0])), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((int) max((min((3088916771U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (unsigned short)28934))));
            var_17 *= ((/* implicit */short) var_14);
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((var_9), (max((((/* implicit */unsigned int) ((unsigned char) arr_5 [i_2]))), (((arr_5 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))) : (3088916771U)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                var_18 = ((/* implicit */short) 4294967294U);
                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_3 + 4] [i_3]);
                arr_14 [i_2] [6LL] [i_3] |= ((/* implicit */unsigned char) arr_12 [i_3 - 2] [i_3] [i_3 - 2] [i_0]);
            }
            for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_2] [i_2] [(short)7] [i_0] = ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_2] [i_5])), (arr_8 [i_0] [i_0])));
                    var_19 |= ((/* implicit */unsigned char) ((int) var_14));
                    var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_2 [i_4] [i_0])) * (((/* implicit */int) var_5)))));
                    var_21 = ((/* implicit */unsigned char) min((((long long int) ((arr_16 [i_0] [i_2] [i_4]) ^ (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_4] [i_5]))))), (((/* implicit */long long int) arr_9 [(signed char)1] [i_4]))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    arr_23 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) + (arr_16 [i_0] [i_2] [1LL])));
                    arr_24 [(unsigned short)4] [i_0] [i_2] [i_4] [i_4] [10] = (+(((/* implicit */int) ((unsigned char) var_3))));
                }
                arr_25 [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) ((signed char) arr_11 [i_0] [i_2] [i_4] [i_4])))));
                var_22 |= ((/* implicit */short) ((max((arr_22 [i_4] [i_2] [i_0]), (arr_22 [(_Bool)1] [(unsigned char)9] [i_4]))) ? (((((/* implicit */int) ((unsigned short) (unsigned short)65535))) + (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_18 [(_Bool)0] [i_2] [2] [i_2])))))) : ((~(((/* implicit */int) arr_21 [i_4]))))));
            }
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_15))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(var_6)))))) ? ((~(((long long int) arr_20 [i_0] [i_0])))) : (((/* implicit */long long int) max(((+(1067463367))), (var_10))))));
        arr_27 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_9 [i_0] [i_0]) : (arr_9 [i_0] [i_0]))) << (((min((4294967294U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0])))) - (341187124U)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            {
                arr_35 [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_30 [(signed char)1]), (((/* implicit */long long int) arr_28 [(unsigned short)21] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [8]))) : ((-(arr_30 [(unsigned char)7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */int) var_15)) | (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_28 [i_7] [i_7])))))));
                arr_36 [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_1)) >= (1067463374))) || (((/* implicit */_Bool) ((int) var_11))))))) : (((((/* implicit */unsigned int) var_10)) & (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
}
