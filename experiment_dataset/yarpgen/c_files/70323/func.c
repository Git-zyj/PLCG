/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70323
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            var_16 |= ((/* implicit */_Bool) (signed char)32);
            /* LoopNest 3 */
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_14))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (12809628324039627932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23863)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_8 [i_0 - 1] [i_3] [(unsigned char)14] [i_2] [i_3] [i_0 - 1]))))));
                            var_19 = (~((-(((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned char) arr_10 [i_0 + 1] [6U] [6U] [i_1] [i_1]);
        }
        for (short i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            arr_15 [i_0] [i_5] = ((/* implicit */int) ((_Bool) (short)-11840));
            var_21 = ((/* implicit */unsigned long long int) var_7);
            arr_16 [i_0] [(_Bool)1] [(unsigned char)10] |= ((/* implicit */unsigned long long int) (signed char)32);
        }
        arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)20)) ? ((+(arr_11 [i_0 - 1]))) : (max((var_7), (arr_11 [i_0 - 1]))));
    }
    for (int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
    {
        arr_21 [i_6 - 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-121)) ? (5277060111530899848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12))))))));
        arr_22 [i_6] = ((/* implicit */short) -1LL);
        arr_23 [i_6] = ((/* implicit */short) min((((arr_18 [i_6 - 1]) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_6 - 1])) % (((/* implicit */int) (short)23863)))))));
    }
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                arr_29 [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)9] [i_7] [i_8] [(_Bool)1] [i_8])) ? (((((/* implicit */_Bool) var_14)) ? (arr_1 [i_7 + 1] [i_8]) : (((/* implicit */unsigned long long int) -3109048)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)128)))))))) && (((/* implicit */_Bool) 333771135497773672ULL))));
                var_22 |= ((/* implicit */unsigned int) arr_2 [i_7] [i_8]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_9 [i_9] [i_10])) : (((/* implicit */int) arr_9 [i_9] [i_10]))))) ? (((/* implicit */int) ((short) -1673577157))) : (((((/* implicit */int) arr_7 [i_9] [i_10] [i_10] [i_9] [i_9])) & (((/* implicit */int) arr_9 [i_10] [i_9]))))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_2 [(signed char)2] [i_11 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_10] [i_11] [i_11]))) : (arr_1 [i_9] [i_9])));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_42 [i_9] [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_41 [i_11 + 1] [i_11 - 1])) && (((/* implicit */_Bool) (short)-128)))) ? (((/* implicit */int) ((short) (unsigned short)65528))) : (127)));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            arr_46 [i_10] [i_10] [i_10] [i_12] [i_13] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) 0LL)));
                            var_25 = ((/* implicit */short) var_7);
                            arr_47 [i_10] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)-11136))))));
                            var_26 += ((/* implicit */short) arr_19 [i_12]);
                        }
                        arr_48 [i_9] [i_9] [i_11] [i_10] = ((/* implicit */_Bool) (~((+(((/* implicit */int) min(((short)20789), ((short)-25317))))))));
                        var_27 |= ((/* implicit */_Bool) 0);
                    }
                }
                for (long long int i_14 = 1; i_14 < 12; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_55 [i_9] [i_9] [i_9] [i_10] = ((/* implicit */short) 3109048);
                        arr_56 [i_10] [i_10] [i_14 - 1] [i_14] [i_15] [i_15 - 1] = ((/* implicit */_Bool) (((+(-1673577157))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_31 [(unsigned char)13] [i_10]))))));
                        var_28 = ((/* implicit */short) ((unsigned short) arr_38 [i_10] [i_15 - 1] [i_15]));
                        arr_57 [i_14] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 724889889))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_9] [i_10] [i_14 - 1] [i_15 - 1])) && (((/* implicit */_Bool) arr_20 [i_14]))))) : (((/* implicit */int) ((_Bool) 2979244756982958702LL)))));
                    }
                    arr_58 [i_10] [i_10] = ((/* implicit */unsigned short) arr_12 [i_9] [i_10] [i_14]);
                    arr_59 [i_10] = ((/* implicit */int) (+(max((((((/* implicit */_Bool) (unsigned short)47610)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_10]))) : (arr_0 [i_10] [i_9]))), (((/* implicit */unsigned int) (short)32755))))));
                }
                arr_60 [i_9] [i_9] [i_10] = ((((long long int) var_10)) ^ (((long long int) arr_18 [i_10])));
                var_29 = ((/* implicit */int) -8220506067638776434LL);
            }
        } 
    } 
}
