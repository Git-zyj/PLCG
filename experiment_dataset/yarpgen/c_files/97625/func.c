/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97625
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_5)))) ? ((-(((/* implicit */int) (signed char)-15)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) (signed char)109))));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_16 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1544047348)) - (7160785477503950918ULL)));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)2874)) / (((/* implicit */int) (signed char)116))))));
        var_17 ^= ((/* implicit */unsigned char) (unsigned short)48541);
        var_18 = ((/* implicit */signed char) max((var_18), (var_12)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (_Bool)0))));
                    arr_13 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1048575LL)) ? (1048575LL) : (1048574LL)))));
                    arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 1048575LL)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2147483647))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) ((short) (short)2048));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) ((-1048605LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7])))))))));
                        var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)56436))));
                    }
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        arr_26 [i_5] [i_8] [i_2] [i_5] [i_2] [i_5] = ((/* implicit */signed char) (~(8)));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_6])) ? (arr_6 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))));
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        arr_29 [i_2] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((arr_15 [i_9] [i_5] [i_6]) >= (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_5] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2]))) : (var_13)))));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */long long int) var_7)) : (-1048575LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5])))));
                    }
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(arr_12 [i_2] [i_5] [i_2] [i_2]))))));
                    arr_30 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(-1LL)));
                    arr_31 [i_5] [i_5] = ((/* implicit */unsigned short) 18100114294350338665ULL);
                }
            } 
        } 
    }
    var_26 ^= ((/* implicit */unsigned char) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9074))))))));
    var_27 = ((/* implicit */signed char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            {
                var_28 += ((/* implicit */short) (unsigned char)221);
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */int) arr_41 [i_10] [i_10] [i_10] [i_13]);
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_10] [i_10] [i_12]), (((/* implicit */unsigned int) arr_23 [i_10] [i_11] [i_12] [i_13]))))) && ((!((_Bool)1)))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((arr_11 [i_10] [i_10]) <= (((/* implicit */int) (unsigned char)30)))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9097)) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_13])) ? (((/* implicit */int) arr_16 [i_10] [i_11] [i_10])) : (((/* implicit */int) arr_22 [i_13] [i_13] [i_12] [i_11] [i_11] [i_10])))) <= ((-(((/* implicit */int) (unsigned char)35))))))))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) << (10U)));
                        }
                    } 
                } 
                var_34 = (_Bool)1;
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) var_9);
                    arr_46 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) var_7);
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~((~(arr_15 [i_10] [i_10] [i_14]))))))));
                }
            }
        } 
    } 
}
