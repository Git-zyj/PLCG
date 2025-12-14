/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81586
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
    var_20 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (short)-5392)), (var_13))), (((/* implicit */unsigned long long int) (unsigned char)13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : ((~(arr_8 [i_1] [14LL])))));
                        var_23 = ((/* implicit */long long int) (short)-5392);
                    }
                } 
            } 
        } 
        var_24 |= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_8)))));
    }
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        var_25 *= ((/* implicit */unsigned int) ((short) min((arr_7 [i_4 - 1] [i_4 + 3] [i_4 - 1]), (((/* implicit */int) var_17)))));
        var_26 += ((/* implicit */unsigned short) (short)-5396);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_17 [i_4] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)31725)))) ^ (((arr_12 [i_4 - 1] [i_4 + 2]) | (arr_12 [5U] [i_4 + 3])))));
            var_27 = ((/* implicit */short) arr_2 [12]);
            arr_18 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4 + 3] [i_4 + 2])) > (((/* implicit */int) arr_13 [i_4 + 2] [i_4 + 1])))))) | (((arr_13 [i_4 - 1] [i_4 - 1]) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 2] [i_4 - 1])))))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_6] [i_7]) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (2LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-366))) : (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_6]))) + (2LL)))));
            arr_24 [(unsigned short)10] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) var_7)) & (((int) arr_13 [i_6] [i_7]))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            arr_27 [i_6] = ((/* implicit */unsigned char) ((((arr_12 [i_8] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) | (((arr_12 [(unsigned char)10] [i_8]) + (arr_12 [i_6] [i_8])))));
            arr_28 [i_6] [i_8] [i_6] = ((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6]);
        }
        for (int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
        {
            arr_31 [i_6] [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_9] [(unsigned short)18])) >= (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_9] [i_9]))))), (((max((16247735971631527464ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) ^ (((/* implicit */unsigned long long int) var_0))))));
            var_29 = ((/* implicit */unsigned int) 1125899890065408ULL);
            var_30 = ((((/* implicit */_Bool) ((long long int) arr_1 [i_6]))) ? (((((/* implicit */_Bool) 0LL)) ? (104529735) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) 821540337))) > (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 4 */
            for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                arr_34 [i_6] [i_9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (var_2)))) ? (max((((/* implicit */long long int) (signed char)73)), (2LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11)))))))) : (((((/* implicit */_Bool) 18446744056529682432ULL)) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5392)))))));
                arr_35 [i_6] = ((max((((unsigned long long int) (signed char)12)), (((/* implicit */unsigned long long int) arr_14 [i_6] [i_10])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_10))) > (((/* implicit */int) ((unsigned short) arr_30 [i_9] [7]))))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */long long int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_11 [i_9] [i_11]))));
                }
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_10)) : ((-(0LL)))))) ? ((-(((/* implicit */int) arr_15 [i_6] [i_9] [i_11])))) : (min((1909019339), (((/* implicit */int) (unsigned short)3))))));
                    var_34 = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) (short)-26188)) : (((/* implicit */int) (unsigned char)5)))) + (2147483647))) >> (((((((/* implicit */_Bool) max((arr_12 [i_9] [i_9]), (arr_20 [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_17))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [3LL] [i_9] [7LL] [i_9] [i_9]))) : (5141689466098528346ULL))))) - (36574ULL)))));
                }
                arr_45 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) min((arr_42 [i_6] [i_6] [i_6] [i_6] [(unsigned char)2] [i_6]), (((/* implicit */short) (unsigned char)232))))) : (((((/* implicit */int) (unsigned char)191)) & (((/* implicit */int) (_Bool)1)))))) | (((arr_0 [i_11]) ? (((/* implicit */int) ((unsigned short) var_11))) : (3)))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) 
            {
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((arr_46 [i_14 + 3] [i_14 - 1] [i_14 + 1]) + (((/* implicit */int) (signed char)-60)))))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) > (arr_47 [i_9])))))))));
            }
            /* vectorizable */
            for (long long int i_15 = 4; i_15 < 9; i_15 += 1) 
            {
                var_37 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_23 [(signed char)10] [(signed char)10]))))));
                arr_50 [i_6] [(signed char)5] [i_15 - 1] [i_15 - 2] = ((int) ((((/* implicit */int) (unsigned short)31238)) > (1909019321)));
                arr_51 [i_6] [i_6] = ((/* implicit */_Bool) ((arr_20 [i_6]) ^ (arr_20 [i_6])));
                /* LoopSeq 2 */
                for (signed char i_16 = 2; i_16 < 10; i_16 += 3) 
                {
                    arr_54 [i_6] [i_6] [i_15 - 2] [i_15] [i_15 - 2] = ((/* implicit */long long int) ((unsigned short) var_10));
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) ^ (arr_8 [i_16 - 2] [i_15])))));
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3359278276775847732LL)) ? (((/* implicit */int) (short)27592)) : (2147483647)));
                }
                for (short i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    arr_57 [i_6] [i_6] [i_6] = ((/* implicit */short) arr_30 [10LL] [10LL]);
                    var_40 ^= ((int) arr_13 [i_17 + 1] [i_15 - 3]);
                    var_41 = ((68182605824LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))));
                    arr_58 [i_6] [i_9] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((83813717899619798LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82)))))) : (((((/* implicit */_Bool) arr_30 [i_6] [i_9])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_4 [i_6] [i_6] [i_6]))))));
                }
            }
            arr_59 [i_9] [i_6] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((3814553106024109780ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4472))) : (4323455642275676160LL))) : (arr_14 [i_6] [i_9]))), (((/* implicit */long long int) max((((arr_53 [i_6]) ^ (((/* implicit */int) arr_32 [i_6] [i_6] [i_6])))), (((/* implicit */int) arr_25 [i_9])))))));
        }
        var_42 ^= ((/* implicit */short) var_14);
        var_43 = ((/* implicit */_Bool) max((var_43), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) != (-4323455642275676160LL)))));
    }
}
