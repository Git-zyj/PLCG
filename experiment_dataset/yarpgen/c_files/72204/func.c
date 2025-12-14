/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72204
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) max((max((((/* implicit */int) var_7)), (1071644672))), (max((((((/* implicit */int) (unsigned short)264)) ^ (-1071644691))), (((/* implicit */int) (unsigned char)26))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)19), ((unsigned char)4)))) * (((/* implicit */int) ((unsigned char) max(((unsigned char)32), (((/* implicit */unsigned char) (signed char)85))))))));
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (unsigned short)24805))));
                arr_6 [i_0] [i_0] = arr_0 [i_0];
                var_12 = ((/* implicit */short) (unsigned char)32);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)141))))) && (((/* implicit */_Bool) arr_10 [i_2 - 2] [3]))))) <= ((+(((/* implicit */int) arr_7 [i_2 + 2])))))))));
                var_14 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)150)) % (-1323540871)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_15 = ((/* implicit */int) (+(var_3)));
            var_16 = ((/* implicit */signed char) var_10);
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((arr_10 [i_4] [i_4]), (((/* implicit */short) arr_14 [i_5] [i_5] [i_4]))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_17 = arr_15 [i_4] [i_4];
            arr_21 [i_4] = ((/* implicit */unsigned char) (+(1769477245)));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_4])) > (((/* implicit */int) arr_16 [i_9])))) ? (((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) (unsigned short)7600)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) max((arr_16 [i_4]), (arr_16 [i_4]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_10] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20781)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10]))) : (1040187392U)));
                            var_19 = ((/* implicit */signed char) 1071644674);
                        }
                        for (int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) max((252625106765064300ULL), ((~((+(var_5)))))));
                            arr_38 [i_4] [16ULL] [i_4] [16ULL] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((((int) (unsigned short)65517)) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) >> (((var_10) - (8845351349041753553ULL)))))) ? (((/* implicit */int) ((-16) == (((/* implicit */int) (unsigned short)9))))) : (((/* implicit */int) (unsigned char)47))))));
                            var_21 += ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-54))));
                            arr_39 [i_4] [i_7] [i_7] [(unsigned char)12] [i_8] [i_4] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (max((((/* implicit */unsigned short) (unsigned char)46)), ((unsigned short)41394)))));
                            var_22 = ((/* implicit */unsigned int) -512574532);
                        }
                        for (unsigned int i_12 = 4; i_12 < 17; i_12 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((unsigned short) (unsigned short)11605));
                            var_24 = ((/* implicit */signed char) ((((((arr_9 [i_12 - 1] [i_12 + 1]) | (arr_9 [i_12 - 4] [i_12 - 4]))) + (2147483647))) >> (((arr_9 [i_12 - 3] [i_12 - 2]) - (arr_9 [i_12 - 4] [i_12 - 2])))));
                        }
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_9])) ? (min((((/* implicit */unsigned long long int) (unsigned short)3)), (max((((/* implicit */unsigned long long int) 3594454398U)), (0ULL))))) : (((/* implicit */unsigned long long int) (~(-512574527))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)115)))) ? (var_10) : (((/* implicit */unsigned long long int) 870756647U))))) || ((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)54)), ((unsigned char)202))))))));
            var_27 = var_1;
            arr_42 [i_4] = (-((((-2147483647 - 1)) + (((/* implicit */int) (unsigned char)202)))));
        }
        /* LoopNest 3 */
        for (signed char i_13 = 2; i_13 < 17; i_13 += 3) 
        {
            for (unsigned short i_14 = 2; i_14 < 17; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    {
                        arr_52 [i_15] [i_15] [i_4] [i_15] = ((/* implicit */unsigned char) ((unsigned short) (+(min((((/* implicit */unsigned int) (unsigned short)53931)), (0U))))));
                        var_28 = ((/* implicit */int) (unsigned short)11605);
                        arr_53 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)5)) * (((/* implicit */int) (signed char)-13))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))));
                    }
                } 
            } 
        } 
        var_29 *= ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) arr_27 [i_4] [(unsigned short)16] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_27 [i_4] [(short)16] [i_4] [i_4] [i_4])))), (((/* implicit */int) (unsigned short)53937))));
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 13; i_16 += 4) 
    {
        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            {
                arr_58 [i_17] [i_16 - 2] [i_17] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_44 [i_16 - 2] [i_16 - 2])) ? (((unsigned int) (short)12627)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_17]))))));
                var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_17] [i_17] [i_17] [i_17] [i_16] [i_16])) ? ((-(((int) (unsigned char)146)))) : (arr_48 [i_16 + 1] [i_16] [i_16] [i_16])));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) min((((/* implicit */int) var_9)), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))));
}
