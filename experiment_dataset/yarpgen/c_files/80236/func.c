/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80236
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (short)16344))));
    var_20 = var_0;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [3U] [i_1])) | (0)));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((_Bool) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((var_3), (((/* implicit */long long int) arr_5 [i_1] [i_1] [(short)6]))))))) ? ((-((-(arr_0 [i_0]))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)60937)) - (((/* implicit */int) (short)-8250)))) - (((((/* implicit */int) (signed char)75)) - (((/* implicit */int) (_Bool)0)))))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (+(arr_1 [i_0] [i_2]))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                var_23 = ((/* implicit */int) max((var_23), ((-((~((((_Bool)1) ? (((/* implicit */int) (unsigned short)85)) : (0)))))))));
                var_24 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) == (-22LL))) && (((/* implicit */_Bool) ((arr_4 [i_0] [i_2]) ? (13) : (((/* implicit */int) arr_8 [i_3 - 1])))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    var_25 *= ((/* implicit */signed char) arr_5 [i_2] [(signed char)1] [i_2 - 2]);
                    var_26 = ((/* implicit */unsigned long long int) arr_10 [i_4] [(signed char)1] [i_2]);
                    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_18))));
                }
                for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_10 [(signed char)8] [i_5] [(_Bool)1]))));
                        arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -22LL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60950)) && (((/* implicit */_Bool) (unsigned short)60937)))))))) : ((~(arr_3 [i_2 - 1] [i_6 + 1])))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 -= ((/* implicit */short) -1);
                        var_30 = ((/* implicit */signed char) ((arr_11 [i_2] [i_3 - 2] [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_5 - 1] [i_2 - 3] [i_2])))));
                        var_31 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_3 - 1]))) : (((((/* implicit */_Bool) (unsigned short)60950)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21083))) : (15456286407441626578ULL))))));
                        arr_24 [i_2] [i_5] [(unsigned short)11] [(short)12] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_17)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0]))) > (arr_1 [i_7] [i_2]))))))) / (arr_3 [i_3 + 1] [i_3 + 1])));
                        var_32 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 0)) ? (15937566128117717938ULL) : (((/* implicit */unsigned long long int) 728915212U)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)25198)) + (((/* implicit */int) (short)-4371)))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        var_33 = var_7;
                        var_34 = ((unsigned long long int) 450276316);
                    }
                    var_35 &= ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_5 - 1] [i_2 + 1] [0U] [i_0]))))), (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))))));
                    arr_29 [i_2] [i_3 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_17 [i_2]);
                }
                var_36 *= ((/* implicit */_Bool) min((((arr_4 [i_0] [i_0]) ? (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_2] [i_2 + 1] [i_2 + 1]))) + (arr_23 [i_0] [i_0] [i_0] [i_2 - 2] [i_3]))) : (((/* implicit */long long int) (+(var_9)))))), (((/* implicit */long long int) arr_15 [i_2 - 1] [i_2] [i_3] [i_0]))));
            }
            for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) ((arr_0 [i_9 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0])))));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (var_15) : (((/* implicit */unsigned long long int) (+(16777215U))))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-54)) ? (arr_12 [i_2 - 3] [i_10] [i_10 + 2] [i_11 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_9])))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) var_17);
                        arr_39 [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_37 [i_0] [i_2 + 1] [i_9 + 1] [i_0] [i_12] [i_2] [13U]))))));
                    }
                    arr_40 [i_0] [(_Bool)1] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned int) 160306414);
                    var_41 = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_9] [i_9 + 1] [i_10] [i_10 + 4]);
                    arr_41 [i_2] [i_2] = ((/* implicit */unsigned int) 18446744073709551607ULL);
                }
                var_42 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_43 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(var_3)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_38 [i_2 + 1])))) : (((((/* implicit */_Bool) 1650963201)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(10582345444623138248ULL))))));
            }
        }
        var_45 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) arr_22 [i_0])) : (min((var_9), (((/* implicit */int) arr_18 [i_0] [i_0] [0ULL] [i_0] [i_0] [(unsigned char)2] [i_0])))))) * (((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) (_Bool)1)))) : (arr_38 [i_0])))));
        var_46 = max((((((/* implicit */_Bool) var_17)) ? (min((arr_31 [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) var_16)))) : (3403470896329936401ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_0)))))));
        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-26847)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (short)21060))))))))));
    }
}
