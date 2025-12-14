/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55258
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
    var_16 += ((/* implicit */unsigned char) ((short) var_15));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_17 *= ((/* implicit */unsigned long long int) min(((short)32379), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-1265)))))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((+(4398046494720LL))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 - 3] [i_0 - 3]))) <= (max((((/* implicit */unsigned int) arr_3 [2U] [2U] [i_1])), (var_7)))))), ((~(((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)124))))))));
            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_5 [i_0] [i_1] [5])) << (((((/* implicit */int) var_5)) - (61018)))))))), (var_4)));
        }
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [4U] [4U] [i_0])) : ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
        var_20 = min((((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(4398046494720LL))) : (((/* implicit */long long int) ((unsigned int) arr_5 [i_0] [i_0] [i_0])))))));
        arr_8 [i_0] [9ULL] = ((/* implicit */unsigned char) (signed char)-100);
    }
    for (long long int i_2 = 4; i_2 < 9; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) arr_5 [0ULL] [i_3 - 1] [(signed char)2])) + (((/* implicit */int) arr_4 [i_3] [i_3])))) - (((/* implicit */int) (_Bool)0))))), (((174790637428507746LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            arr_15 [i_3] = ((/* implicit */unsigned char) arr_12 [i_2 - 4]);
            var_22 *= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 1) 
        {
            var_23 += ((/* implicit */unsigned char) max((((((/* implicit */int) var_5)) >> (((var_7) - (1718192770U))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)97)) && (((/* implicit */_Bool) 100663296))))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (signed char)123))));
            var_25 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_12 [i_2 - 2])))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_26 *= ((/* implicit */unsigned int) ((short) arr_2 [(_Bool)1] [i_5]));
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned short) max((((short) ((unsigned long long int) var_10))), (((/* implicit */short) arr_11 [i_2]))));
                        arr_28 [i_5] = ((/* implicit */unsigned int) (short)-6837);
                    }
                } 
            } 
            arr_29 [i_2 - 2] [i_5] = var_13;
            var_28 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)89))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_29 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_2])) * (((/* implicit */int) var_11))));
            var_30 |= ((var_6) > (((/* implicit */int) arr_17 [i_2] [i_8] [i_2 + 1])));
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    {
                        arr_40 [(unsigned short)4] [i_9] [(signed char)7] [i_9] = ((/* implicit */signed char) ((arr_9 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_10])) && (((/* implicit */_Bool) ((unsigned int) arr_25 [i_11] [i_2] [i_9] [i_2])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            arr_44 [i_2 - 3] [i_9] [i_10] [i_12] [i_11] [(short)7] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)124)) * (((/* implicit */int) arr_34 [i_2 - 3]))));
                            arr_45 [i_12] [i_9] [i_10] [i_11] [i_12] [i_2] [5ULL] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)126))));
                            var_31 += ((short) ((((/* implicit */_Bool) arr_21 [i_2 - 4] [(signed char)2])) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_1))));
                            var_32 = ((/* implicit */long long int) ((unsigned short) var_0));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_50 [i_2] [i_9] [i_13] [i_2] = ((/* implicit */unsigned int) (signed char)-58);
                var_33 *= ((/* implicit */_Bool) ((unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-124))))));
                arr_51 [i_2] [i_9] [(signed char)8] [i_13] = ((/* implicit */unsigned short) ((unsigned int) var_8));
                arr_52 [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_3), (((/* implicit */short) arr_13 [i_2 + 1]))))) - ((+(((/* implicit */int) arr_13 [i_2 - 2]))))));
                var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_6) >= (arr_0 [i_2 - 3]))) ? (((/* implicit */unsigned long long int) var_6)) : (((unsigned long long int) arr_24 [i_2] [i_9] [i_13] [i_2 - 2] [i_9])))))));
            }
            for (short i_14 = 1; i_14 < 9; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 1; i_15 < 8; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) arr_11 [i_16]);
                            arr_60 [i_15] [(signed char)3] = ((/* implicit */signed char) (-((+(((/* implicit */int) ((arr_32 [i_15] [i_2]) != (var_2))))))));
                            arr_61 [i_2 - 3] [i_2] [i_2] [i_2] [i_2] [i_15] [i_2] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) (signed char)93)))) ? (arr_47 [i_2 - 3] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_2])) && (((/* implicit */_Bool) (signed char)110))))))))));
                            var_36 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */int) arr_10 [i_2] [(unsigned char)0]))));
                        }
                    } 
                } 
                var_37 = arr_0 [i_2];
            }
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((var_6) - ((-(((/* implicit */int) arr_38 [i_2 - 4] [i_2 - 3] [i_2 - 4] [i_2 - 4])))))))));
        }
    }
    var_39 = ((/* implicit */signed char) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
