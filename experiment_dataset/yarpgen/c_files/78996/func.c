/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78996
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((4224424021U) >> ((+(((/* implicit */int) (_Bool)0))))))) + (var_8)));
    var_11 = ((/* implicit */unsigned short) var_6);
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(((/* implicit */int) var_2)))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (70543275U))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4224424021U)), (18446744073709551615ULL)));
                        var_16 = ((/* implicit */unsigned short) var_8);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_13 [(unsigned char)19] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) max((16U), (((/* implicit */unsigned int) (signed char)6))))) / (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2])) ? (arr_12 [(unsigned char)15] [2] [2] [i_4] [(unsigned char)15]) : (var_9)))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_4 [i_0] [i_4] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8314))))) || (((/* implicit */_Bool) var_7)))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (var_8))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_6] [(unsigned short)15])) % (arr_6 [i_6] [i_6] [i_6] [i_6]))))));
        var_21 = ((/* implicit */signed char) ((min(((-(18446744073709551607ULL))), (max((var_9), (((/* implicit */unsigned long long int) (signed char)-12)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))))))));
    }
    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_22 = (+(9ULL));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_0))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_4))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_7))));
                    var_26 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [13LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_20 [0U] [i_7])))), (max((arr_1 [i_7]), (((/* implicit */unsigned long long int) arr_7 [i_7] [(unsigned short)17] [i_7] [10ULL])))))))))));
    }
    var_28 = ((short) ((var_1) == (var_1)));
}
