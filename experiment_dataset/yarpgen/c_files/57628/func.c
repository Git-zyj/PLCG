/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57628
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
    var_10 = ((/* implicit */short) min((((((/* implicit */int) var_9)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))), ((!(((/* implicit */_Bool) var_6))))));
    var_11 = ((/* implicit */unsigned short) ((max((var_1), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) + (var_1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0 - 2] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_0])) ? (max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)63)))), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) (unsigned char)63))))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_4)))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63687))) : (var_3))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))) ? (((var_2) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)63)))), (arr_10 [i_3])))) ? (((/* implicit */int) ((((unsigned long long int) arr_9 [i_3])) >= (((/* implicit */unsigned long long int) arr_10 [i_3]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_3])) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) / (var_1))))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3] [i_4]))) ? (((/* implicit */long long int) ((unsigned int) arr_9 [i_3]))) : (max((((/* implicit */long long int) arr_9 [i_3])), (arr_11 [i_3] [i_3])))));
            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (arr_10 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
            var_17 = ((/* implicit */unsigned char) ((long long int) (-((-(((/* implicit */int) arr_12 [i_3] [i_4])))))));
        }
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8 - 1] [i_8 - 1]))) | (arr_19 [i_5] [i_8 - 1] [i_8])));
                            var_19 = ((/* implicit */signed char) arr_22 [i_3] [i_5] [16LL] [i_7]);
                        }
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [(signed char)8])) ? (((/* implicit */int) arr_13 [i_3] [i_9])) : (((/* implicit */int) var_9))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5344180179116724723ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))))));
                        }
                        var_22 |= ((/* implicit */unsigned short) ((arr_26 [i_3] [i_7] [i_6] [(unsigned char)12] [i_5] [(unsigned char)12] [i_3]) ? (((/* implicit */int) arr_26 [i_3] [i_5] [i_6] [i_7] [i_7] [i_7] [i_3])) : (var_7)));
                        var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned short)63687))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_3] [i_3] [6LL] [i_3])) - (((/* implicit */int) var_9))))) / (arr_10 [i_3])));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                arr_33 [i_5] = ((/* implicit */long long int) ((unsigned int) arr_13 [i_3] [i_5]));
                var_25 = var_0;
                var_26 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)63687)))) | (((/* implicit */int) (unsigned char)193))));
            }
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2))));
        }
        var_28 &= ((/* implicit */signed char) 3002980046U);
    }
}
