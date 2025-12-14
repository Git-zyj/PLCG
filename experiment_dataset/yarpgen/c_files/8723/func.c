/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8723
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [0] = ((((/* implicit */_Bool) ((int) (signed char)-37))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)5])))))) : (min((max((549755813887LL), (549755813884LL))), (-549755813888LL))));
                    var_12 = ((/* implicit */short) ((unsigned char) max((((var_0) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) -549755813888LL)) ? (-549755813861LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_13 = arr_7 [i_3];
                        var_14 -= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_0 + 2] [(short)2] [(short)2] [(short)2] [4LL]))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        arr_15 [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_5) : (arr_4 [i_0 - 2] [(unsigned char)2] [i_2])));
                        arr_16 [i_0] [(signed char)19] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (-549755813852LL))));
                        arr_17 [i_0] |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_4]))) < ((-(549755813887LL)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            arr_25 [i_1] [i_5] [i_5] [(short)6] [i_5] = (+(((/* implicit */int) var_2)));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))) : (-549755813873LL))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 3) 
                        {
                            var_16 *= ((/* implicit */unsigned short) arr_4 [3LL] [(unsigned short)6] [(unsigned short)6]);
                            var_17 = ((/* implicit */long long int) (+((~(arr_6 [18] [18] [i_2] [i_2])))));
                            var_18 += ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)8]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_8 - 1] [(signed char)3] [i_8] [i_8] [i_8] [i_8])) >> (((((/* implicit */int) ((unsigned char) var_5))) - (84)))));
                            var_20 *= ((/* implicit */unsigned char) arr_6 [(unsigned char)20] [2LL] [i_2] [(unsigned short)15]);
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) arr_19 [i_8] [(signed char)7] [(signed char)7] [i_1])) : (((/* implicit */int) arr_27 [i_2] [i_2] [13U] [(unsigned short)12] [i_5]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (928492154U)))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)32745))) && (((/* implicit */_Bool) arr_27 [i_5] [i_5] [0] [i_1] [i_5]))));
                            var_23 = ((/* implicit */long long int) arr_13 [i_0] [(signed char)10] [i_2] [i_0] [i_8]);
                        }
                        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)150))))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned char) arr_9 [i_0] [(signed char)0] [1LL] [i_1] [i_0])))));
                        }
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) % (549755813863LL)))))) + (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-84)), (6626534622903483565LL)))) ? (((arr_37 [(short)1] [i_0] [i_0] [8U] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((var_5) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))))))));
                        var_27 = arr_22 [i_2] [18LL] [8] [i_10];
                        var_28 &= ((/* implicit */long long int) (((((+(arr_14 [(unsigned short)12] [i_1] [(unsigned char)7] [i_1] [i_0] [i_10]))) < (((/* implicit */int) ((var_9) <= (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 2] [(unsigned char)18])) < (((((/* implicit */_Bool) arr_6 [i_0] [3LL] [i_2] [(_Bool)1])) ? (549755813870LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))))) : (((/* implicit */int) arr_31 [i_0] [(unsigned char)20] [(unsigned char)20] [i_1]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                {
                    var_29 = ((/* implicit */_Bool) (~(549755813883LL)));
                    arr_46 [i_11] [12U] [(signed char)8] [(signed char)8] = max((var_9), (((/* implicit */int) var_11)));
                }
            } 
        } 
        arr_47 [i_11] |= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-34))));
    }
    for (short i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        var_30 *= ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_14] [(_Bool)1] [(short)14] [i_14] [i_14] [i_14]))))), (((((/* implicit */_Bool) (unsigned short)15360)) ? (((-8749311968868594217LL) ^ (-549755813876LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)220)) / (((/* implicit */int) var_2)))))))));
        arr_50 [i_14] [6LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_29 [i_14] [11LL] [11LL] [i_14] [20LL] [2])))))))));
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    {
                        arr_60 [(short)0] [i_17] [i_17] = ((/* implicit */unsigned short) max((((549755813891LL) / (arr_4 [i_14] [i_14] [13LL]))), (((/* implicit */long long int) arr_59 [i_14] [i_14] [(unsigned char)9] [(unsigned short)10] [i_14] [8U]))));
                        var_31 *= ((/* implicit */short) var_5);
                        var_32 = ((/* implicit */unsigned char) max((var_32), ((unsigned char)94)));
                        var_33 *= ((/* implicit */unsigned char) (+(((long long int) (~(var_0))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_18 = 1; i_18 < 19; i_18 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_19 = 3; i_19 < 17; i_19 += 4) /* same iter space */
        {
            arr_66 [i_18] [i_18] [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_1)) - (37315)))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) (signed char)53)) & (((int) max((-8423009932581150074LL), (((/* implicit */long long int) (unsigned short)65535))))))))));
            var_35 += ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) * (((long long int) arr_64 [i_18 - 1])));
        }
        for (long long int i_20 = 3; i_20 < 17; i_20 += 4) /* same iter space */
        {
            arr_71 [i_20] [i_20] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)150)) <= (((/* implicit */int) (unsigned char)233))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (unsigned int i_22 = 0; i_22 < 20; i_22 += 2) 
                {
                    {
                        var_36 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((unsigned int) arr_72 [i_22])) % (((/* implicit */unsigned int) var_9)))))));
                        var_37 = ((/* implicit */int) var_2);
                        var_38 ^= ((/* implicit */long long int) arr_18 [i_22]);
                    }
                } 
            } 
        }
        var_39 = ((((/* implicit */_Bool) (short)-23561)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23671))));
        arr_77 [11LL] = ((/* implicit */unsigned char) arr_22 [20LL] [i_18] [20LL] [(short)20]);
    }
}
