/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5770
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
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */short) arr_10 [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_2] [i_4] [i_2] [i_4] = arr_7 [i_0] [i_0];
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_5])) ^ (((/* implicit */int) (unsigned short)34564)))))));
                            var_22 ^= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)34564))))));
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)34564))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [i_3] [i_2])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))));
                            var_25 = ((/* implicit */int) (+(((((/* implicit */long long int) var_16)) | (-5462291780962557668LL)))));
                        }
                        var_26 = ((/* implicit */unsigned short) (~(((arr_18 [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
                        var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13721))) != (3272055216U))))));
                    }
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) + (arr_9 [i_0] [i_0] [i_2] [i_0 + 2])));
                        arr_23 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((arr_19 [i_0] [i_0 - 3]) ^ (arr_19 [i_0] [i_0 + 2])));
                        var_29 -= ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_2])) || (((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_0] [i_2] [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */short) (-(arr_17 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_8 + 1] [i_9] [i_2] [i_8 - 1])));
                                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_8] [i_9] [i_1]))));
                            }
                        } 
                    } 
                    arr_29 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-13721)) ? (32767) : (((/* implicit */int) (unsigned short)34564))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0 - 2] [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0 + 1] [i_11] [i_1] [i_0])));
                            arr_36 [i_0] [i_0] [i_10] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3272055216U)), (17934257121941328767ULL)));
                            var_34 -= ((/* implicit */short) arr_22 [i_0] [i_1] [i_0] [i_11] [i_0 - 3]);
                            var_35 ^= ((/* implicit */unsigned int) ((signed char) 6818793981610902439LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 2; i_13 < 14; i_13 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) (+(max((0LL), (((/* implicit */long long int) (_Bool)0))))))) ? (1610994328171554262ULL) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)16376))))))))))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_3 [i_13 + 1] [i_0 - 1]) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (arr_24 [i_0] [i_0] [i_12] [i_13] [i_0 - 3] [i_12])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-1988821795)))) ? (max((2217041138U), (((/* implicit */unsigned int) (short)29146)))) : (((/* implicit */unsigned int) 1351674424))))) : ((~(min((arr_25 [i_12] [i_1] [i_12] [i_0] [i_12]), (((/* implicit */unsigned long long int) var_15))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */int) var_7);
    var_39 = ((/* implicit */unsigned char) var_2);
    var_40 = ((/* implicit */int) var_3);
}
