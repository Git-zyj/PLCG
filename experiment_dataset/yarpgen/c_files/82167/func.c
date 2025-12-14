/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82167
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
    var_15 = max((((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) ((unsigned char) (signed char)52))) : (((/* implicit */int) ((unsigned char) 0U))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */unsigned int) var_6)) : (4294967295U))))))));
    var_16 = max((((((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) (short)31346))))) ? (((/* implicit */unsigned long long int) 4U)) : (max((var_13), (((/* implicit */unsigned long long int) 0U)))))), (((unsigned long long int) (+(4294967292U)))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967271U)) ? ((+(min((var_13), (18446744073709551598ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)1744)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 0U);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_1] [0ULL] [i_3 + 1] = ((/* implicit */unsigned char) 5629022502250128083ULL);
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned long long int) arr_9 [i_1] [i_1 - 2] [i_1] [i_3 + 2])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 14856277270157382309ULL))));
                arr_14 [i_0 - 1] [8LL] [i_1] [(short)5] = ((/* implicit */int) (+(((((/* implicit */_Bool) -1253475316)) ? (((/* implicit */unsigned long long int) 3U)) : (0ULL)))));
            }
            arr_15 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) - (2828045912256164974ULL)))));
        }
        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            arr_19 [i_0 - 1] [i_0 - 1] [9U] = ((/* implicit */short) (-(((/* implicit */int) arr_18 [i_0 + 1] [i_0] [2]))));
            arr_20 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_0 - 1])), (min((724423214U), (((/* implicit */unsigned int) (short)-30))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1936601795)), (arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), ((signed char)-1))))) : (var_4)))));
            arr_21 [i_0] [(signed char)9] [i_0 - 1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2119977176)) ? (((/* implicit */int) arr_12 [(short)8] [(short)8] [i_0 - 2])) : (1396494801)))) ? ((~(((/* implicit */int) arr_16 [3])))) : (((/* implicit */int) arr_7 [i_0] [i_0])))), (((/* implicit */int) ((unsigned char) min((13488439545542362066ULL), (((/* implicit */unsigned long long int) arr_2 [(short)0] [(short)0]))))))));
        }
        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_31 [i_7] [i_7] [(unsigned short)4] [5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 - 2])))))) : (((unsigned long long int) (signed char)-72))));
                        arr_32 [i_0] [0ULL] &= ((/* implicit */int) (-((+((~(var_4)))))));
                        arr_33 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_6] [i_0 + 1] [i_6 - 1] [i_8]))))), ((-(18446744073709551604ULL)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [(short)5] [i_0]))));
            arr_34 [i_0] [i_6] [i_0] = min((arr_9 [i_6 + 2] [i_6 + 2] [(short)8] [i_6]), (min((((/* implicit */unsigned long long int) (short)-31342)), (1927145138172064060ULL))));
            arr_35 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (1944095958704374335LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1253475316)) || (((/* implicit */_Bool) 4294967289U))))) : (((((/* implicit */_Bool) (short)23771)) ? (((/* implicit */int) arr_7 [i_0 - 2] [(signed char)4])) : (((/* implicit */int) (short)-8111)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0 - 1] [(signed char)4] [1])), (arr_6 [i_0] [i_6] [(short)4])))) ? ((~(((/* implicit */int) arr_25 [i_0 - 2] [i_6 + 2] [i_6])))) : (min((-1851660838), (((/* implicit */int) (unsigned char)122))))))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 1) 
        {
            var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_25 [i_0 - 2] [(short)1] [i_9 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9] [9U])) ? (arr_9 [i_0] [i_0 - 2] [(signed char)0] [i_9]) : (6264400356618765806ULL)))) ? (((/* implicit */unsigned long long int) (~(-1253475303)))) : (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(15618698161453386642ULL))))))))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 9; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (int i_12 = 2; i_12 < 8; i_12 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [6U] [0U])), (max((((/* implicit */long long int) max((var_1), (((/* implicit */int) arr_16 [i_9]))))), (max((((/* implicit */long long int) (signed char)(-127 - 1))), (1944095958704374318LL))))))))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (((unsigned int) max((((/* implicit */unsigned long long int) arr_37 [i_0 + 1] [i_0 + 1] [i_11])), (var_4))))));
                        }
                    } 
                } 
            } 
            arr_45 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [8] [3ULL] [(short)3] [7] [i_0 - 2] [(signed char)9]))))), (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_9 - 2])) ? (((/* implicit */int) arr_27 [i_0] [(unsigned char)3] [3U] [i_9 + 2] [i_9 - 1])) : (432702800)))))) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_1)), (arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) : (((unsigned long long int) var_10))));
        }
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 9; i_13 += 4) 
        {
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                {
                    arr_51 [i_13] = ((/* implicit */unsigned int) max((arr_42 [i_13]), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_18 [i_0] [(short)8] [4ULL])), (4294967295U)))) || (((/* implicit */_Bool) (+(-432702801)))))))));
                    arr_52 [i_14 + 1] [i_13] [6U] = ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (min((var_13), (((/* implicit */unsigned long long int) -1253475302)))))) - (((/* implicit */unsigned long long int) ((int) 16519598935537487555ULL))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 15859386975024392463ULL)))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_22 [i_15])), (var_3))))));
            arr_55 [i_0] [8] [i_0 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3043854793U)) ? (((/* implicit */int) arr_40 [(signed char)1] [i_15])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))) || (((/* implicit */_Bool) ((unsigned int) arr_16 [i_0 - 2])))));
            var_26 = ((/* implicit */int) arr_42 [i_15]);
        }
    }
}
