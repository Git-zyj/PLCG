/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9935
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_3))) && (((var_0) || (((/* implicit */_Bool) 743769250))))))) & (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_13 = ((/* implicit */long long int) max((var_13), (-9029740085472044010LL)));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)96)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        }
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_15 *= ((/* implicit */unsigned char) max((3290346929520807362LL), (((/* implicit */long long int) var_6))));
            arr_10 [i_0] [i_0] [9LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)124))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((signed char)43), (var_9)))), ((~(min((var_3), (((/* implicit */long long int) (signed char)-56))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                arr_16 [i_0] [i_3] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_20 [i_0] [19U] [i_4] [i_4] [i_5] [i_0]))));
                        arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_0 [i_3] [i_4]))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((_Bool) ((signed char) var_10))))));
                    arr_23 [i_0] [i_3] [(unsigned char)7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_21 [i_0] [(short)0] [i_0] [i_4] [i_5] [i_5] [i_5]))));
                    var_19 = ((/* implicit */_Bool) (-(arr_11 [i_0] [i_3] [i_4])));
                }
                arr_24 [i_0] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_4 [i_0]));
            }
            arr_25 [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) ((unsigned short) 6714295145427336683LL))))) % (max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) (signed char)57)) + (((/* implicit */int) (signed char)-51))))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (984591286880375137LL)))), (min((((/* implicit */unsigned long long int) var_0)), (9628330153891345302ULL))))))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 70368677068800ULL))));
            arr_29 [i_0] [15ULL] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)43)), (arr_2 [i_0] [i_7])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned short i_10 = 2; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        {
                            arr_41 [i_0] [(unsigned char)5] [i_9] [i_10] [(unsigned char)20] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_31 [i_0] [i_10 + 1]))) + (((/* implicit */int) (_Bool)0))))), ((((-(561246459419178071ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11))))))));
                            arr_42 [i_0] [i_0] = var_0;
                            var_22 += ((/* implicit */_Bool) arr_36 [i_11] [i_10 - 1] [(_Bool)1] [i_10 - 1]);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) ((_Bool) ((min((arr_28 [(_Bool)1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)185)))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [(unsigned char)18] [i_8] [i_8] [i_0])), (266287972352LL)))))));
            arr_43 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_36 [i_0] [7ULL] [i_8] [i_0]))))) ^ (max((((/* implicit */long long int) (unsigned char)174)), (arr_35 [i_0] [i_0] [i_8] [i_8])))));
            arr_44 [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18046510354478905745ULL)))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)36))))), (3758096384ULL)))));
        }
        arr_45 [i_0] = ((/* implicit */_Bool) 1590079385382788623ULL);
    }
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        arr_48 [19LL] = ((/* implicit */_Bool) 9223372036854775792LL);
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            for (long long int i_14 = 2; i_14 < 23; i_14 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_46 [i_13]))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((min((arr_50 [i_12]), (((/* implicit */unsigned long long int) arr_51 [i_12] [i_12] [i_12])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (short)20528)))))))))) <= (((long long int) arr_50 [17])))))));
                        arr_56 [i_15] = ((/* implicit */unsigned char) ((max((-6213011614640879657LL), (min((((/* implicit */long long int) arr_54 [i_12] [i_13] [i_14] [i_15 - 1])), (6312249721650203718LL))))) * (((long long int) var_11))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((((/* implicit */int) var_4)) & (((/* implicit */int) var_6))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 3; i_16 < 22; i_16 += 4) 
                        {
                            var_27 -= (-(6312249721650203732LL));
                            var_28 ^= ((/* implicit */signed char) (-(((unsigned long long int) arr_49 [i_14 + 1]))));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 24; i_17 += 3) 
                        {
                            arr_63 [i_15] = ((/* implicit */unsigned short) 5743819101898606412LL);
                            var_29 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (signed char)-51)) + (((/* implicit */int) var_6)))));
                            arr_64 [i_12] [i_13] [i_15] [i_15 - 1] [i_17] = 955896482U;
                            var_30 = ((((/* implicit */int) arr_60 [i_13] [(unsigned short)23])) >> (((/* implicit */int) arr_60 [i_15 - 1] [(_Bool)1])));
                        }
                    }
                    arr_65 [i_12] [(unsigned char)23] [i_13] [i_14 + 2] = ((/* implicit */unsigned long long int) max((max((arr_51 [i_14 - 2] [i_14 + 2] [i_12]), (arr_51 [i_14 - 1] [i_14 + 2] [i_14]))), (((/* implicit */long long int) (short)-10272))));
                    var_31 ^= ((((unsigned long long int) (_Bool)1)) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (2296835809958952960LL)))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_1)) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-52)), ((unsigned char)126)))))))))));
}
