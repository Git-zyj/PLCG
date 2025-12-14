/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93723
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */_Bool) var_9);
                var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_12), (var_2))) & (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)171)))))) : (((((/* implicit */int) arr_1 [i_1 - 1])) + (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)74))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) arr_5 [(short)5] [(_Bool)1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_3]))))) <= (min((((/* implicit */long long int) arr_4 [i_6])), (arr_0 [i_2])))))) : (max((arr_10 [i_4] [i_3] [i_2]), (((/* implicit */int) var_16)))))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (((((((/* implicit */unsigned int) -1403351303)) + (var_17))) << (((arr_7 [i_2] [i_3]) - (1769750988))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)33))))));
                                var_26 = ((/* implicit */unsigned int) var_10);
                                var_27 = ((/* implicit */long long int) ((min((arr_0 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) != (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_2] [i_2] [i_4] [i_3]), (((/* implicit */signed char) ((var_14) > (((/* implicit */int) var_5)))))))))));
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_18)))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_9 [i_4] [i_2] [i_3] [i_2]))))) : (((/* implicit */int) (unsigned short)63168))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)2349), (((/* implicit */unsigned short) (unsigned char)12)))))) : (0LL))) : (arr_16 [i_2])));
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_30 ^= ((/* implicit */short) -2147483634);
                        var_31 = ((/* implicit */unsigned short) ((((((arr_17 [i_4] [i_9]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) arr_5 [i_2] [6ULL])))))) : (min((((/* implicit */long long int) -2147483616)), (24LL))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_9))))) < (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                        var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_4])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_2 [i_4])))))))));
                        var_33 = ((/* implicit */int) var_3);
                    }
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (_Bool)1))));
                        var_35 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-8716)) : (((/* implicit */int) (unsigned char)124))));
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_36 = ((/* implicit */long long int) arr_10 [i_2] [i_2] [(short)11]);
                        var_37 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((arr_0 [i_2]) == (0LL)))), (((((/* implicit */_Bool) var_16)) ? (18446181123756130304ULL) : (16546091680136426601ULL)))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_38 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_14] [i_13] [i_2] [i_2])) && (((/* implicit */_Bool) var_7))))) ^ (((/* implicit */int) ((min((var_2), (((/* implicit */int) arr_37 [i_2] [i_2] [i_2] [i_14 - 1] [i_14])))) == (((/* implicit */int) max(((short)14260), (var_15))))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)27163)), (arr_20 [i_14 + 1] [i_14 + 1])))))))));
                        var_40 = max(((((((_Bool)1) && ((_Bool)1))) ? (arr_11 [i_14 + 2] [i_12] [i_14 - 1] [i_14 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_14] [i_12] [i_13] [i_14 + 2]))))), (((/* implicit */long long int) (short)14276)));
                        var_41 = ((/* implicit */short) ((((/* implicit */int) (short)-14274)) & (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1156797420)) ? (((/* implicit */unsigned long long int) -1156797429)) : (18446181123756130301ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_16 [i_2]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)51)) : (var_14))))))))));
        var_43 = ((/* implicit */unsigned char) var_6);
    }
    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)240))))) | ((+(((/* implicit */int) (unsigned char)82))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)142)), (var_4))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 18446181123756130314ULL)) && (((/* implicit */_Bool) (unsigned char)16)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned char)246)))))))))));
}
