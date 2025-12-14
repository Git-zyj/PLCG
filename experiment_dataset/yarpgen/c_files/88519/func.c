/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88519
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_0)), (var_8)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */short) (unsigned char)108);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_8 [i_0] [(short)13] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 + 3] [i_2 + 2])) ^ (((/* implicit */int) arr_2 [i_1 - 1] [i_2 + 3]))));
                        var_13 += ((/* implicit */unsigned char) (-(arr_4 [i_1] [i_1] [i_1 + 3])));
                        arr_9 [i_2] [i_2 - 2] [i_2] [(unsigned char)4] [i_2 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_2] [i_2 - 3]))));
                        var_14 = ((/* implicit */long long int) min((var_14), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_6 [i_0])))))));
                    }
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((unsigned char) (unsigned char)205))))), (min((arr_4 [i_2 + 3] [i_1 + 3] [i_0]), (((/* implicit */int) (unsigned char)147))))));
                    arr_11 [i_2] [(unsigned short)10] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_10))))));
                    arr_12 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (+(var_6))))) << (((((((/* implicit */int) (unsigned char)108)) | (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 + 1])))) - (23667)))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_16 [i_0] [i_1] [i_4] = ((/* implicit */short) (unsigned char)105);
                    var_15 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2138621013)) ? (((/* implicit */int) (short)-31640)) : (((/* implicit */int) (unsigned char)144))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_4] [i_0] [12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [(short)6] [13LL] [i_4] [i_4] [i_4] [(_Bool)1]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 3])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)164)) && (((/* implicit */_Bool) arr_15 [i_0]))))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)106))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) -8579692523347885776LL)))))))))));
                }
                for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]))) : (arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1])))) ? (min((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]), (((/* implicit */unsigned long long int) var_3)))) : (((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]) >> (((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]) - (5630956728924939907ULL)))))));
                    arr_25 [i_0] [i_6] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_15 [i_0])))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)31650)) ^ (((/* implicit */int) (unsigned char)125)))))) : ((~(((((/* implicit */_Bool) (short)-18538)) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_6])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_6])))))));
                    arr_26 [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) == (((1185189205) ^ (((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_15 [11])))))) : (((/* implicit */int) (unsigned char)134))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 3) 
                {
                    arr_30 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_24 [i_7] [i_7] [2LL]))) % (((/* implicit */int) var_2))));
                    var_18 = ((/* implicit */unsigned short) arr_15 [i_7 - 2]);
                    arr_31 [i_0] [i_1 + 2] [i_7] = ((/* implicit */_Bool) var_7);
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)136)) > (((/* implicit */int) (short)2748)))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                        var_21 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (1784557164637873241ULL))));
                        var_22 += ((/* implicit */short) 9223372036854775807LL);
                        var_23 = ((/* implicit */unsigned char) (+(arr_28 [i_1 + 3])));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) (short)15258)) | (((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) (short)13667)) : (((((/* implicit */_Bool) arr_32 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_7))))));
                            var_26 = ((/* implicit */int) (short)-5067);
                            arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            var_27 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_38 [i_9] [i_9] [i_10] [i_9] [i_9] [i_9] [(unsigned short)10])))));
                            arr_40 [i_7 + 1] [i_7] [i_10] [i_7] [i_7] = ((/* implicit */_Bool) (+(arr_28 [i_1 + 2])));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_0] [i_12] [i_12] [i_11] = ((/* implicit */int) arr_19 [i_12] [i_1] [i_1] [i_11]);
                            var_28 = ((/* implicit */long long int) arr_0 [i_1 - 1]);
                            arr_48 [i_0] [i_7 - 3] [i_12] = ((/* implicit */unsigned char) -8579692523347885800LL);
                            var_29 = ((/* implicit */unsigned char) (~(((int) arr_4 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7]))));
                            var_30 = ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_42 [i_1 - 1] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 + 3])));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_1] [i_7] [8] [(short)4] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 2])) ? (arr_28 [i_7 - 1]) : (((/* implicit */int) arr_5 [i_7 + 3] [i_1 + 2] [i_1]))));
                            var_31 = ((/* implicit */int) max((var_31), (((((arr_52 [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 3]) + (2147483647))) << (((((/* implicit */int) ((unsigned char) (unsigned char)125))) - (125)))))));
                            var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)45)))))));
                            var_33 = arr_19 [i_7] [i_7 - 1] [i_7 + 2] [i_7];
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_7 - 4] [i_7])) ? (((/* implicit */int) (short)1024)) : (((/* implicit */int) ((_Bool) var_10)))));
                        }
                        var_35 = ((/* implicit */unsigned char) ((int) arr_0 [i_7 - 3]));
                    }
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
    var_37 = var_3;
}
