/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61391
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) var_7);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_16 |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)9242)) <= (((/* implicit */int) var_13))))) >> (((((((/* implicit */int) (short)32767)) | (((/* implicit */int) var_9)))) - (32739)))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1]))))) ^ (var_3)));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                var_18 -= ((/* implicit */_Bool) (short)32734);
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_4))));
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)52))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_21 ^= (+((~(var_3))));
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_22 ^= (+((+(var_5))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_8)))) ? (arr_5 [i_3] [i_1 + 1] [i_1 + 3]) : (((((/* implicit */int) var_6)) | (((/* implicit */int) var_0))))));
                }
                for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)175)) <= (((/* implicit */int) (short)32750))));
                    var_25 *= ((/* implicit */short) (!(((_Bool) (unsigned char)207))));
                }
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
                    var_27 = ((/* implicit */_Bool) var_0);
                    arr_18 [0] [0] = ((/* implicit */unsigned char) (signed char)127);
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_28 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_13)) ? (arr_19 [i_0] [(signed char)4] [(signed char)4] [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-4))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (short)-24344)))) - (24324)))));
                    var_29 = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-23))))));
                    arr_21 [i_0] [i_1 + 2] [i_7] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)218)) : (536870911)))));
                    var_30 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) var_7)))));
                }
            }
        }
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) ((1109535855) | (var_4)));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (-24LL)))))))));
            var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (-1905719213) : (((/* implicit */int) arr_2 [i_0]))));
        }
        /* LoopSeq 3 */
        for (signed char i_9 = 4; i_9 < 15; i_9 += 2) 
        {
            arr_28 [11LL] [i_9 - 1] [i_0] &= ((-536870887) ^ (((/* implicit */int) (short)32767)));
            var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (var_4)));
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) var_12))));
        }
        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10] [(short)1] [i_0])) ? (-1904071025) : (((/* implicit */int) (signed char)-122))))) ? ((+(((/* implicit */int) (short)4043)))) : ((+(var_4)))));
            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_10] [i_0])) : (((/* implicit */int) (signed char)-35))))));
        }
        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            arr_34 [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-25))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-24344)) <= (var_4)))) : (var_4)));
            arr_35 [i_11] [i_11] [i_11] = var_7;
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (14322983053797286333ULL) : (((/* implicit */unsigned long long int) -1109535859)))))));
            var_39 = ((/* implicit */signed char) var_13);
        }
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_40 = var_1;
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_41 &= ((/* implicit */int) (short)-8599);
                        var_42 = (!(((/* implicit */_Bool) (+(var_5)))));
                    }
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            arr_45 [i_15] = ((signed char) arr_8 [i_15]);
            arr_46 [i_0] = ((/* implicit */signed char) var_12);
            var_43 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
        }
        for (short i_16 = 2; i_16 < 15; i_16 += 3) 
        {
            arr_51 [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned char)245)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) : (((long long int) var_10))));
            var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3))))));
        }
    }
    var_45 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) <= (((((/* implicit */int) ((((/* implicit */int) (short)-27760)) <= (((/* implicit */int) var_9))))) ^ ((+(2059809432)))))));
}
