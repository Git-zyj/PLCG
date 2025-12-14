/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88364
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) var_6);
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_1 [i_0]) && (((/* implicit */_Bool) (unsigned char)0))))), (var_9)));
        var_11 += ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_0 [i_0])), (min((-6391250223321200375LL), (((/* implicit */long long int) arr_0 [i_0])))))) - (((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)65525)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_12 = (+(((((/* implicit */_Bool) ((var_5) - (var_5)))) ? ((-(arr_3 [i_1]))) : (arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (2801212915U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_9)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)7)), (var_4)))) << (((min((((/* implicit */unsigned int) (signed char)-127)), (3188646995U))) - (3188646984U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_2)))) ^ (((/* implicit */int) arr_0 [i_2]))))) : (max((((/* implicit */unsigned int) (unsigned char)127)), (904185118U)))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 4294963200U))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_16 -= (+(((/* implicit */int) (_Bool)0)));
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 67108863LL)) ? (arr_8 [i_3]) : (arr_8 [i_3])));
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned char)0))))));
        var_19 = (!(((/* implicit */_Bool) 1106320320U)));
        arr_12 [i_3] = ((/* implicit */unsigned short) 3LL);
    }
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_14 [i_4])), ((short)4533)))) ? ((~((-(var_5))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4 + 3])))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_8 [i_4]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))))))));
            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56245)) || (((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 + 3]))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_18 [i_4]))));
                        arr_27 [i_4] [i_6] [i_6] [i_6] [i_4] [i_8 + 1] = ((/* implicit */unsigned int) var_4);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)34))))) > (((904185137U) << (((((/* implicit */int) var_8)) - (29191)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 4; i_9 < 15; i_9 += 4) 
            {
                for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
                {
                    for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_36 [i_11] [i_4] [i_9 - 1] [i_9 - 3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)7047))));
                            arr_37 [i_4] [i_6] [i_4] [(unsigned short)15] [i_11] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            } 
        }
        for (short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            arr_40 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)511))))), (max((904185149U), (arr_25 [i_4] [i_4 + 2] [i_4 + 1] [i_12] [i_12]))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_25 += ((/* implicit */short) ((var_7) ? (((/* implicit */int) arr_23 [i_4 + 2] [i_12] [i_13] [i_13])) : (((/* implicit */int) var_1))));
                var_26 = ((/* implicit */unsigned int) arr_35 [i_4] [i_12] [i_12]);
                arr_43 [(_Bool)1] [i_12] [i_12] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                var_27 = (!(((/* implicit */_Bool) max(((-(arr_4 [i_4 + 3] [i_14]))), (((/* implicit */long long int) (_Bool)1))))));
                arr_46 [i_4] [i_4] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)0))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (_Bool)1))));
            }
            for (unsigned short i_15 = 1; i_15 < 14; i_15 += 3) 
            {
                arr_51 [i_4 + 2] [i_12] [i_4] = (_Bool)1;
                var_29 = ((/* implicit */unsigned long long int) 3988952340U);
                var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35673)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)0))));
            }
            var_31 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_33 [12ULL] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) var_9)))))), (((((((/* implicit */int) (short)-4515)) + (2147483647))) >> (((((((/* implicit */_Bool) arr_48 [i_4] [i_12] [i_4])) ? (((/* implicit */int) (short)-4537)) : (((/* implicit */int) (_Bool)1)))) + (4558)))))));
            var_32 = ((/* implicit */_Bool) ((unsigned short) 1493754397U));
            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)227)), ((unsigned short)65535)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4 - 1])) ? (((/* implicit */int) arr_21 [i_4 + 2])) : (((/* implicit */int) arr_21 [i_4 - 1])))))));
        }
        for (short i_16 = 3; i_16 < 16; i_16 += 2) 
        {
            var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_4] [i_4]))));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) + ((~((~(((/* implicit */int) var_7)))))))))));
            var_36 += ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 575911407U)))))));
            var_37 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_4] [i_4 - 1]))))), (arr_47 [i_4] [i_4 + 3] [i_4])));
        }
        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6391250223321200378LL)))) ? (((((/* implicit */int) arr_41 [i_4 + 2] [i_4 + 2] [(_Bool)1])) << (((((/* implicit */int) (unsigned char)65)) - (46))))) : ((~(((/* implicit */int) var_9))))))) ? (1493754380U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) >= (((((/* implicit */_Bool) (unsigned short)13300)) ? (2801212910U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) max((1493754386U), (((/* implicit */unsigned int) (short)4556)))))));
    }
    for (unsigned int i_17 = 1; i_17 < 14; i_17 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */_Bool) (~(max((((11937458336789594155ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_17 + 2] [(unsigned short)10] [(signed char)4] [i_17]))))), (((/* implicit */unsigned long long int) var_7))))));
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52229))) : (2892119692U)));
        var_42 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2211664807U)) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_42 [i_17] [(short)2]))))));
        var_43 = ((/* implicit */unsigned int) ((max(((+(arr_4 [i_17] [i_17]))), (((/* implicit */long long int) (unsigned char)62)))) > (((((/* implicit */_Bool) ((2801212919U) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_8)))))))));
    }
}
