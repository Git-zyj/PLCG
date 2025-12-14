/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80555
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((short) ((((((/* implicit */_Bool) (short)22606)) && (((/* implicit */_Bool) (signed char)56)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-82)), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [(short)3])))))));
                                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0 + 2]))) : (((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_2]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20508)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-24))))) ? (min((((unsigned int) (signed char)66)), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [(short)10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (signed char)50))))))))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_15 = ((/* implicit */short) (!(var_1)));
                    var_16 = ((/* implicit */_Bool) (short)-22594);
                    var_17 *= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)121)))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((((/* implicit */int) (signed char)54)) > (((/* implicit */int) var_8)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65472))));
                                arr_23 [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_17 [i_0 - 1] [i_0 + 1] [(_Bool)1] [i_7 + 2]));
                                var_19 = (signed char)120;
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [i_8] [i_1] = ((/* implicit */signed char) (~(arr_19 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_26 [i_0] [i_0] [(_Bool)1]))))));
                                var_21 -= ((/* implicit */unsigned int) ((short) ((_Bool) var_6)));
                            }
                        } 
                    } 
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_12 = 3; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65467))))))))));
                                var_23 = ((/* implicit */short) (unsigned short)30652);
                                var_24 += ((/* implicit */signed char) var_9);
                                var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)114))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (max((((/* implicit */unsigned int) ((short) arr_0 [(signed char)2] [i_11]))), (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 16; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 19; i_15 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) var_4);
                                var_28 = ((/* implicit */unsigned int) (+(min((((((/* implicit */int) arr_33 [(short)15] [i_1] [(short)12] [i_14 + 3] [i_15])) / (((/* implicit */int) (short)-22604)))), (((/* implicit */int) (short)22617))))));
                                var_29 += ((/* implicit */signed char) (short)12319);
                                arr_47 [i_0 + 1] [i_0 + 1] [i_11] [i_11] [i_14 + 1] [i_15] = ((/* implicit */unsigned int) arr_41 [i_1] [i_1] [i_15 + 1]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (short i_17 = 2; i_17 < 18; i_17 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                            {
                                var_30 = ((/* implicit */unsigned short) arr_31 [i_0 - 1] [i_1] [i_0 - 1] [i_17] [i_18] [i_18]);
                                var_31 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8068))));
                                var_32 &= ((/* implicit */signed char) ((((/* implicit */int) var_2)) == (((((/* implicit */int) (unsigned short)12575)) - (((/* implicit */int) var_7))))));
                                arr_56 [(signed char)3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((_Bool) var_5));
                            }
                            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 3) 
                            {
                                var_33 = ((max(((~(((/* implicit */int) var_6)))), ((+(((/* implicit */int) (signed char)74)))))) > (((((/* implicit */_Bool) -3813767195287942577LL)) ? (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)0)))) : ((-(((/* implicit */int) (signed char)-74)))))));
                                var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_51 [i_0 + 2] [i_1] [i_16] [i_16] [i_17] [i_19])) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_40 [i_0 + 3] [i_1] [i_1] [i_16] [i_16] [i_17 + 2] [i_19])))) > ((+(((/* implicit */int) arr_40 [14LL] [i_1] [i_1] [(_Bool)1] [i_17 - 2] [i_19] [i_19]))))));
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((arr_21 [i_0 + 1] [i_0] [i_1] [i_0] [i_0] [i_19] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_19]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))) : (((/* implicit */int) var_0))));
                            }
                            /* vectorizable */
                            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                            {
                                var_36 &= ((short) arr_15 [i_20 + 1] [i_20] [i_20 + 1]);
                                var_37 = ((/* implicit */unsigned char) (signed char)116);
                            }
                            var_38 &= ((/* implicit */unsigned short) min((((/* implicit */signed char) var_11)), (((signed char) (unsigned short)65521))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) ((arr_49 [i_1] [i_0] [i_0]) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_1] [i_0])), (((unsigned short) (unsigned short)63))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                arr_63 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6168)))))) * (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)2] [i_1] [i_1] [(unsigned char)8] [i_1]))) : (arr_52 [i_0] [i_0 + 1] [i_0] [(short)18])))))));
            }
        } 
    } 
    var_40 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
}
