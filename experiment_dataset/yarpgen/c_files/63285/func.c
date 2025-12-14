/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63285
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(unsigned char)7] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(arr_1 [i_1 - 3] [i_1 - 3])));
            var_16 = ((/* implicit */signed char) arr_0 [i_1 + 1]);
            var_17 = ((/* implicit */unsigned int) ((arr_1 [i_1] [i_1 - 2]) + (((/* implicit */int) arr_2 [i_0]))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_7))));
            var_19 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2]);
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [14LL] [i_0]))) : (((((((/* implicit */long long int) 5U)) - (-2255542322261080772LL))) >> (((/* implicit */int) var_0))))));
            var_21 += ((/* implicit */long long int) (_Bool)1);
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((1148000624) >= (((/* implicit */int) (signed char)-79))));
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((arr_13 [15ULL] [i_3]) & (((/* implicit */int) var_12)))) | (((/* implicit */int) ((signed char) 1666486431)))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((signed char) arr_12 [i_3 - 1] [i_3])))));
            arr_15 [i_0] [10] [i_3 - 1] = ((/* implicit */short) arr_8 [(unsigned char)9] [i_3]);
            /* LoopSeq 4 */
            for (short i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
            {
                var_23 += ((/* implicit */long long int) 262143);
                arr_19 [(unsigned char)1] [i_3] [i_4 - 1] [i_4] = ((/* implicit */signed char) arr_0 [i_0]);
                arr_20 [i_4] = ((/* implicit */short) 957753114U);
                var_24 *= ((/* implicit */long long int) ((unsigned char) ((arr_7 [i_0] [i_4]) ? (((/* implicit */int) var_12)) : (arr_1 [i_3] [(unsigned short)20]))));
            }
            for (short i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
            {
                arr_24 [i_5 - 1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((short) (~(arr_1 [2LL] [2LL]))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [19ULL] [i_3 - 1] [i_3 - 1] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((unsigned int) 1666486431)) : (((/* implicit */unsigned int) var_14))));
                var_26 = ((/* implicit */unsigned char) arr_9 [(signed char)0] [i_3 - 1] [(signed char)8]);
            }
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) <= (1148000624))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((arr_11 [i_0]) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                var_28 *= ((/* implicit */signed char) arr_1 [i_6] [i_3]);
                var_29 = ((/* implicit */long long int) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_4))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_3] [(short)11])) <= (((/* implicit */int) (unsigned char)170))))))))));
                }
                for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    var_32 *= (-(((/* implicit */int) var_15)));
                    arr_31 [i_8] [i_6] [(unsigned char)15] [i_3] [i_3] [8] = ((/* implicit */unsigned char) 3337214182U);
                }
                for (signed char i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    var_33 = ((/* implicit */int) ((unsigned int) arr_0 [i_3]));
                    var_34 = ((/* implicit */signed char) arr_12 [i_3 - 1] [0LL]);
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65526)) ? (1917011193) : (806762920)));
                }
            }
            for (unsigned char i_10 = 4; i_10 < 20; i_10 += 4) 
            {
                var_36 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_27 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2] [19U])) > (((unsigned int) arr_18 [i_0] [i_0] [i_0]))));
                var_37 *= arr_37 [i_0] [(unsigned short)6] [(unsigned short)6];
                arr_38 [21LL] [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_10 + 2])) : (((/* implicit */int) arr_8 [i_3] [(short)11]))));
            }
            /* LoopSeq 1 */
            for (signed char i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                var_38 = ((/* implicit */_Bool) arr_18 [8LL] [8LL] [i_11 + 1]);
                arr_41 [(signed char)14] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 7LL)))) ? (((/* implicit */unsigned long long int) arr_39 [i_3 - 1] [(signed char)9] [i_11 + 2])) : (arr_21 [9] [i_11 + 1] [(signed char)21] [i_3 - 1])));
            }
        }
        for (unsigned int i_12 = 2; i_12 < 19; i_12 += 1) 
        {
            arr_44 [i_12] = ((/* implicit */long long int) var_5);
            arr_45 [i_12] [i_0] = ((/* implicit */unsigned short) ((1666486419) >= (((/* implicit */int) (_Bool)1))));
        }
        arr_46 [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-527))) >= (6640933517139494484LL))) ? (min((((/* implicit */long long int) (unsigned short)10092)), ((-(15LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (186078295U) : (((/* implicit */unsigned int) -1513345996)))))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((short) (+(67108863U)))))));
                var_40 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_36 [i_0])) ? (((/* implicit */int) (signed char)96)) : (var_11)))));
            }
            for (long long int i_15 = 3; i_15 < 19; i_15 += 1) 
            {
                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)27780)), (((((/* implicit */_Bool) -1148000624)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-47))))))) >= (949888706U))))));
                var_42 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55451))) : (-8764736994883884350LL))));
                arr_54 [i_15 - 3] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_48 [i_0])))))));
                var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (_Bool)1))));
            }
            arr_55 [i_0] = ((/* implicit */long long int) ((((arr_39 [i_0] [i_13 + 1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_0] [i_13] [i_13 - 1])) ? ((-(0))) : (((/* implicit */int) arr_8 [i_0] [i_0])))))));
            var_44 -= ((/* implicit */_Bool) arr_12 [i_0] [i_13 + 1]);
        }
    }
    /* LoopNest 2 */
    for (long long int i_16 = 1; i_16 < 10; i_16 += 4) 
    {
        for (short i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            {
                arr_60 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [(unsigned char)8] [i_16 + 1] [i_17] [(_Bool)1]))) : (0LL))) / (arr_17 [i_16 + 1] [i_17])))) ? (min((((/* implicit */long long int) (+(arr_51 [8LL] [(signed char)3] [19LL] [(signed char)19])))), (((1582738399948136808LL) << (((((/* implicit */int) (unsigned short)21438)) - (21438))))))) : (((((/* implicit */long long int) ((((/* implicit */int) (signed char)42)) & (((/* implicit */int) (short)(-32767 - 1)))))) % (((((/* implicit */_Bool) 1036332616)) ? (arr_17 [i_17] [i_16 + 1]) : (((/* implicit */long long int) arr_1 [i_16 + 2] [i_16 + 2]))))))));
                var_45 = ((/* implicit */long long int) min(((-(arr_36 [i_16 - 1]))), (((unsigned int) (signed char)-34))));
            }
        } 
    } 
    var_46 -= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)10526)) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) var_15)) ? (var_14) : (var_5))) - (781176272)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)))) ? (var_7) : (((/* implicit */long long int) ((unsigned int) var_10)))))));
    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)15)) : (-1840895721))) : (((/* implicit */int) var_4))))));
}
