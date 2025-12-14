/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64799
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 1]);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) var_6);
                            arr_12 [i_0] [i_0] [i_0] [i_1] [5ULL] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((int) arr_1 [i_1 + 1]));
                            arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (10374728138090410743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55964))))) >> (((arr_11 [i_3] [i_1 - 1]) + (1570097796)))));
                            var_15 = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_1]) - (((/* implicit */int) (unsigned short)9595))))) ? (((/* implicit */int) arr_3 [5ULL])) : (((/* implicit */int) (signed char)-44))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1] [7ULL])) % (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_5 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_5] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_6 + 2] [i_6 - 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_6 + 1] [i_6 - 1] [i_1 + 1] [i_1 + 1])) : (var_11)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)9572))));
                            arr_25 [i_0] [i_1 - 1] [i_5] [i_6 + 2] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1] [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_6 [i_0] [i_7])))));
                            arr_26 [i_1] [i_1] [0] [5ULL] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-44))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_1] [i_6] [i_5] [(signed char)11] [i_1 + 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_1);
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) 17129033607496084019ULL)) ? (3143645712U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-126))))))))));
                            var_19 = ((15097211356464706917ULL) & (((/* implicit */unsigned long long int) 0)));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            arr_36 [i_1] [(signed char)1] = ((/* implicit */unsigned long long int) (signed char)65);
                            var_20 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(unsigned char)12] [i_0]);
                            arr_37 [i_9] [i_6] [i_1] [(unsigned char)12] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0]))));
                        }
                    }
                } 
            } 
            arr_38 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) - ((-(2147483648U)))));
        }
        for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_10 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
            var_22 -= ((/* implicit */unsigned long long int) ((int) 9383092204730087960ULL));
        }
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) var_8)))));
            arr_43 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15325189712537075885ULL)) ? (12582912U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_11])))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
        {
            arr_46 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) 0);
            arr_47 [i_0] = ((/* implicit */unsigned int) arr_34 [i_12] [i_12] [i_0] [i_0]);
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), ((signed char)-126)));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (((arr_22 [i_0] [i_0]) >> (((arr_22 [i_12] [i_0]) - (3055899890U)))))));
                        arr_54 [(unsigned char)7] [i_13] [i_13] [(unsigned char)7] = ((/* implicit */unsigned int) var_9);
                        arr_55 [i_0] [i_0] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551589ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-65))));
                    }
                } 
            } 
        }
        arr_56 [i_0] = ((/* implicit */unsigned int) arr_39 [i_0]);
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((signed char) -1982839959)))));
}
