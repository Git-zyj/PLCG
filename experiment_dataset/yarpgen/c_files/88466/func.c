/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88466
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
    var_20 = ((_Bool) ((_Bool) var_13));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -403086306)) - (arr_0 [i_1] [i_0]))) - (((var_13) / (((/* implicit */unsigned long long int) -403086306))))))) ? (((/* implicit */long long int) ((403086303) / (403086303)))) : (((arr_4 [(unsigned char)12] [i_1] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0])))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 403086306))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */int) arr_7 [i_2] [i_0]);
                        arr_9 [i_1] [i_1] [i_2] [18] |= ((/* implicit */long long int) arr_7 [i_1] [i_3]);
                        arr_10 [i_0] [i_0] [(short)7] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) arr_1 [i_3 - 1] [i_2])))));
                        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 6179759632273049497LL)) ? (arr_0 [i_3 - 1] [i_3]) : (arr_0 [i_3 + 1] [i_3 + 1])))));
                    }
                    for (int i_4 = 4; i_4 < 19; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (((-(((var_1) - (arr_4 [i_0] [i_0] [7ULL] [(unsigned short)13]))))) / (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) 403086303))))))));
                            arr_16 [i_1] [i_1] [i_4] [i_4 - 2] [i_5] = ((/* implicit */long long int) ((short) ((min((var_13), (0ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            var_25 = ((/* implicit */int) max((var_25), (-403086306)));
                            arr_17 [i_4] [i_2] [i_2] [i_2] [7] = ((/* implicit */unsigned short) (~((~(arr_5 [i_0] [i_1])))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_26 = var_12;
                            arr_21 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_4]);
                            var_27 = ((/* implicit */short) arr_4 [i_0] [i_2] [i_2] [i_4]);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6179759632273049515LL)) ? (((/* implicit */unsigned long long int) 4U)) : (2899276601729789904ULL)))))) || (((((((/* implicit */_Bool) -403086303)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */unsigned long long int) ((int) var_11)))))));
                            var_28 -= var_3;
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((403086303) + (1420914523))))));
                            arr_26 [i_0] [i_0] [i_1] [i_2] [i_4] [14] [i_7] = ((/* implicit */int) arr_14 [13ULL] [i_4 - 1] [i_4] [i_4 - 2] [i_4 - 2] [i_1] [i_0]);
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            arr_31 [i_4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_4 - 2])) ? (-403086329) : (-1697183039)))));
                            var_30 -= ((/* implicit */unsigned char) ((arr_18 [i_4 - 2] [i_4 - 3] [(unsigned short)3] [i_4]) && (arr_18 [i_4 - 2] [i_4 - 4] [i_4] [i_4 - 2])));
                            var_31 = ((/* implicit */unsigned char) arr_23 [i_4]);
                            arr_32 [i_8] [i_8] [i_4] [i_8] [i_8] [(unsigned char)3] = (+(403086306));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_32 &= min((((long long int) ((var_13) >= (((/* implicit */unsigned long long int) arr_23 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_17)) & (max((arr_34 [i_0] [i_1] [i_2] [i_4] [i_1] [i_9] [i_9]), (var_10)))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [14LL] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_4] [i_2] [i_1] [i_0]))) : (9223372036854775807LL))) << ((((~(var_5))) - (16611480591878230975ULL)))))) & (arr_28 [i_0] [3] [i_2] [i_4] [i_9])));
                            var_34 = ((/* implicit */long long int) (~(((unsigned long long int) arr_13 [i_0] [(_Bool)1] [i_2] [i_4 - 4] [i_9] [i_9]))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_14))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_36 += ((/* implicit */short) var_1);
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_0] [(_Bool)1] [i_4] [i_10])) : (var_9)))) : (((((arr_19 [i_0] [i_0] [12LL] [i_0] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_0] [i_10])) - (199)))))))) >= (((3815649559016421230ULL) | (18446744073709551615ULL)))));
                            var_38 = ((/* implicit */signed char) min(((~(var_13))), (((/* implicit */unsigned long long int) ((short) arr_18 [i_0] [i_0] [i_0] [i_0])))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3772874522518646384LL)) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_4] [i_10])) : (((/* implicit */int) min((arr_24 [i_4 + 1] [i_1] [i_2] [i_2] [i_10]), (((/* implicit */unsigned char) arr_33 [i_4 + 1] [i_1] [i_2] [i_4 - 2] [13LL])))))));
                        }
                        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [6ULL] [i_4] [i_4] [i_4] [i_4 - 4] [i_4 - 1] [i_0])) ? (((((arr_23 [i_1]) + (9223372036854775807LL))) << (((((-6407489648493774971LL) + (6407489648493774986LL))) - (15LL))))) : (var_8)))) ? (var_13) : (var_3)));
                    }
                }
            } 
        } 
        var_41 |= ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_19))))), (max((15ULL), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) && ((_Bool)1)));
        var_42 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_14)))));
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) -6179759632273049498LL))));
    }
    var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        for (int i_13 = 4; i_13 < 10; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_45 = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((var_2) || (var_2)))) & (((/* implicit */int) arr_44 [i_12] [3LL])))));
                        arr_53 [i_15] [i_14] [i_13] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21872)) >> (((-403086304) + (403086328)))))) ? (max((((/* implicit */unsigned long long int) (short)4301)), (arr_47 [4] [i_13 - 1] [i_14]))) : (((/* implicit */unsigned long long int) 403086306))));
                        arr_54 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_0 [i_12] [i_15])) ? (min((((/* implicit */long long int) arr_6 [i_12] [i_13 + 1] [i_15])), (6179759632273049497LL))) : (((/* implicit */long long int) arr_13 [i_12] [i_12] [14ULL] [i_12] [i_12] [i_12])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [14ULL] [i_13] [i_13 + 1] [i_13] [i_13]))) : (arr_23 [i_12]))))))))));
                        var_46 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) 4110481695U)))));
                    }
                    /* vectorizable */
                    for (short i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        arr_57 [i_16] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (+(976137393)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) var_17)))));
                        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) var_19))));
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_13] [i_13 - 4] [i_16 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12] [i_13 - 1] [i_16 - 1]))) : (var_3)));
                        arr_58 [i_12] [i_16] [i_14] [i_16] [4U] = ((arr_19 [i_16 + 1] [i_13 - 2] [(unsigned short)13] [i_13 - 4] [i_13 - 2]) > (((/* implicit */long long int) var_9)));
                        var_49 = ((/* implicit */long long int) ((arr_12 [i_13 + 1] [i_13 - 4] [i_14] [9]) == (7017089576470075013LL)));
                    }
                    arr_59 [i_14] [i_14] [i_13] [i_12] = ((unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_13 + 1] [i_13 - 3] [i_14])) ? (((/* implicit */unsigned long long int) 403086306)) : (arr_45 [i_13] [i_13 - 1] [(short)0])));
                    var_50 |= ((/* implicit */signed char) max((((var_0) - (((/* implicit */int) arr_6 [i_12] [i_12] [i_14])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_13] [i_13 - 3] [i_13 - 1] [i_13 - 1])) && (((/* implicit */_Bool) arr_27 [i_13 - 2] [i_13 - 1] [i_13 - 1] [i_13 - 4])))))));
                }
            } 
        } 
    } 
}
