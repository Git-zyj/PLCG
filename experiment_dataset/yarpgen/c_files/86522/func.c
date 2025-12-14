/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86522
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((min((var_8), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_11))))) : (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_0] [(signed char)10] [i_1] [i_2] [6] [6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) (short)-1)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((10616736381059362087ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))));
                            var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_3]))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_5] = ((unsigned long long int) var_1);
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) -7381957259392997435LL)) ? (2436392934U) : (var_0))))));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) var_12);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) var_0))))))))));
                            var_24 = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [(_Bool)1] [(signed char)10] [(_Bool)1] [i_0] [i_0]))))) ? (max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))) : (var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))));
                            arr_18 [i_6] [i_3] [(signed char)17] [i_1] [i_0] = min((((/* implicit */long long int) 127)), (405168612083590437LL));
                        }
                        var_25 = ((/* implicit */unsigned long long int) (+(((unsigned int) ((var_7) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) var_12)))))));
                        var_26 *= ((/* implicit */_Bool) ((max((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_2]))))), (((/* implicit */long long int) arr_9 [i_3] [i_2] [i_1] [i_1] [i_0])))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)123)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        arr_26 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11295158021223240408ULL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((int) var_12))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_7] [i_8] [6] [i_0]))) : (405168612083590437LL))))) : (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) var_9)) : (((var_14) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_25 [i_8] [i_8] [i_8] [i_8 - 1])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_8 + 2] [i_8 + 2] [i_10] [i_8] [(_Bool)1])) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) ((_Bool) (signed char)-123)))));
                            arr_29 [i_10] [i_8] [i_8 + 2] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11295158021223240408ULL)) ? (((/* implicit */long long int) arr_23 [i_8 + 2] [i_8 + 1] [i_8 + 2])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (2628167958506007341LL)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_8 + 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_17 [7ULL] [i_8 - 1] [i_7] [i_0] [i_0] [i_0])));
                            var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_8 + 1]))));
                            arr_33 [i_11] [i_8] [i_8] [i_8] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_28 [i_0] [i_7] [(unsigned char)8] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8 - 1] [i_8 + 2] [i_8 - 1]))) : (arr_1 [i_8 + 1])));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                        {
                            arr_37 [i_12] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - ((+(11295158021223240408ULL)))));
                            var_30 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)-122))))));
                            arr_38 [i_8] [i_12] [i_8] [i_8] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_7] [i_8 + 2]))));
                            arr_39 [9ULL] [i_9] [i_8] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_7] [(_Bool)1] [i_9]);
                        }
                        arr_40 [i_0] [i_8] [i_8 + 1] [i_9] = ((/* implicit */unsigned long long int) max((6022807899999748574LL), (((/* implicit */long long int) (signed char)127))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1679272424)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42084)))) : (((/* implicit */int) (_Bool)1))));
    }
    var_32 = ((/* implicit */unsigned char) ((unsigned long long int) var_13));
}
