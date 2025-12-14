/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55458
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)2016))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) 3861120747U);
                        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)64003)) ? (((/* implicit */int) (unsigned short)64640)) : (((/* implicit */int) (unsigned short)13304)))) / (((int) (unsigned short)52218))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (signed char)72))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 8; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (_Bool)0);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            arr_26 [i_8] [i_5] [i_7] [i_6 - 1] [i_5] [(_Bool)1] = ((/* implicit */short) ((max((((/* implicit */int) arr_9 [i_5 - 1] [i_6 + 1])), (((((/* implicit */_Bool) (unsigned short)25021)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) arr_21 [i_4] [i_5] [i_5])))))) != (((/* implicit */int) (short)0))));
                            arr_27 [i_4] [i_5] [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_2 [i_5 - 1]), ((unsigned short)0)))), (min((((/* implicit */int) arr_0 [i_6])), ((~(((/* implicit */int) arr_10 [i_8] [i_7] [i_6] [i_5] [i_5] [(_Bool)1]))))))));
                        }
                    }
                } 
            } 
            var_20 -= ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned short)25667)) ? (((/* implicit */int) arr_18 [i_5 - 1])) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_17 [i_5 - 1] [(unsigned char)5] [i_5])) : (((/* implicit */int) arr_19 [i_5 - 1])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_4] [(short)3] [i_4] [i_4]))))) ? (((/* implicit */int) max(((short)-8088), (((/* implicit */short) (unsigned char)24))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)237))))))));
        }
        var_21 = ((/* implicit */unsigned char) arr_18 [i_4]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) ((_Bool) (_Bool)1))), ((((_Bool)1) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) arr_16 [i_4]))))))))));
    }
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_13)), (((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)2016)) : (((/* implicit */int) (signed char)14)))))));
    var_24 = ((/* implicit */signed char) var_15);
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_30 [(signed char)8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_28 [i_9] [i_9]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) (unsigned short)25667)))) : (((((/* implicit */_Bool) (unsigned short)39852)) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) arr_28 [i_9] [i_9]))))));
        arr_31 [i_9] = ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) (unsigned char)66)))), (max((1922886532), (((/* implicit */int) (short)-2008)))))) << (((min((-3979649811562873024LL), (((/* implicit */long long int) (-(433846563U)))))) + (3979649811562873046LL)))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((17592186011648ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (((/* implicit */int) (short)-8215)) : (((/* implicit */int) (unsigned short)25683)))) == (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)38475)) : (((/* implicit */int) (unsigned short)13632))))), (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9])))))))));
        arr_32 [i_9] = ((/* implicit */_Bool) min((560450917), (((/* implicit */int) max((min((((/* implicit */unsigned short) (short)5319)), ((unsigned short)22))), (arr_28 [i_9] [i_9]))))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 23; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    {
                        arr_43 [i_9] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */_Bool) arr_40 [13ULL] [i_10 + 1] [(short)15] [i_9]);
                        arr_44 [i_9] [i_9] [i_10] [i_11] [i_11 - 1] [i_9] = ((/* implicit */short) min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) arr_40 [i_10 + 1] [i_10] [(short)9] [i_9]))))));
                    }
                } 
            } 
            arr_45 [i_9] [i_10] = ((/* implicit */signed char) (~(max((min((((/* implicit */unsigned long long int) (unsigned short)38486)), (9640588785596677178ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_40 [i_10] [i_10] [i_10] [i_9]))))))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 270956124)))))))) ? (min((2688880217273308089ULL), (((/* implicit */unsigned long long int) (unsigned char)81)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2048)))));
            arr_48 [i_9] [i_9] = ((/* implicit */signed char) (((-(3653500394915348985ULL))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (270956124) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3653500394915348974ULL)))));
            arr_49 [i_9] [i_13] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (short)3209)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9]))) : (((((/* implicit */_Bool) arr_39 [i_13 + 1] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13152628810766912488ULL))))), (((/* implicit */unsigned long long int) ((_Bool) arr_28 [15] [i_9])))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min(((unsigned char)244), (((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1])) >= (((/* implicit */int) (_Bool)0))))))))));
        }
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (short)2016))))) >> (((((/* implicit */int) min(((short)-17303), (min(((short)2192), (((/* implicit */short) (unsigned char)31))))))) + (17304)))));
}
