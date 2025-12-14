/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80351
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [(unsigned char)7] = ((/* implicit */unsigned int) ((_Bool) arr_3 [i_0] [i_0] [i_0]));
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0 + 1]))))) ^ (((/* implicit */int) (unsigned short)32768))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */int) arr_4 [i_0]))));
                            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_3 + 1])) ? (arr_1 [i_0 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) | (var_19)));
                            var_23 = ((/* implicit */_Bool) (unsigned char)125);
                            var_24 = var_0;
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [(unsigned char)13] [(unsigned char)13]) | (var_16)))) ? ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) > (var_19)))))) : (((/* implicit */int) min((((/* implicit */short) min((((/* implicit */unsigned char) arr_8 [i_0] [10U] [i_1] [(_Bool)1])), (var_12)))), (arr_9 [i_0] [i_0] [i_1]))))));
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */long long int) min(((short)27543), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) (signed char)-126)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_7 [i_0] [i_0])))))));
            var_26 = ((/* implicit */short) (_Bool)0);
            var_27 += ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) var_19)))))));
        }
        var_28 = ((/* implicit */signed char) 3462993530U);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3462993530U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6] [13U] [13U] [i_6] [13U]))))) : (((/* implicit */int) arr_14 [i_6] [i_6]))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)27))) ? ((-(arr_13 [i_6] [i_6] [i_6]))) : (((/* implicit */long long int) ((var_1) >> (((((/* implicit */int) (short)-1)) + (7))))))));
        var_31 = ((/* implicit */int) ((((17354952590293612397ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))))) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (short)-26593)))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-126))));
                    var_33 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8] [i_7]))) == (0U)));
                    var_34 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) 1916749309)))))));
                    var_35 = ((/* implicit */unsigned long long int) ((6272159725185073828LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (+(arr_0 [i_7]))))));
    }
    var_37 += ((/* implicit */unsigned long long int) ((short) var_3));
    /* LoopNest 2 */
    for (unsigned char i_10 = 2; i_10 < 14; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_38 *= ((/* implicit */unsigned long long int) (~(max((max((((/* implicit */long long int) var_12)), (var_16))), (((/* implicit */long long int) arr_7 [i_11] [i_10 - 2]))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) | (((arr_0 [(signed char)13]) << (((/* implicit */int) (short)0))))))) ? (((((((/* implicit */int) (short)16136)) + (((/* implicit */int) var_12)))) >> (((((((/* implicit */_Bool) arr_37 [i_10 + 1] [7] [7] [i_12] [i_12] [7])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (2670592676561677095ULL))))) : (((((((/* implicit */int) (unsigned char)132)) % (((/* implicit */int) arr_18 [i_10])))) | (((/* implicit */int) ((_Bool) (unsigned char)85))))))))));
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27543))) / (var_14)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_11] [i_12]))))) : (((((/* implicit */long long int) 0U)) / (var_16)))))))));
                            var_41 *= ((/* implicit */signed char) (-(((((((/* implicit */int) arr_9 [i_10] [i_12] [i_10])) + (2147483647))) << (((((((/* implicit */int) arr_9 [i_13] [i_12] [(short)16])) + (14062))) - (31)))))));
                            var_42 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 13U)), (17592185782272ULL)));
                        }
                    } 
                } 
                var_43 = ((/* implicit */short) min(((~(((/* implicit */int) arr_28 [i_10] [i_10])))), (((/* implicit */int) arr_28 [13LL] [(_Bool)1]))));
                var_44 = ((/* implicit */_Bool) (unsigned char)0);
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (short)0))));
    var_46 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((var_19) | (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (short)1))))));
}
