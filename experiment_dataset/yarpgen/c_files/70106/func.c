/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70106
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (((var_9) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)14)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((((/* implicit */_Bool) (~(arr_2 [i_0 + 1])))) ? (max((281474976677888LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) (unsigned char)77);
                                var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1667812047U)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned char)193)))) > (((((/* implicit */int) arr_4 [i_0] [i_2] [i_5])) - (((/* implicit */int) arr_14 [i_0] [i_1] [(short)8] [i_2 + 1] [i_2 + 1]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_18 [(_Bool)1] [i_5] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0] [i_0] [i_0]))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))));
                            arr_19 [i_2] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-14892)) < (((/* implicit */int) (unsigned char)144))));
                            var_23 = ((/* implicit */int) arr_11 [i_5]);
                        }
                        var_24 = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (arr_17 [i_1] [i_2 + 1] [i_5])))));
                        var_25 = ((/* implicit */unsigned char) (~(((arr_5 [i_2] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-1712))));
                    }
                    var_26 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_0 - 3] [6LL] [6LL] [6LL] [6LL]))));
                }
                for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_8))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (((_Bool)1) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 610317264U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)42))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-18325))) - (var_10))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)93)))))));
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (min((var_10), (((/* implicit */unsigned int) arr_16 [i_9] [i_8] [i_7] [i_1] [i_0] [i_0 + 1]))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 1667812042U))))) + ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((short) (_Bool)1)))));
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 3; i_10 < 18; i_10 += 1) 
                {
                    var_30 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-21482)), (arr_11 [i_10])))) ? (((/* implicit */unsigned long long int) 2087681192U)) : (min((6022032387308506767ULL), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [i_10]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 4; i_11 < 19; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5147378227523897782LL)) ? (((/* implicit */int) (short)31480)) : (((/* implicit */int) (unsigned char)65))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) arr_12 [i_0] [i_12 + 1] [i_1] [i_11 + 1] [i_12] [2ULL])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)250))))))));
                                var_32 = ((/* implicit */unsigned char) max(((~(arr_1 [i_0 + 2]))), (((/* implicit */unsigned int) min((((int) 4154263994865518082ULL)), (((/* implicit */int) ((((/* implicit */int) (short)-15089)) >= (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        for (unsigned char i_14 = 1; i_14 < 18; i_14 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        {
                            arr_47 [i_16] [i_15] [i_14] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)-11001)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) arr_42 [i_13] [i_13] [i_13])))))), (max(((short)-15089), (((/* implicit */short) (signed char)-16))))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(2209338038648601043ULL)))) ? (2209338038648601058ULL) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((3367032434361210949ULL) - (3367032434361210949ULL)))))) ? (14468326562574874982ULL) : (((/* implicit */unsigned long long int) var_7)))))))));
                            arr_48 [i_13] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) / (max((((/* implicit */unsigned long long int) (signed char)2)), (10976087190082025679ULL)))))) ? ((-((~(6181865403887916402ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-7375)), (var_7)))) > (max((6181865403887916376ULL), (((/* implicit */unsigned long long int) (unsigned char)185))))))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)0)))) * (((((/* implicit */_Bool) 4271426410U)) ? (((/* implicit */int) (short)12785)) : (-1396988257))))))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((/* implicit */int) (short)12584)))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) min((4294967293U), (((/* implicit */unsigned int) (unsigned char)164)))))));
                arr_49 [i_13] [i_13] &= ((/* implicit */unsigned int) (((~((-(((/* implicit */int) arr_40 [i_13])))))) >= (((/* implicit */int) (unsigned char)63))));
            }
        } 
    } 
}
