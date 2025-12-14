/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58043
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
    var_19 = ((/* implicit */unsigned int) min((var_13), ((+(((/* implicit */int) (signed char)-121))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_3]))) ^ (279223176896970752LL)));
                        var_21 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 - 1])), (arr_0 [i_0])));
        var_22 = ((/* implicit */short) ((((/* implicit */int) max(((signed char)-51), ((signed char)62)))) >> (((arr_0 [i_0]) - (1328807507U)))));
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_23 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)113)))));
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)48973))));
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (unsigned char)31);
            var_25 = ((/* implicit */unsigned int) arr_16 [i_4]);
            /* LoopNest 3 */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_27 [i_4] [i_4] [i_6] [i_4] [i_8] = ((/* implicit */long long int) arr_7 [i_4] [(short)10] [i_6 - 1] [i_6 - 1]);
                            var_26 = ((/* implicit */signed char) max(((-(((/* implicit */int) ((1211101851) < (((/* implicit */int) var_1))))))), (((int) (!(((/* implicit */_Bool) var_2)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
        {
            arr_31 [i_4] [i_4] = -1764555142;
            var_27 *= ((/* implicit */unsigned int) ((unsigned char) arr_10 [i_4] [i_9]));
            arr_32 [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_9] [i_4]))))));
            arr_33 [i_4] = ((/* implicit */unsigned int) var_9);
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
        {
            arr_37 [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_8);
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (signed char i_12 = 3; i_12 < 9; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_48 [i_4] [i_4] [i_10] [i_4] [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_6);
                            arr_49 [i_4] [i_4] [(signed char)1] = ((/* implicit */unsigned short) max(((unsigned char)6), ((unsigned char)62)));
                            var_28 *= ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (signed char)-50))));
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    {
                        var_30 ^= ((/* implicit */unsigned short) (unsigned char)5);
                        var_31 *= (signed char)-42;
                    }
                } 
            } 
        }
        arr_55 [i_4] [i_4] = ((/* implicit */_Bool) var_11);
    }
    /* vectorizable */
    for (long long int i_16 = 1; i_16 < 11; i_16 += 1) 
    {
        arr_58 [i_16] = ((/* implicit */signed char) (((~(-607883954))) << (((((/* implicit */int) ((unsigned char) (unsigned short)11586))) - (65)))));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_56 [i_16]))) ? (((/* implicit */int) arr_56 [i_16])) : ((-(((/* implicit */int) arr_56 [i_16]))))));
    }
    var_33 = ((/* implicit */unsigned long long int) (short)-1);
    var_34 = ((unsigned char) (unsigned char)106);
    var_35 = ((/* implicit */int) var_1);
}
