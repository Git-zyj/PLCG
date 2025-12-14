/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98408
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) arr_6 [i_1] [i_1] [14] [i_2]);
                    arr_10 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4))));
                    var_16 = (+(((long long int) arr_3 [i_0])));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_4] [(unsigned char)12] = ((/* implicit */short) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) arr_8 [i_3] [(signed char)13])))))))));
            arr_18 [i_4] = ((/* implicit */short) (!(((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            arr_19 [i_3] [i_4] [i_3 - 1] = ((/* implicit */int) arr_1 [i_4]);
            var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : ((-(arr_11 [i_3]))))), (((/* implicit */long long int) (short)4096))));
            arr_20 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (0ULL) : (((/* implicit */unsigned long long int) 3640469593133521263LL)))) >> (((-962672519) + (962672569)))));
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                var_18 = (!(((/* implicit */_Bool) arr_1 [i_5 - 1])));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_5] [(short)13] [i_5]))) / (-3640469593133521263LL)));
                arr_27 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 1] [i_5 - 1]))));
                var_20 = ((/* implicit */int) 5ULL);
                arr_28 [0LL] [i_5] = ((((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (317100560612650452LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
            }
            for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
            {
                arr_32 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_29 [i_5] [i_5])) : (((/* implicit */int) arr_29 [i_5] [i_5]))));
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) < (arr_11 [17LL])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_7]))))))));
            }
            arr_33 [6] [i_5] [i_5] = ((/* implicit */short) arr_15 [17U] [i_5 - 1] [i_5]);
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_31 [i_3] [i_3] [(short)16] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))), (((/* implicit */long long int) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1])))), (max((((/* implicit */long long int) (short)-27215)), (35184369991680LL)))));
            arr_36 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((min((((/* implicit */short) arr_29 [i_3] [i_8])), ((short)21584))), (((/* implicit */short) arr_6 [i_8 - 1] [i_8] [i_3] [i_3 - 1])))))));
            var_23 = ((((int) ((((/* implicit */_Bool) arr_15 [i_3] [(short)4] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) : (31ULL)))) != (((834241199) * (((/* implicit */int) ((var_14) != (arr_2 [i_3])))))));
            arr_37 [i_8] = ((/* implicit */short) 638289082);
            var_24 = ((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_3])), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)249)), (arr_0 [i_3 + 1])))) ? (((/* implicit */int) ((arr_11 [i_3]) < (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : ((~(((/* implicit */int) (short)16320))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    arr_49 [i_10] [i_10] [8U] [(signed char)3] [i_10] = ((/* implicit */unsigned short) arr_29 [i_3 + 1] [14ULL]);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -636270518)) ? (arr_38 [i_3] [i_3 + 1] [i_3]) : (arr_38 [6U] [i_3 + 1] [i_10])));
                    arr_50 [i_3] = ((/* implicit */short) (((~(arr_46 [i_3] [i_3] [(_Bool)1] [i_10] [i_10]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 1])))));
                    arr_51 [i_3] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3] [i_3 - 1])) + (((/* implicit */int) arr_31 [i_3] [i_3 - 1] [i_3 - 1] [i_3]))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_55 [i_3] [i_9] [7U] [(signed char)1] [1LL] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)37030))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(arr_3 [i_3]))))));
                    arr_56 [i_3] [i_3] [2ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)11))))) % (arr_11 [i_3 + 1])));
                }
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (+(arr_34 [i_3 + 1] [i_3 - 1] [12]))))));
                arr_57 [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_30 [16LL] [i_9])) ? (4127839965739046631LL) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_3] [i_9] [i_10])))))));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16344)) != (((/* implicit */int) (unsigned char)253))));
            }
            arr_58 [i_3 + 1] [10U] [10U] = ((/* implicit */unsigned char) arr_24 [i_3] [i_3 - 1]);
        }
        var_29 &= ((/* implicit */_Bool) (-(max((var_8), (((/* implicit */int) arr_13 [i_3 + 1]))))));
    }
    var_30 = ((/* implicit */unsigned long long int) min(((~(max((((/* implicit */long long int) 3491560356U)), (var_14))))), (((/* implicit */long long int) var_8))));
}
