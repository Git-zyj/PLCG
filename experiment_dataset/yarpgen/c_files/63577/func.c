/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63577
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */signed char) (~(((/* implicit */int) (short)17226))));
        var_15 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_16 |= ((/* implicit */int) (short)3968);
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) -730723868))));
            var_18 = max((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)219))))), ((-(8693043177780583688LL))))), (((/* implicit */long long int) ((unsigned char) arr_3 [i_0 - 1] [i_0 - 1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) arr_3 [i_0 + 1] [(unsigned char)0] [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_1 [(_Bool)1])) & (((/* implicit */int) (short)26347))));
                            var_21 -= ((/* implicit */int) (short)-32760);
                            var_22 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_0 + 2] [i_1] [i_1]));
                        }
                        var_23 = min(((~(((/* implicit */int) arr_11 [i_0 + 1] [16U] [9LL] [i_3] [i_3])))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)219)) - (193))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_1])))) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)69)), ((short)3968)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) (unsigned short)4921))))))));
        }
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((arr_12 [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 2] [i_5])))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_21 [i_5 + 1] [i_5] [i_8 - 1] [i_8] = ((/* implicit */long long int) (short)-3969);
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */int) arr_2 [i_8 + 1] [i_5 + 2]);
                            var_27 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)16] [i_6] [i_5]))))), (((((/* implicit */int) (short)27066)) - (arr_18 [i_5] [i_7] [i_6] [i_5 - 1])))))) > (((long long int) (short)-6239))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_29 [i_10] [i_5] [i_10] [i_11] = ((/* implicit */signed char) min((var_2), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_5 - 1] [(unsigned short)11] [i_5 + 1])))))));
                    arr_30 [i_5 + 2] [i_5] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-48)) <= (((/* implicit */int) (signed char)-61))))) + ((+((~(((/* implicit */int) (_Bool)1))))))));
                    arr_31 [i_5] = ((/* implicit */long long int) (_Bool)1);
                    arr_32 [i_10] [i_5] [i_11] [i_11] = ((/* implicit */short) (+(((int) arr_5 [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1]))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        arr_35 [i_5 + 2] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) arr_15 [i_5 + 1])), ((short)-3971)))) <= (((((/* implicit */_Bool) -6306724092811945010LL)) ? (((/* implicit */int) arr_15 [i_5 - 1])) : (((/* implicit */int) arr_15 [i_5 + 1]))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (short)3968)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) 246717400343205418LL))))) + (((/* implicit */int) (short)3949)))) - (((/* implicit */int) ((unsigned short) arr_5 [i_5] [i_10] [i_10] [i_10])))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) (unsigned char)207)) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (arr_17 [(signed char)15] [i_10]))))))) - (2807675726493819056LL)))));
                        var_31 = ((/* implicit */long long int) (-(((arr_27 [i_5 - 1] [i_10] [i_12]) ? (4006559825U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5 - 1] [(_Bool)1] [(short)3])))))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                    {
                        arr_38 [i_5] [i_11] [i_10] [i_13] [i_13] [i_11] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)37)))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)35)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-3969)))) : (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_4 [i_5 - 1] [i_5])))))) ? (((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) : (((/* implicit */int) ((signed char) var_3)))));
    }
    /* vectorizable */
    for (short i_14 = 1; i_14 < 17; i_14 += 1) /* same iter space */
    {
        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3968)) & (((/* implicit */int) arr_15 [i_14]))));
        var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1] [11LL])) ? (((/* implicit */int) arr_15 [i_14 + 1])) : (((/* implicit */int) arr_6 [i_14 - 1] [i_14 + 2] [i_14 + 2] [12LL]))));
    }
    /* vectorizable */
    for (short i_15 = 1; i_15 < 17; i_15 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned short) var_4);
        var_37 = ((long long int) arr_36 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 2]);
        arr_46 [i_15] [i_15] = ((/* implicit */unsigned char) arr_36 [(unsigned char)13] [i_15 - 1] [11LL] [i_15]);
        arr_47 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_15] [i_15])) && (((/* implicit */_Bool) arr_26 [i_15 - 1] [i_15] [i_15 + 2]))));
        var_38 = ((/* implicit */unsigned short) ((arr_8 [i_15] [i_15 + 1] [(short)15]) >> (((((int) arr_2 [i_15] [i_15 + 2])) - (4676)))));
    }
    var_39 = ((/* implicit */short) var_8);
}
