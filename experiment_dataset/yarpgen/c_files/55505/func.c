/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55505
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_2]))) : (2198901412245934415LL)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2]))) : (((((/* implicit */_Bool) arr_6 [i_3] [(signed char)6] [i_0])) ? (var_16) : (var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1779982435U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_0] [i_0]))) : (2198901412245934402LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (((((/* implicit */_Bool) (unsigned short)18099)) ? (((/* implicit */unsigned long long int) 2874858798U)) : (18446744073709551603ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) (short)2345)))) : (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_6 [3] [3] [i_2])) : (((/* implicit */int) (unsigned short)10165)))))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2470274567238451035ULL)) ? (2514984862U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204)))))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_3 - 1] [i_3] [i_0 + 2] [i_0]) ? (-1956080619) : (((/* implicit */int) arr_5 [i_3 - 1] [(signed char)3] [i_0 + 2] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (1ULL)))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_12 [i_3] [i_1 - 1] [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_4] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) var_10)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))))) : (((arr_5 [i_1 - 1] [i_0] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1]))) : (var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 2] [i_6]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 + 1] [i_6]))) : (var_8))))));
                    arr_20 [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28635)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2554)) ? (122798977) : (((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 2]))))) : (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59630))) : (160491407281022560ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_25 [i_5] [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_5]) : (arr_25 [i_5] [i_5] [i_5 + 2] [i_5 - 2] [i_7])))) ? (((((/* implicit */_Bool) (short)32754)) ? (18286252666428529061ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (arr_16 [i_8] [i_5])))) ? (((((/* implicit */_Bool) var_14)) ? (-2198901412245934415LL) : (((/* implicit */long long int) 157915657U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1838508504142379756LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (arr_26 [i_5] [i_6] [i_7] [i_7] [i_9] [i_7] [i_5]))))))))))));
                                arr_27 [i_5] [i_5 + 1] [i_5] [i_5] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_3)) : (arr_23 [i_5 + 2] [i_5 + 2])))) ? (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */unsigned long long int) 2620872939U)) : (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5 - 2] [i_5] [i_5] [i_5 + 1] [i_5] [i_5])) ? (5657417848250208520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28656)))))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)74)))) : (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-8))))))));
                                var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)63187)) ? (2198901412245934415LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25083)) ? (((/* implicit */int) (short)-12677)) : (((/* implicit */int) (unsigned short)38233))))) ? (((((/* implicit */_Bool) var_12)) ? (1429411833U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4840053455895031944ULL)) ? (((/* implicit */int) arr_24 [i_5 - 2] [i_6])) : (((/* implicit */int) (unsigned short)18706)))))));
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2312)) ? (-4062663671439514696LL) : (((/* implicit */long long int) 3788510640U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            {
                                var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5 - 2] [i_5 - 1])) ? (arr_23 [i_5 + 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 124343133)) ? (((/* implicit */int) (unsigned short)38242)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -2198901412245934411LL)) ? (arr_23 [i_5 + 2] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46830))))));
                                var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14965)) ? (arr_25 [i_5 - 2] [i_6] [i_5 + 2] [1U] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_5 - 1] [i_5] [i_11])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_16)) ? (arr_25 [i_6] [i_6] [i_5 - 2] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1164446799) : (-487837517)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
