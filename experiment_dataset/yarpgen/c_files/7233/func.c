/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7233
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_3] [(_Bool)1] [i_3 + 1] = ((/* implicit */_Bool) arr_5 [i_3]);
                        arr_10 [i_0] [0LL] [(unsigned char)6] [i_3] &= ((/* implicit */unsigned char) -1910469023);
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)28)), (var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_7)))))));
                        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (-1966196577446490331LL)))) >= (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-10601))))))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_19 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(_Bool)1] [i_2] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_1))) >> (((((/* implicit */int) arr_14 [i_5] [i_0] [i_0] [i_1] [i_1] [i_0])) % (((/* implicit */int) arr_14 [i_5] [i_5] [i_2] [i_2] [i_1] [i_0]))))));
                        var_12 = ((/* implicit */int) var_4);
                    }
                    for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) var_2);
                        arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) (+(1966196577446490330LL)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [0U] [(short)13] [i_7] [i_7 - 1] = max((var_4), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(_Bool)1] [i_0] [i_7 - 1])) ? (((/* implicit */int) var_8)) : (var_7)))))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_7))));
                    }
                    var_15 = ((/* implicit */unsigned short) ((((var_9) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */unsigned int) arr_16 [i_1])) | (arr_23 [i_0] [i_0] [i_2]))) : (((arr_23 [8] [i_1] [14LL]) - (arr_23 [i_2] [i_1] [(signed char)2])))));
                    arr_28 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_0]);
                }
            } 
        } 
        arr_29 [i_0] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) (unsigned char)255))))) ? (((/* implicit */long long int) (-(var_7)))) : (arr_32 [i_8])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (short i_11 = 3; i_11 < 10; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_12 = 2; i_12 < 7; i_12 += 1) 
                        {
                            var_17 &= ((/* implicit */int) var_5);
                            var_18 -= ((/* implicit */int) var_3);
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) arr_17 [i_12 - 1] [i_11 - 3] [11U])))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1864893069U))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_43 [(unsigned short)5] [(unsigned short)3] [i_10] [i_10] [i_10] [i_10] [i_10] = ((((/* implicit */int) (unsigned char)0)) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_8] [i_9] [i_8] [i_13])))))));
                            arr_44 [i_13] [i_8] [i_10] [i_9] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
                            var_20 = (_Bool)0;
                        }
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) arr_25 [i_9] [i_9] [(signed char)14] [i_11 - 3] [i_11 + 1] [i_11 - 1])) ? (arr_4 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_3)))))));
        }
        for (short i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            arr_48 [i_8] [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_14] [i_14])) ? (((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_8] [i_8])) : (((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14])))) < (((/* implicit */int) var_10))));
            arr_49 [i_14] = ((/* implicit */short) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_33 [i_8] [i_8] [i_8])), (var_2))))) : (min((((/* implicit */long long int) (unsigned char)228)), ((-(arr_6 [i_14] [i_14] [i_8])))))));
        }
        var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) | (((arr_7 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8]))))));
    }
    for (int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        var_24 = ((/* implicit */signed char) (short)10601);
        arr_52 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_15] [i_15])) + (((/* implicit */int) arr_50 [i_15] [i_15]))));
        arr_53 [i_15] = ((/* implicit */short) (((+(var_7))) != (((/* implicit */int) min((((/* implicit */short) (unsigned char)6)), ((short)15))))));
    }
    for (short i_16 = 0; i_16 < 12; i_16 += 4) 
    {
        arr_57 [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)21063))));
        arr_58 [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (arr_18 [i_16] [i_16] [(_Bool)1] [(unsigned char)4] [i_16]) : (((/* implicit */unsigned int) arr_55 [i_16])))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
    }
    var_25 = ((/* implicit */unsigned int) ((var_1) == (((/* implicit */unsigned int) var_7))));
}
