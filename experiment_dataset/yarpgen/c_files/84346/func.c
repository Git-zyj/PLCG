/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84346
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
    var_16 -= ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3])) >> (((((/* implicit */int) (unsigned char)128)) - (97)))))) ? (((/* implicit */int) max((var_10), (arr_5 [i_3] [i_2] [i_1])))) : ((+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))));
                        arr_10 [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) (signed char)89);
                        arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))))), (var_15)))));
                    }
                    for (short i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                        var_19 = ((/* implicit */unsigned int) (unsigned short)32752);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)5)) >> (((/* implicit */int) (unsigned char)7))))) == (max((2251765453946880ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) (-(2352850214U)));
                        var_21 = ((/* implicit */unsigned long long int) 3302270706U);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2456625215205237458ULL) - ((+(var_0)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (max((((/* implicit */unsigned long long int) 1942117081U)), (3497826962627115053ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))))) : (18446744073709551606ULL)));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_7 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))));
                    var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) arr_16 [i_2] [9U] [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (((unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((var_14), (arr_4 [i_1] [i_0])))) >> (((((/* implicit */int) arr_3 [i_1] [i_0])) - (34))))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                }
            } 
        } 
    } 
}
