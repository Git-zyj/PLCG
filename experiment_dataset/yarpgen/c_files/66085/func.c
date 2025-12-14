/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66085
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
    var_19 = ((/* implicit */unsigned long long int) -2101694661);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3 - 3] = ((/* implicit */signed char) var_8);
                            var_20 *= ((short) arr_6 [i_0]);
                            arr_11 [i_0] = var_5;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */int) arr_3 [i_0] [i_1]);
                            var_21 = 7354577178661953216ULL;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0]))))) << (((((/* implicit */int) var_10)) + (17021)))))) ? (((/* implicit */int) ((((unsigned int) arr_8 [i_0] [i_1] [i_6 - 2] [i_7] [i_1] [i_1])) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_7] [i_6] [i_7] [i_1] [i_7]))) : (-2227965432822724626LL)))) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_6 - 2] [i_7] [i_7] [i_6 + 1])) : (-466113309)))));
                            arr_24 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) -1058949161))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_31 [i_1] [i_1] [i_8] [i_9] [i_9] [i_0] = ((/* implicit */short) arr_16 [i_0] [i_1] [i_8] [i_8] [i_8] [i_9]);
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_8 [i_9] [i_0] [i_0] [i_9] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = (+(var_16));
    /* LoopNest 3 */
    for (signed char i_10 = 2; i_10 < 16; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) var_14);
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        for (long long int i_14 = 1; i_14 < 13; i_14 += 1) 
                        {
                            {
                                arr_42 [i_10 - 2] [i_11] [i_13 - 2] [i_14] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) arr_34 [i_10 + 1] [i_10 + 1]))))));
                                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || ((!(((/* implicit */_Bool) (short)9096)))))))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10 - 2])) ? (((/* implicit */int) arr_39 [i_10 - 1] [i_11] [i_12] [i_13 + 1] [i_13 - 2] [i_14 + 4])) : (((/* implicit */int) arr_32 [i_13] [i_11]))))) ? (((-1711581517) + (((/* implicit */int) arr_37 [i_10] [i_10 - 2] [i_10 - 1])))) : (((/* implicit */int) arr_32 [i_10 + 1] [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_3)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 4; i_16 < 13; i_16 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) var_14);
                                arr_50 [i_10 - 1] [i_11] [i_12] [i_15] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_44 [i_10 - 2] [i_11] [i_12]))))) ? ((-(((/* implicit */int) arr_48 [i_10 - 2] [i_10 - 2] [i_10 + 1])))) : (((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))) <= (max((((((/* implicit */_Bool) (signed char)-1)) ? (-1711581524) : (-596998038))), (((/* implicit */int) ((short) 1711581532)))))));
                                arr_51 [i_10 - 1] [i_11] [i_12] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                                arr_52 [i_10] [i_11] [i_16] [i_15] [i_16] = ((/* implicit */unsigned long long int) var_13);
                                arr_53 [i_16] [i_15] [i_12] [i_11] [i_10 - 1] = ((/* implicit */unsigned long long int) var_17);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
