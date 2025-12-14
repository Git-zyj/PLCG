/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96506
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
    var_15 = ((/* implicit */int) ((var_3) & (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] [7U] = ((((min((((/* implicit */int) ((unsigned short) var_13))), (((int) arr_4 [i_0] [i_0] [i_0])))) + (2147483647))) << (((((((/* implicit */int) ((short) arr_12 [i_1 + 1] [(signed char)17] [i_2 + 4] [i_2] [i_1 + 1] [i_1 + 1]))) + (3028))) - (16))));
                                arr_14 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] [i_0] [(unsigned short)15] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))) ? (((/* implicit */int) arr_10 [13LL])) : (((/* implicit */int) ((27021597764222976LL) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) | (-1)))) ? (-27021597764222966LL) : (((/* implicit */long long int) -23)))) : (((max((((/* implicit */long long int) var_8)), (2305843009213693951LL))) >> ((((~(var_3))) - (4262006940U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (_Bool)1)))));
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_19 *= ((/* implicit */unsigned char) (+(var_1)));
        var_20 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_0 [i_5])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [11ULL]))))) | (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)195))))));
        arr_17 [i_5] = ((/* implicit */long long int) var_3);
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_21 = ((/* implicit */long long int) ((((_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) ((arr_18 [i_6] [i_6]) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_18 [(_Bool)1] [i_6]))));
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_26 [(short)12] [i_7] [i_8] [i_9] = ((/* implicit */int) (-(((unsigned long long int) arr_18 [i_8] [i_8]))));
                        arr_27 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [(_Bool)1])) : (((/* implicit */int) var_9))))) ? (min((var_11), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9 + 1]))))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned char)202))));
                        arr_28 [i_8] = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) : (746310312U)))) ? (var_11) : (((/* implicit */unsigned long long int) ((arr_23 [i_6] [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
    for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 4) 
    {
        var_24 -= ((/* implicit */unsigned short) var_2);
        arr_32 [i_10] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_11)))));
    }
    for (unsigned int i_11 = 1; i_11 < 22; i_11 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_21 [i_11] [7ULL] [i_11]))));
        arr_36 [(unsigned short)22] |= ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (short)-32743)) : (-131072)))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                {
                    var_26 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) -27021597764222967LL)))), (((((/* implicit */_Bool) 4294963200U)) ? (arr_33 [i_11 - 1]) : (arr_33 [i_11 + 1])))));
                    var_27 = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
}
