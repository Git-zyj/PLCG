/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85500
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)7)));
                arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */long long int) (unsigned char)114);
            }
        } 
    } 
    var_11 = ((/* implicit */int) (+(var_3)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */_Bool) (+(arr_6 [i_2])));
            var_13 = ((/* implicit */unsigned short) (!((!((_Bool)0)))));
            var_14 += ((/* implicit */unsigned short) (((~(var_7))) >= (((/* implicit */unsigned long long int) (-(var_2))))));
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            var_15 = (!(((/* implicit */_Bool) 1207569281605259521ULL)));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_16 -= ((/* implicit */long long int) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                arr_16 [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                arr_17 [i_5] [i_5] [i_4] [20U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2]))));
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_8 [i_2] [i_4] [i_5]))));
            }
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_17 = (_Bool)0;
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [(unsigned short)11])) ? (((/* implicit */int) (signed char)96)) : (arr_9 [i_2] [i_4])))) - (-4774171469698248796LL)));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-21)) && (((/* implicit */_Bool) 4774171469698248793LL)))) ? ((~(((/* implicit */int) (signed char)-20)))) : (((/* implicit */int) (_Bool)0))));
            }
            arr_21 [11ULL] [i_4] [11ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            arr_22 [i_4] [7] = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_2]))));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_20 ^= ((/* implicit */unsigned int) var_8);
            arr_27 [i_7] [i_7] [i_7] = ((/* implicit */int) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_21 |= ((/* implicit */signed char) var_4);
                    arr_34 [i_9] [i_7] [i_7] [i_2] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [i_7])) ? (-4774171469698248814LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_8] [i_7] [i_2])))))));
                    arr_35 [i_2] [(unsigned char)1] [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_30 [(signed char)8] [i_2]))))));
                }
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    arr_39 [i_7] [i_7] [i_7] [i_10] = ((/* implicit */_Bool) ((arr_33 [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 2] [i_8]) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_2] [i_7] [17])) : (((/* implicit */int) (signed char)-36)))))));
                    arr_40 [i_7] [i_7] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) var_7));
                }
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [2U] [(unsigned short)10] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_3)));
                var_24 = ((/* implicit */_Bool) var_3);
                arr_41 [6LL] [i_7] [1U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_8 - 2] [i_8 - 2] [i_8 - 2])) ? (((/* implicit */int) arr_8 [i_8 - 2] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) var_8))));
                var_25 = ((574208952489738240ULL) * (9733887036509068081ULL));
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            arr_45 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2422))) : (4774171469698248793LL)))) ? (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) arr_24 [i_2])) : (((/* implicit */int) var_1))))) : (var_7)));
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_26 |= ((/* implicit */unsigned short) ((_Bool) var_6));
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_4)) - (148)))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (var_9)));
            var_29 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
        }
        arr_55 [(signed char)21] [13] = ((/* implicit */unsigned int) arr_46 [i_2] [i_2]);
        var_30 = ((/* implicit */long long int) var_1);
    }
}
