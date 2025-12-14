/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98432
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((unsigned int) (short)-19759));
        var_14 = var_4;
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned short) var_0)))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) arr_3 [i_1]);
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            var_18 -= ((/* implicit */short) arr_5 [i_2] [i_1]);
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_19 -= ((/* implicit */unsigned long long int) arr_6 [i_1] [5LL]);
            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) var_2)) | (((/* implicit */int) (short)-4628))))));
            var_21 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_12 [i_1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
                {
                    {
                        arr_20 [i_1] [(short)8] [i_3] [i_3] [i_4] [i_5 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_1] [i_1]))) : (18446744073709551615ULL)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))));
                        var_22 = ((/* implicit */long long int) arr_11 [i_3]);
                        arr_21 [19LL] [i_3] [i_3] [i_3] [16] = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_1] [(short)1] [i_1]));
                        var_23 = ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
            var_24 = ((/* implicit */short) var_11);
        }
        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_23 [i_1] [i_6] [i_1])))) : (((long long int) arr_23 [i_1] [i_1] [i_6]))));
            arr_24 [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 6431321958231734317LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19415))) : (arr_22 [i_6]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_0 [i_1]))));
            arr_25 [i_1] [i_6] = ((/* implicit */short) (+(-1206650806400479223LL)));
            arr_26 [i_1] [(short)9] [i_6] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-3509)) ? ((+(-6431321958231734318LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (arr_22 [i_6]));
        }
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */int) (short)-3509)) : ((((!(((/* implicit */_Bool) -7561528990233337329LL)))) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) arr_10 [i_7]))))));
        var_28 ^= ((/* implicit */long long int) arr_13 [i_7] [i_7] [(unsigned short)20]);
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            for (long long int i_9 = 1; i_9 < 23; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        arr_39 [i_7] [i_8] [(short)12] [i_9] [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-29))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+(((/* implicit */int) arr_23 [i_7] [i_8 + 1] [i_8 - 1])))))));
                        var_30 ^= ((/* implicit */short) (signed char)88);
                        var_31 = ((/* implicit */short) (-((-(((arr_9 [i_10] [8LL] [i_8 + 1]) << (((arr_37 [(unsigned short)11] [i_9 - 1] [23LL]) - (3458542917642650447LL)))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        arr_42 [i_11] [i_11] = ((/* implicit */signed char) (_Bool)1);
        arr_43 [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11]))) : (783168976U)));
        var_32 = ((/* implicit */_Bool) arr_37 [i_11] [(short)13] [i_11]);
    }
    var_33 = (short)14832;
    var_34 = ((/* implicit */long long int) var_4);
}
