/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60781
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
    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)(-32767 - 1))) : (min((var_4), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_6))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_0] = min((((/* implicit */long long int) var_5)), (arr_5 [i_1] [i_1] [i_0]));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_2] [11]) : (((/* implicit */int) var_13))))) : (((arr_5 [i_0] [i_1] [i_2]) % (((/* implicit */long long int) var_0))))))) ? (((arr_2 [i_1]) ? (max((536870911U), (((/* implicit */unsigned int) arr_7 [i_0] [3ULL] [i_0] [i_0])))) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) (~(9223372036854775807LL))))))))));
                var_19 = ((/* implicit */short) max((max((((((/* implicit */_Bool) -798367710)) ? (var_16) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [14LL] [i_0] [(short)11]) : (var_12)))))), (((/* implicit */long long int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [(short)7] [15LL] [i_2]))))));
            }
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)63753))));
            arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)15] [16U]))))) : (max((var_15), (((/* implicit */int) var_5))))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3625))));
                arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)16])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [3LL])))))) ? (((((/* implicit */long long int) arr_3 [i_0] [i_4])) / (arr_12 [i_4] [i_3] [2]))) : (((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_0] [i_3] [i_4])), (arr_3 [i_0] [i_3]))))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_21 [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -99251993))))) * (((((arr_7 [i_0] [i_3] [10] [i_4]) >= (((/* implicit */int) (short)-32767)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))) : (arr_13 [i_0] [(unsigned short)9])))));
                    arr_22 [i_0] [i_3] [i_5] [i_4] [i_5] = ((/* implicit */long long int) (-(arr_7 [(unsigned short)18] [i_3] [i_4] [i_5])));
                    var_21 = ((/* implicit */int) ((((/* implicit */int) max((arr_2 [i_5]), (arr_2 [i_5])))) > (max((((/* implicit */int) arr_15 [i_0] [i_3] [i_4] [i_5])), (arr_13 [i_3] [i_0])))));
                    var_22 = ((/* implicit */short) (-(arr_5 [i_0] [5ULL] [i_5])));
                    var_23 = arr_20 [i_0] [i_0] [i_0] [i_5] [i_0];
                }
            }
            for (short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14)))) > (((var_11) + (((/* implicit */unsigned long long int) ((var_4) - (var_4))))))));
                var_25 ^= ((/* implicit */unsigned short) max(((-(-99252007))), (((((4138625817746719960LL) >= (arr_1 [i_0] [i_6]))) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)2] [i_0])) : ((-(((/* implicit */int) var_6))))))));
                arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_6] [i_6] [i_3] [i_0]);
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */int) (unsigned short)53538)) > (((/* implicit */int) ((var_13) && ((!(((/* implicit */_Bool) arr_27 [i_0] [i_0]))))))))))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_27 [i_3] [i_6]))));
                }
            }
            /* vectorizable */
            for (int i_8 = 3; i_8 < 21; i_8 += 3) 
            {
                var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_3] [6] [i_0] [i_8 + 1])) ? (536870911U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32757)))));
                arr_32 [i_3] [3] = ((/* implicit */int) (!(((var_4) >= (arr_26 [i_0] [i_0] [i_3] [i_0])))));
            }
            for (int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_29 = ((/* implicit */int) var_2);
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    arr_37 [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_0] [16] [11LL] [i_10]);
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_30 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) var_1))))), (arr_24 [i_10])));
                        arr_40 [i_0] [i_3] [i_9] [i_10] [i_3] = ((/* implicit */unsigned short) arr_1 [i_0] [i_10]);
                        arr_41 [i_3] [i_10] [i_11] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) var_5))))) - (((var_14) + (((/* implicit */long long int) ((/* implicit */int) (short)-13699))))))));
                        arr_42 [i_0] [21] [i_9] [i_10] [(short)0] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned int) var_0)), (max((arr_24 [i_9]), (((/* implicit */unsigned int) arr_31 [i_9] [i_3] [i_0])))))));
                    }
                }
                arr_43 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (~(((arr_19 [i_0] [(short)17] [i_9] [i_9]) & (((((/* implicit */_Bool) arr_13 [i_0] [i_3])) ? (arr_0 [i_3]) : (((/* implicit */int) var_5))))))));
            }
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_46 [i_12] = (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_0] [11ULL] [(unsigned short)5] [i_0]))))) : ((-9223372036854775807LL - 1LL)))));
                arr_47 [11ULL] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(var_14)))) ? (arr_16 [i_0] [i_3] [i_12]) : (((((/* implicit */unsigned long long int) arr_30 [i_0] [16])) - (arr_16 [i_0] [i_0] [i_12])))))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_4), (var_8))), (((/* implicit */int) (unsigned short)23409))))) ? (((((/* implicit */_Bool) arr_4 [i_12])) ? (arr_4 [i_3]) : (arr_4 [i_3]))) : (((arr_14 [i_0] [i_3] [i_12]) & (var_14)))));
                arr_48 [i_0] [(short)18] [i_12] = ((/* implicit */long long int) arr_28 [i_0] [i_3] [i_12] [i_12]);
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_8) : (-402490236)))) ? (arr_4 [i_3]) : (((/* implicit */long long int) (~(-1928656176)))))) == (((/* implicit */long long int) arr_24 [i_0])))))));
                    /* LoopSeq 1 */
                    for (int i_14 = 1; i_14 < 20; i_14 += 3) 
                    {
                        var_33 ^= ((/* implicit */long long int) (+((+(var_11)))));
                        var_34 ^= var_10;
                        var_35 = ((/* implicit */unsigned short) -384237745);
                    }
                    var_36 ^= ((/* implicit */unsigned long long int) max((max(((-(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_4)) ? (var_15) : (0))))), (max(((+(var_0))), (((arr_13 [i_0] [i_3]) / (((/* implicit */int) var_3))))))));
                    var_37 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_50 [i_3] [i_12]))))));
                }
            }
            for (int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)43976)) ? (((/* implicit */long long int) arr_19 [i_15] [i_3] [4ULL] [i_15])) : ((-(arr_14 [9] [i_3] [i_0])))));
                arr_57 [i_0] [i_15] = min((((((/* implicit */long long int) arr_34 [i_15] [i_3] [i_0])) & (((((/* implicit */_Bool) 536870923U)) ? (var_14) : (((/* implicit */long long int) 1214079347U)))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_3] [i_0]))))));
                arr_58 [i_0] [i_3] [i_15] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_1))))));
                var_39 = ((/* implicit */short) max((min((((/* implicit */int) ((arr_24 [i_0]) >= (((/* implicit */unsigned int) var_8))))), (((((/* implicit */int) var_6)) + (arr_0 [i_0]))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62098)))))));
                var_40 = (~(arr_44 [i_0]));
            }
        }
        var_41 ^= ((/* implicit */unsigned short) var_10);
        arr_59 [3] = ((/* implicit */unsigned short) ((((min((arr_35 [i_0]), (((/* implicit */unsigned long long int) arr_52 [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) <= (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0]))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)20])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_53 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_53 [i_0] [i_0] [2ULL] [i_0] [i_0]))))) : (1083944767U)));
    }
    var_43 = ((/* implicit */unsigned int) var_14);
    var_44 = var_12;
    var_45 = ((/* implicit */unsigned short) ((var_15) <= (var_12)));
}
