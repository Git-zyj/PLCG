/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88619
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8))))) : (((/* implicit */int) arr_4 [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)13)) ? (arr_2 [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1 + 2] [i_1 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [9U] [i_0] [13LL] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((9223372036854775798LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_5 [i_0])))))) : ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = arr_12 [i_0];
                                var_18 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65517))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_4 [i_1 + 2] [i_0]), (arr_4 [i_1 - 1] [i_3]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((8191ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [13ULL] [i_5] [i_5] [i_6] [i_5]);
                                var_22 = ((/* implicit */int) arr_9 [i_0] [i_0] [1]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)65508))))) ? ((-((+(var_10))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_2])), (var_11)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            {
                                arr_34 [i_9] [i_8] [i_8] [i_10] [i_11] = ((/* implicit */signed char) var_3);
                                arr_35 [i_9] [i_8] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)15))));
                            }
                        } 
                    } 
                } 
                var_25 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) -1187682383)), ((-9223372036854775807LL - 1LL))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 4; i_13 < 10; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 4; i_14 < 11; i_14 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-118)) ? (18446744073709551608ULL) : (8471725603593417541ULL)));
                                var_27 = ((/* implicit */int) arr_21 [i_7] [i_8]);
                                arr_44 [3U] [i_8] [i_12] [i_12] [(short)9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 - 3] [i_13 + 1]))) ^ ((-(arr_3 [i_7] [i_8 - 2])))));
                                var_28 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65520)) ? (753803171229332254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44)))));
                    arr_45 [(unsigned char)6] [i_8 - 4] [(unsigned char)6] [(unsigned char)4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_7] [(unsigned char)8] [i_7] [i_7] [i_7] [(unsigned short)4] [(signed char)6]))));
                    arr_46 [i_7] [10U] [i_8 - 1] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_10 [i_8 - 2] [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7] [i_8] [i_12])))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_10 [i_8] [10U]) : (arr_10 [i_7] [i_8 - 1]))) : (((((/* implicit */_Bool) arr_12 [i_7])) ? (arr_10 [i_7] [i_8 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) (!((_Bool)0)));
}
