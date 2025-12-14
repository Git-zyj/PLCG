/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69227
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_3))));
        var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_2 [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) var_10))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0])))))))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 6968192863744308560ULL)) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) (((~((+(var_9))))) / (arr_6 [i_4])));
                        arr_13 [i_1] [i_2] [i_3] [i_3] = ((unsigned short) ((((/* implicit */int) arr_3 [i_1 + 1])) << (((((long long int) arr_5 [i_1])) - (1858220599LL)))));
                        arr_14 [i_4] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_10 [i_1 - 1])))))) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((arr_11 [i_5] [i_5] [i_5] [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_1])))))))))));
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_9))))) ? (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2])) : ((+(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((min((var_9), (((/* implicit */long long int) var_7)))) < (((long long int) var_2)))))));
        }
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_5))));
            var_15 = ((/* implicit */unsigned long long int) arr_6 [i_6]);
        }
        /* LoopSeq 2 */
        for (signed char i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            arr_23 [i_7] [i_7] = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_20 [i_7 - 2] [i_7] [i_7])))));
            arr_24 [i_1 + 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_9 [i_7] [i_7] [i_7] [i_1]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_27 [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) var_1)))));
            var_16 = arr_25 [i_8] [i_1];
        }
    }
    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_9 - 1] [(unsigned short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : (arr_28 [i_9 - 1] [21LL])));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14678358553380068619ULL))));
        arr_30 [i_9 - 1] [i_9] = ((/* implicit */short) var_7);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_10 = 3; i_10 < 14; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [18LL] [i_10 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (long long int i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    {
                        var_20 += ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_34 [i_13] [i_11])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 2; i_14 < 14; i_14 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_5 [i_14]))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_10] [4U] [i_14] [i_14])))))));
                            var_22 = ((/* implicit */unsigned char) ((int) 14678358553380068609ULL));
                            var_23 |= ((/* implicit */unsigned long long int) ((_Bool) arr_26 [i_10] [i_10 - 3] [i_10 - 1]));
                            var_24 = ((/* implicit */signed char) ((long long int) arr_19 [i_12 - 1] [i_14 - 2] [(short)11]));
                            arr_45 [i_14] [i_13] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) var_5)));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_48 [i_10] [i_11] [(signed char)2] [10LL] [(signed char)2] [i_15] [i_11] = (!(((/* implicit */_Bool) var_2)));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_15] [i_13] [i_12] [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
                        }
                        var_26 |= ((/* implicit */unsigned int) arr_41 [i_12 - 1] [i_10]);
                    }
                } 
            } 
        } 
        arr_49 [i_10] [i_10 - 3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_6 [i_10])) - ((((_Bool)1) ? (2895204111996465362ULL) : (15329995611157973552ULL)))));
    }
    for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_53 [i_16]))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)154))));
        arr_54 [i_16] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (short)-17814))) ? (558035093) : (((/* implicit */int) (_Bool)1))))) ? (-1310802090) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
    }
}
