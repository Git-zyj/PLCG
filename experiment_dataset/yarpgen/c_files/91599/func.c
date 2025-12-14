/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91599
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
    var_12 = ((((/* implicit */_Bool) ((576460752303423487LL) + (576460752303423462LL)))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) | (-576460752303423479LL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (var_2))));
    var_13 = ((/* implicit */unsigned short) (((+(min((((/* implicit */long long int) var_0)), (-576460752303423488LL))))) <= (min((-576460752303423487LL), (((/* implicit */long long int) ((_Bool) var_3)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_4)))));
            var_15 = ((/* implicit */long long int) arr_2 [i_0]);
        }
        for (int i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            arr_8 [(unsigned short)5] = ((/* implicit */_Bool) (+(arr_4 [i_2] [i_0] [i_0])));
            var_16 = ((/* implicit */int) var_11);
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    var_18 = ((((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_6 [4] [i_3] [i_4]) : (-576460752303423500LL))) + (9223372036854775807LL))) >> (((var_9) - (7767371942458713366ULL))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_5 [i_5 + 2] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_5 [i_5 + 3] [i_5 + 3] [i_5])))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) 576460752303423462LL))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_17 [i_5] [i_6] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (-(-1474081828)))), (((unsigned long long int) arr_11 [i_5] [i_5] [i_6])))) >> (((((/* implicit */int) (signed char)123)) - (63)))));
            var_21 = ((/* implicit */unsigned long long int) 576460752303423462LL);
            arr_18 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 + 1])) ? (arr_7 [i_5 + 2] [i_5 + 1]) : (arr_7 [i_5 + 2] [i_5 + 1]))) - (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (arr_7 [i_5 + 1] [i_5 + 3])))));
            var_22 = ((/* implicit */unsigned long long int) ((int) var_8));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 12; i_8 += 3) 
            {
                for (long long int i_9 = 4; i_9 < 12; i_9 += 3) 
                {
                    {
                        arr_26 [i_5] [i_7] = ((/* implicit */long long int) ((-989483487) > (((/* implicit */int) ((_Bool) var_9)))));
                        arr_27 [i_5] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [11ULL] [i_8 - 1] [i_5 + 2])) ? (((/* implicit */int) arr_5 [(short)12] [i_8 - 3] [i_5 + 1])) : (((/* implicit */int) arr_5 [i_8 + 1] [i_8 + 1] [i_5 - 1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) (short)-1);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -576460752303423488LL)) ? (12931913950245575015ULL) : (13351797828943490624ULL)))) ? (5514830123463976598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            arr_28 [i_7] [i_7] [2] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 16; i_11 += 3) 
        {
            for (short i_12 = 2; i_12 < 16; i_12 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)58973)))))))));
                    arr_37 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_30 [i_11] [i_12])) : (((/* implicit */int) arr_30 [i_11 - 2] [i_11 - 2]))));
                    /* LoopSeq 2 */
                    for (int i_13 = 3; i_13 < 16; i_13 += 4) 
                    {
                        arr_41 [i_10] [i_11] [15] [i_10] [i_13] = ((/* implicit */long long int) (+(((var_9) >> (((((/* implicit */int) (unsigned short)50486)) - (50445)))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_34 [i_10] [i_11])) : (arr_38 [i_11] [i_11])))) ? (((((/* implicit */_Bool) arr_38 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) 576460752303423507LL)) : (arr_31 [i_10] [i_11 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11 - 1] [i_12 - 2] [i_11])))));
                        var_27 = ((/* implicit */unsigned long long int) arr_32 [7ULL] [i_10]);
                    }
                    for (signed char i_14 = 1; i_14 < 15; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_12 - 2] [i_11 - 3])) ? (((/* implicit */int) arr_43 [i_11 - 1] [i_11])) : (((((/* implicit */int) (short)29221)) | (((/* implicit */int) arr_30 [i_10] [i_12 - 1]))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_12] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_29 [i_10] [i_11])));
                        var_30 = (-(((/* implicit */int) arr_39 [i_10] [i_11 + 1] [i_12 + 1] [7ULL] [i_14])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) var_0);
                                var_32 = var_2;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
        var_34 = ((((/* implicit */_Bool) arr_48 [10ULL] [14] [i_10] [i_10] [i_10] [14] [i_10])) ? (2990734584651397967LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
    }
}
