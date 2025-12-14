/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67333
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_10 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned short)52717)))))));
        var_11 = ((/* implicit */unsigned int) (+(((((((/* implicit */long long int) 1684979657U)) & (4358799200310694390LL))) | (((((/* implicit */_Bool) 1684979657U)) ? (-5LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))));
        var_12 -= ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_1 [(short)16])) ? (3636919553568596724LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) <= (((/* implicit */long long int) ((int) 1785173851U)))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1116203318U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (219435026U)))) && (((/* implicit */_Bool) var_0))))) ^ (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            arr_9 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((short) var_6))), (max((((/* implicit */int) arr_2 [11U])), ((+(((/* implicit */int) var_7))))))));
        }
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), ((short)-5128)))))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 1150310107))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned short) (unsigned short)16388)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_24 [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) arr_18 [i_7] [i_6] [i_6] [(unsigned short)4]);
                    arr_25 [i_7] [i_6] [i_6] [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max(((short)-28232), ((short)6515)))) > (((/* implicit */int) max(((unsigned short)49148), (((/* implicit */unsigned short) (short)13397)))))))) - (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) <= (1785173855U))))) <= ((+(3178763978U)))));
    }
    for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
    {
        var_19 = (+(219435021U));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 4; i_9 < 9; i_9 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) ((long long int) arr_28 [i_8 - 2]))))));
            arr_32 [i_8] [i_9] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_30 [i_8 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_8 - 1])) : (((/* implicit */int) (short)17938))))) : (arr_19 [i_9] [i_8] [i_9 - 3])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) ^ (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((4032U), (((/* implicit */unsigned int) 2147483647))))) || (((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) (unsigned short)15665)))))))))));
        }
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                for (signed char i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) 4358799200310694389LL);
                        arr_46 [i_11] [i_11] [i_12] [i_13] [(signed char)4] &= ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (short)17929))))) : (-2147483647));
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), ((~(((4075532270U) & (((/* implicit */unsigned int) 2147483636))))))));
                            arr_50 [i_10] [i_13] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (short)13397)) ? (-4358799200310694406LL) : (((/* implicit */long long int) arr_39 [i_12 + 1] [i_12] [i_13 + 2]))));
                            var_23 = ((/* implicit */unsigned short) arr_12 [i_14] [i_13]);
                        }
                        var_24 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)-13409)) ? (((/* implicit */int) var_7)) : (-2147483647))) + (2147483647))) << (((((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (short)15997))))) - (3991863037U)))));
                        var_25 = ((((/* implicit */_Bool) arr_23 [i_12 - 1] [i_12 - 1] [i_13])) ? (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) arr_34 [i_12] [(short)12])) : (((/* implicit */int) (signed char)-53)))) : (arr_36 [i_10]));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            arr_53 [i_15] [i_15] = arr_39 [i_10] [i_15] [i_15];
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)15997)) == (((/* implicit */int) (signed char)-13))))) >= ((~(((/* implicit */int) arr_38 [6U])))))))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_21 [i_15])) <= (4182111192906776669LL)))))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483625)) || (((/* implicit */_Bool) 1344947599U))))) >> (((((/* implicit */long long int) 2128383744U)) / (3882503048084017259LL)))));
            var_29 = ((/* implicit */int) arr_12 [i_15] [i_15]);
        }
        arr_54 [i_10] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 2147483634)) ? (1876955743) : (-2147483637))));
        var_30 = 2147483629;
    }
    var_31 = ((/* implicit */int) ((short) ((var_9) * (((/* implicit */int) (!(((/* implicit */_Bool) 1150310107))))))));
}
