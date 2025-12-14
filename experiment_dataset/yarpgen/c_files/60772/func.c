/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60772
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-105)))))));
    var_18 = ((/* implicit */_Bool) min((((unsigned short) min((var_10), (var_10)))), (((/* implicit */unsigned short) ((short) max((((/* implicit */int) (short)15002)), (678974984)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_16))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_15)), (var_6)));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-126))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)43)), (17431159709918387090ULL))) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) var_16)))))))) ? (((/* implicit */int) ((short) (unsigned char)43))) : (((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_5);
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (short)-11271)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 4]))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_7)) ? ((+(var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_13))))))))))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1269631443)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-4925261978234976722LL)));
                    var_24 = ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */int) arr_9 [i_0 - 4] [i_0] [i_0] [i_0 + 3])) : (((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_1)))))), (((((/* implicit */int) var_12)) % (((/* implicit */int) var_11))))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)0)), ((short)-11280)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (2305843009205305344LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_4)) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))))) % (((/* implicit */unsigned int) min((((((/* implicit */int) arr_5 [i_1] [i_5] [i_7])) % (2047))), (max((-891840642), (((/* implicit */int) (unsigned char)255)))))))));
                                arr_23 [i_0 - 3] [i_0] [i_5] [i_6] = ((((/* implicit */int) var_3)) * (((/* implicit */int) ((short) (unsigned char)213))));
                            }
                        } 
                    } 
                    var_25 &= ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */int) (unsigned char)30))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)43))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_21 [(unsigned char)14] [18ULL]), (((/* implicit */unsigned short) var_9)))))) : (min((-2151266085220032478LL), (((/* implicit */long long int) -2048)))))) : (max((arr_8 [i_0] [1ULL] [i_0] [1ULL]), (((/* implicit */long long int) arr_20 [(unsigned char)14] [(unsigned char)14] [i_1 + 1] [i_1 - 1] [i_1] [i_1])))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), (((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0 + 3] [0LL] [(unsigned char)8])))))));
                    var_27 = ((/* implicit */short) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_9 + 1] [i_10 + 2]))));
                                arr_33 [i_0] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)206))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)2384)))) : (((/* implicit */int) var_11))));
                                var_29 = (!(((/* implicit */_Bool) (unsigned char)33)));
                                var_30 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)135)) && (((/* implicit */_Bool) arr_27 [i_0])))) ? ((+(((/* implicit */int) arr_27 [i_1])))) : (((/* implicit */int) (short)-136))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 3; i_11 < 18; i_11 += 3) 
                {
                    var_31 &= ((/* implicit */unsigned char) ((arr_8 [i_0 + 1] [i_0 - 3] [i_0 - 3] [(unsigned char)4]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    var_32 *= ((/* implicit */signed char) ((((((/* implicit */int) var_16)) << (((arr_8 [(unsigned char)13] [i_1 - 1] [i_1] [i_0]) - (9068321556300125605LL))))) - (var_4)));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned short)5677))) - (((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)0))))));
                    arr_37 [i_0] = ((/* implicit */long long int) (-(1469078250)));
                }
                arr_38 [(_Bool)0] [(_Bool)0] |= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (578088667U)))))));
            }
        } 
    } 
}
