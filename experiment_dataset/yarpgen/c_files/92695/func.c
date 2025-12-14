/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92695
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_3])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (14555481502168781179ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((min((arr_1 [i_2] [i_0]), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (unsigned char)161)))))))) : (((((/* implicit */int) arr_10 [i_2 - 2] [i_1] [i_2] [i_3])) - (((/* implicit */int) arr_3 [i_2 - 2] [i_1] [i_3]))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_8))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5] [14ULL] [i_5 + 1])) << (((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))))))));
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1939712506)))))))) ? (((/* implicit */int) max(((signed char)124), (((/* implicit */signed char) (!(var_2))))))) : (arr_8 [i_0] [i_1] [i_6 + 1])));
                                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-9223372036854775807LL - 1LL)))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4088))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            {
                                arr_30 [i_7] [i_7] [(unsigned short)14] [i_7] = ((/* implicit */short) var_10);
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) var_5))), ((unsigned short)7663))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 22; i_13 += 2) 
                        {
                            {
                                arr_36 [i_7] [i_8] [i_8] [i_13] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_9 [i_13 - 1] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_8])))) == (((/* implicit */int) arr_9 [i_13 + 1] [i_13 - 2] [i_13 + 2] [i_8] [i_8]))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) (_Bool)0))))))))));
                                arr_37 [i_7] [i_8] [3] [i_9] [i_12] [9ULL] [3] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40469)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_18 [21U] [i_12] [(_Bool)1] [i_8] [i_7])) : (((/* implicit */int) (signed char)32)))))) < (max((((/* implicit */int) arr_14 [i_7] [i_9] [i_13 + 1] [i_8])), (((((/* implicit */int) arr_5 [i_12] [i_12] [i_7])) / (arr_8 [i_7] [i_7] [i_7])))))));
                                arr_38 [8LL] [8LL] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_13 - 1] [i_13 + 2] [i_13 - 1]), (arr_5 [i_13 - 1] [i_13 - 2] [i_13 - 2]))))) - (min((2460833171U), (((/* implicit */unsigned int) ((1435927288) - (4194303))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_18 [i_7] [i_7] [i_7] [i_7] [1LL]), (max((((/* implicit */unsigned char) arr_34 [i_15] [i_15] [i_15] [i_15])), (var_13)))))) ? (((/* implicit */int) ((_Bool) min(((signed char)-125), (((/* implicit */signed char) var_15)))))) : ((-((-(((/* implicit */int) var_2)))))))))));
                                var_26 = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_42 [i_9] [i_14] [i_9] [22] [(_Bool)1] [i_9]))))) >= (min((288230376151711743ULL), (((/* implicit */unsigned long long int) var_13))))))), (max((((unsigned short) (unsigned short)65535)), ((unsigned short)56334)))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_6 [(_Bool)0] [i_9] [(_Bool)0]))));
                                var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) arr_21 [(short)13] [(short)13] [15])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_15]))))) : (((/* implicit */unsigned long long int) arr_12 [i_14] [i_15])))), (((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_35 [i_9] [i_14] [i_7] [i_14] [i_15]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 22; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            {
                                arr_49 [i_7] [i_17] [i_9] [i_9] [i_9] [i_16] = ((unsigned short) max(((unsigned short)17), (((/* implicit */unsigned short) (unsigned char)161))));
                                var_29 = ((/* implicit */signed char) arr_33 [(unsigned short)5] [i_9] [(unsigned char)13] [(unsigned short)5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
