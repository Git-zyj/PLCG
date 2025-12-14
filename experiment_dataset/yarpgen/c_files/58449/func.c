/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58449
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned char)29))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) -567120401))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_2)))))) || (((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-23389)))))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (~(var_3)))), (((unsigned long long int) -746089264)))) >> (((((((/* implicit */_Bool) min((-1070119667), (((/* implicit */int) (signed char)112))))) ? (((/* implicit */unsigned long long int) min((-746089278), (-746089271)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_11))))) - (18446744072963462292ULL)))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned short) -4880941683365072210LL);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (short)11174)) : (var_5)))) ? ((~(arr_6 [i_5] [i_2] [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))));
                        arr_17 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -36555978)) ? (3838976463U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))));
                        var_20 = ((/* implicit */unsigned long long int) ((max((arr_6 [i_0] [i_2] [0]), (((/* implicit */unsigned int) var_6)))) * (min((((/* implicit */unsigned int) ((unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0]))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51)))))))));
                    }
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) + (541197818199314396LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (signed char)83))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            {
                arr_23 [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((3838976463U) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))) ? (min((min((var_11), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (~(2039834461)))))) : (((/* implicit */unsigned long long int) (((~(3232235911U))) + (((/* implicit */unsigned int) (-(746089277)))))))));
                arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((((1836554305) - (((/* implicit */int) (signed char)-65)))) / ((+(((/* implicit */int) (signed char)-105)))))), ((((-(((/* implicit */int) var_16)))) * (((/* implicit */int) ((signed char) (signed char)-105)))))));
                var_22 = ((/* implicit */signed char) (short)-8221);
            }
        } 
    } 
}
