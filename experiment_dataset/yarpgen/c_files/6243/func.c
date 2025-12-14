/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6243
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (-1LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)53)) >> (((var_6) + (607185655573621435LL)))))) : (var_8))))));
    var_17 = min((var_13), (min((((/* implicit */long long int) ((var_7) && ((_Bool)1)))), (((var_7) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */int) arr_1 [i_0] [4LL])), (((((/* implicit */int) ((unsigned char) arr_0 [(short)0]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        var_19 += ((/* implicit */long long int) min((min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) min((var_3), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (short)13428)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)512))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)0])))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_22 *= (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                                var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_21 [(unsigned char)7] [(unsigned char)7] [i_3] [(_Bool)1] [(unsigned char)7] [i_6] = -13LL;
                        arr_22 [(unsigned char)5] [i_1] [(unsigned char)5] [i_1] [i_6] [i_6] = ((/* implicit */_Bool) 8863754959339259285LL);
                        var_24 = ((/* implicit */_Bool) ((long long int) arr_15 [i_3 + 1] [i_2]));
                        var_25 = ((/* implicit */unsigned char) var_8);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_1] [(unsigned char)11] [i_1] [i_7] [i_7] = var_6;
                        var_26 += ((/* implicit */long long int) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned char)0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_31 [(_Bool)1] [i_2] [i_2] [(short)12] [i_3] [(unsigned char)8] [(unsigned char)15] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_14 [(_Bool)1] [(_Bool)1] [i_3] [i_9])))));
                                var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]))));
                                var_28 = ((/* implicit */short) (~(5LL)));
                                var_29 = ((/* implicit */short) min((var_29), (((short) ((((/* implicit */_Bool) arr_8 [i_3] [i_8] [i_9])) ? (arr_30 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(unsigned char)14])) && (((/* implicit */_Bool) (~(var_13))))));
                }
                arr_32 [i_2] [2LL] [2LL] = arr_9 [i_1];
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_31 = var_8;
                    var_32 = ((/* implicit */unsigned char) ((long long int) var_12));
                    var_33 = ((/* implicit */unsigned char) ((((max((((/* implicit */long long int) arr_9 [i_1])), (var_8))) <= (arr_28 [i_2] [i_10] [i_10] [i_2] [i_2] [(short)5] [5LL]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (min((((/* implicit */long long int) var_12)), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_15 [i_2] [i_1])) : (((/* implicit */int) var_12))))))))));
                    arr_37 [i_1] [i_2] [(unsigned char)12] = min((arr_30 [i_1]), (arr_18 [i_2] [i_10]));
                }
                for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            {
                                var_34 = ((((/* implicit */_Bool) arr_40 [(_Bool)1] [i_2] [(unsigned char)14] [(unsigned char)14] [(_Bool)1] [i_12])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_1] [i_1] [i_11] [i_12] [i_12] [i_1]))))) : (((((var_13) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_40 [(_Bool)1] [i_12] [i_1] [i_1] [i_1] [i_1])) + (17876))) - (52))))));
                                arr_44 [i_1] [3LL] [i_1] [i_1] [i_1] [i_1] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (min((arr_28 [(_Bool)1] [i_2] [(_Bool)1] [i_11] [14LL] [i_13] [i_2]), (((/* implicit */long long int) var_1))))));
                                arr_45 [i_1] [i_1] [i_11] [i_12] [11LL] [i_13] = arr_26 [i_1] [i_1];
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) arr_4 [(unsigned char)15]);
                }
            }
        } 
    } 
}
