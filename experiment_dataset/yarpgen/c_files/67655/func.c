/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67655
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (+((~(var_11)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) var_13);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1]);
                    var_18 = ((unsigned int) (short)-32762);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (arr_12 [i_1 - 4] [i_1 - 4] [i_2 - 1] [i_3 - 1] [i_4 - 1])))) | (2266463739U));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_15))));
                                var_21 = ((/* implicit */signed char) ((short) arr_8 [i_0] [i_1] [i_2] [(short)6] [i_3] [i_4]));
                                var_22 = ((/* implicit */unsigned char) var_1);
                                var_23 = ((/* implicit */unsigned int) arr_12 [i_0] [i_3] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (((2028503557U) ^ (arr_4 [i_0] [0ULL] [i_0])))));
        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)228))));
        var_26 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1542495282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59560))) : (2028503557U)))), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (var_11))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 22U)))) : (((((/* implicit */_Bool) (unsigned short)6000)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967274U))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15554))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)17)))) : (var_11)));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_28 = ((/* implicit */short) var_14);
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)5976))));
            var_30 = ((/* implicit */short) 3064620708471764238ULL);
            var_31 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) var_12))));
        }
    }
    var_32 = ((/* implicit */short) min((((/* implicit */unsigned short) (short)24779)), ((unsigned short)65518)));
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                {
                    var_33 = ((/* implicit */_Bool) arr_20 [i_9]);
                    var_34 = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    } 
}
