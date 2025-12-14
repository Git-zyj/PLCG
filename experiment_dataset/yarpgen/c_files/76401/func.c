/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76401
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)12)) << (((18387339003221084144ULL) - (18387339003221084137ULL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)88)));
        var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-14344))));
        var_13 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)88)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_10)))))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)167)) <= (((/* implicit */int) (unsigned char)53))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(var_10))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (3850206406U)));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)-78)))), (((/* implicit */int) ((short) (unsigned char)25)))))) : (((max((9627146010748773681ULL), (((/* implicit */unsigned long long int) var_10)))) << (((((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_12 [i_5] [i_4] [i_3] [i_1] [i_1])))) + (1796))))))))));
                                var_18 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) ((short) arr_4 [i_1 - 1]))), ((~(var_1)))))));
                                arr_20 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_5] [(short)8] = ((/* implicit */signed char) ((int) ((((/* implicit */int) (unsigned char)53)) + (((/* implicit */int) (unsigned char)212)))));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_2] [i_3] [i_1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)3))));
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_5 [i_1 + 1])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_15 [i_1] [i_1] [13U] [i_1] [i_1]);
    }
    var_22 = ((/* implicit */unsigned int) ((((unsigned long long int) max((1200663281U), (((/* implicit */unsigned int) (signed char)-27))))) > (((/* implicit */unsigned long long int) max((max((var_1), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2226516761U)) ? (((/* implicit */int) var_6)) : (var_10)))))))));
    var_23 = ((/* implicit */unsigned short) (+((+((-(var_1)))))));
}
