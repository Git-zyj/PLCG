/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57413
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)8)) > (((/* implicit */int) var_11)))), ((!(((/* implicit */_Bool) (unsigned char)247))))))), ((+(var_8))))))));
    var_13 = ((/* implicit */signed char) (((-(((unsigned int) -1024)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))))));
    var_14 = ((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */signed char) (+(var_8)));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) (+(3895507970311329278LL)));
                arr_9 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)8);
                arr_10 [i_0] = arr_1 [i_0];
            }
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) /* same iter space */
            {
                arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_4 - 2]))));
                var_18 = ((/* implicit */int) ((unsigned long long int) arr_15 [i_4 - 2]));
            }
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_6 = 4; i_6 < 19; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_8 [i_5] [i_3] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) > (((/* implicit */int) arr_16 [i_6] [(_Bool)1] [i_0] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned long long int) var_5)))));
                        arr_27 [i_3] [i_0] [i_5] [i_5] [i_7] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_6 - 1] [i_6] [i_5 - 1])) / (((/* implicit */int) arr_21 [i_6 - 3] [i_6] [i_5 - 1]))));
                        arr_28 [i_3] [i_3] = ((((/* implicit */int) (unsigned char)233)) / (((/* implicit */int) (unsigned char)236)));
                        arr_29 [i_0] [i_3] [i_5] [(_Bool)1] [i_7] [i_0] [i_5] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 17552738460523502227ULL))))));
                        var_21 = ((/* implicit */int) var_0);
                    }
                    arr_30 [i_3] [i_3] [i_3] [i_0] [i_5] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (31U)))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)236))))))));
                }
                for (int i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    arr_33 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 - 1])))));
                    arr_34 [i_0] [i_3] [12] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_8 - 1]))));
                    arr_35 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8])) - (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_9 = 3; i_9 < 18; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_42 [i_3] [i_3] = (+(((/* implicit */int) arr_7 [(unsigned char)4] [i_3] [i_5 - 1])));
                        arr_43 [i_3] [i_5] [i_5] [i_9] [i_10] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_2 [i_5 - 2]))));
                        arr_44 [i_9] [(signed char)0] [i_5] [i_3] [i_10] = arr_4 [i_9 + 1] [i_5 - 2];
                    }
                    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
                    {
                        var_23 -= ((/* implicit */short) ((signed char) -261296227));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15099811928057502906ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) : (0LL)))));
                        arr_47 [i_0] [i_3] [i_5] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */int) arr_39 [i_5] [i_3] [i_5] [i_0] [i_12]);
                        var_26 ^= (~((-(((/* implicit */int) var_1)))));
                        var_27 = ((/* implicit */unsigned short) ((short) -17LL));
                        arr_51 [i_3] [i_3] [i_3] [i_9] [i_12] = ((/* implicit */signed char) var_9);
                        var_28 ^= ((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_12] [i_12]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        arr_54 [4] [i_3] [i_5] [i_3] [i_13] [i_13] |= ((arr_20 [i_13] [i_3] [i_3] [i_3]) / (((/* implicit */int) var_6)));
                        var_29 ^= ((/* implicit */long long int) (-((((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_32 [i_0] [i_3] [i_0] [i_9] [i_13]))))));
                    }
                }
                arr_55 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [20ULL] [i_0] [i_0]))));
                arr_56 [15] [i_3] [i_5 - 2] = ((/* implicit */int) (unsigned char)227);
            }
            var_30 ^= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7))))));
            var_31 = ((/* implicit */unsigned short) arr_25 [i_0] [i_3] [i_0] [i_0] [i_0]);
        }
        arr_57 [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(var_7)))));
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0])) % (arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((long long int) var_10))))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_33 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) max((-64837283906897787LL), (((/* implicit */long long int) arr_60 [(_Bool)1] [i_14]))))) % (((var_7) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3985))))))) == ((~(((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        var_34 += ((/* implicit */int) ((((max((var_7), (((/* implicit */unsigned long long int) arr_59 [i_14])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_14])))));
    }
}
