/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/977
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (~(arr_6 [i_0] [i_0] [i_0] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))) : (((/* implicit */int) var_0))));
                    arr_10 [i_2] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6905732910332579062ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))) / (((long long int) arr_1 [i_0] [i_0]))))) == ((-((+(5842065703025796695ULL))))))))));
                        arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (arr_5 [i_0]) : (arr_5 [i_3])))))) : (18446744073709551615ULL)));
                    }
                    for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        arr_18 [i_2] [i_0] [i_1 - 1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_1]);
                        var_15 = (i_2 % 2 == 0) ? (((long long int) ((arr_6 [i_2] [i_2] [i_2] [i_2]) - (var_4)))) : (((long long int) ((arr_6 [i_2] [i_2] [i_2] [i_2]) + (var_4))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2825863408737265420ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)16))))))) ? (min((((((/* implicit */_Bool) (unsigned short)0)) ? (3203922533498233501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))))), (((/* implicit */unsigned long long int) (unsigned short)65525)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)128)) * (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4] [i_5])) / (((/* implicit */int) (unsigned short)65521)))))), (((/* implicit */int) arr_11 [i_5] [i_4] [i_2] [i_1] [i_0]))));
                            var_18 = ((/* implicit */int) (unsigned short)65535);
                            var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1 - 1] [i_2] [i_4]))))), (var_2)));
                            var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])) == (((/* implicit */int) (_Bool)0)))))));
                            var_21 = ((/* implicit */short) (~(2930746464U)));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned short i_9 = 4; i_9 < 7; i_9 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6] [i_6]))) | (min((((((/* implicit */_Bool) arr_6 [i_6] [i_7] [i_8] [i_6])) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_0)))));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_5 [i_6])))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_22 [i_9])))))))));
                            var_24 -= var_9;
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) * (((/* implicit */int) (signed char)94))));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned long long int) (unsigned short)65528);
            }
        } 
    } 
}
