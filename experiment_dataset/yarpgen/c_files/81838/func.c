/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81838
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) 4294967295U)) ? (12526583289029449656ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_2)))) ? (max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_0))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max(((short)17314), ((short)-17308)))), ((unsigned short)5681)))))));
                    arr_8 [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) min((((var_17) & (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_4), (((/* implicit */short) var_6)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) var_9)), (var_1)))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) == (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) (+(var_13)))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 6; i_4 += 3) 
    {
        arr_15 [4U] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) * ((-(var_11)))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_0)), (var_8))), (((/* implicit */unsigned int) var_7))))) : (min((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_10)))))));
                    arr_21 [i_4] = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) var_4)), (var_5)))));
                    arr_22 [i_4 + 4] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))) ? (var_15) : (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) var_12))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (unsigned int i_8 = 3; i_8 < 9; i_8 += 3) 
            {
                {
                    arr_29 [i_4 + 2] [i_4 + 2] [i_4] [3LL] = ((/* implicit */short) (+(((/* implicit */int) (signed char)96))));
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_18))))), (max((var_16), (((/* implicit */unsigned int) var_14))))));
                    arr_30 [i_4] [i_7] [i_8 - 1] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)31427)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        var_23 = ((var_15) / (var_5));
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 20; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    var_24 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                    var_25 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 549755813887LL))));
                    arr_39 [i_9] [i_9] [i_9] = ((/* implicit */short) var_12);
                }
            } 
        } 
        var_26 = ((/* implicit */int) var_11);
    }
    for (unsigned char i_12 = 2; i_12 < 20; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 2; i_15 < 19; i_15 += 4) 
                    {
                        arr_52 [i_12] [i_12 - 2] [i_13] [i_14] [i_15 + 2] [i_15] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (-144847047) : (((/* implicit */int) (short)-20778))));
                        arr_53 [i_12] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) var_16);
                    }
                    /* vectorizable */
                    for (signed char i_16 = 1; i_16 < 17; i_16 += 2) 
                    {
                        arr_57 [i_12 + 1] [i_12] [i_16] [i_16 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((var_15) - (2488686126794297196LL)))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(var_5))))));
                        arr_58 [i_13] [i_14] [i_14] [i_14] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        arr_61 [i_12] [i_13] [i_17] [i_17] [i_14] = ((/* implicit */long long int) var_14);
                        arr_62 [i_17] = ((/* implicit */short) max((-576460752303423488LL), (((/* implicit */long long int) (unsigned short)18813))));
                        arr_63 [i_12] [i_13] [i_13] [i_13] [i_14] [(_Bool)1] |= ((/* implicit */unsigned char) max((((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)94)))), (144847047)));
                    }
                    for (long long int i_18 = 1; i_18 < 20; i_18 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) % (-144847039)))) : ((-(var_13))))) > (min((((/* implicit */unsigned long long int) var_17)), (var_10))))))));
                        var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_14))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) + (var_13)))));
                        arr_67 [i_18] [i_14] [i_14] [i_18 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        arr_68 [i_14] [i_14] [i_13] [i_12] [i_12] [i_14] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_5))))))), (max((max((var_13), (((/* implicit */unsigned long long int) var_12)))), (min((((/* implicit */unsigned long long int) var_11)), (var_10)))))));
                    }
                    var_30 = ((/* implicit */long long int) var_6);
                    var_31 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_12)))), (min((((/* implicit */unsigned long long int) var_15)), (var_10))));
                    var_32 = ((/* implicit */unsigned int) max((-1LL), (((/* implicit */long long int) (unsigned char)255))));
                }
            } 
        } 
        arr_69 [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_9)), (var_18))))))))) : (var_15)));
    }
    var_33 = max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)73)));
}
