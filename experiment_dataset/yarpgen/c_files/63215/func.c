/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63215
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
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */long long int) ((((/* implicit */int) ((arr_7 [i_0] [i_0 + 2]) < (arr_7 [i_0 - 3] [i_0 - 1])))) == (((/* implicit */int) ((short) arr_8 [i_0] [i_0 - 1] [i_1 - 1])))));
                    var_12 |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58383))) != (-7895432708463895117LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [2])))))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (arr_2 [i_0 + 2] [i_1 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 4; i_4 < 15; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned short)7153))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 3] [i_4 - 2] [11LL])));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((10576049627152153712ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58383)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))) != (591467207U)))))));
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((2125702753279746942ULL) - (2125702753279746926ULL)))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54538))) != (var_4)));
                arr_17 [i_3] [i_3] [i_3] [(unsigned char)8] = ((/* implicit */short) arr_14 [i_3] [i_4 - 4] [i_4 + 1]);
            }
            for (int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                arr_20 [16LL] [i_4] [0U] = ((/* implicit */signed char) (((+(994028092))) != (((/* implicit */int) arr_15 [i_6] [i_6] [i_4] [i_3]))));
                var_18 = ((/* implicit */long long int) (_Bool)1);
                var_19 = ((/* implicit */_Bool) arr_9 [i_6]);
            }
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                arr_23 [i_3] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])) ? (arr_11 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3])))))));
                var_20 = (i_7 % 2 == 0) ? (((/* implicit */short) ((((arr_22 [i_7]) + (2147483647))) << (((((arr_22 [i_7]) + (2065805075))) - (22)))))) : (((/* implicit */short) ((((((arr_22 [i_7]) - (2147483647))) + (2147483647))) << (((((((((arr_22 [i_7]) - (2065805075))) - (22))) + (1755362031))) - (13))))));
                arr_24 [i_7] [i_4 - 4] [i_7] = ((((((/* implicit */_Bool) arr_21 [(unsigned char)6] [7LL] [i_7])) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54538))))) < (((/* implicit */unsigned long long int) 994028120)));
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 17; i_8 += 3) 
            {
                for (unsigned int i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    {
                        arr_30 [i_9] [i_8] [i_3] [3LL] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-111))));
                        var_21 -= ((2496213471U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_8]))));
                        arr_31 [16U] [i_4 + 3] [i_8] = ((/* implicit */signed char) ((((long long int) arr_28 [i_4])) & (((/* implicit */long long int) ((int) (short)32762)))));
                        var_22 = ((((/* implicit */int) arr_16 [i_9 - 1] [i_8 + 1] [i_4 - 3])) >= (((/* implicit */int) arr_16 [i_9 - 1] [i_8 + 1] [i_4 - 3])));
                    }
                } 
            } 
            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1798753827U)) : (-5402625313623998951LL)))) || (((/* implicit */_Bool) (signed char)99))));
        }
        var_24 *= ((/* implicit */unsigned int) ((arr_25 [i_3] [i_3] [i_3] [i_3]) | (arr_26 [i_3])));
        arr_32 [i_3] [i_3] = arr_29 [i_3] [13ULL] [(unsigned char)9] [i_3];
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)28028)))))));
    }
    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) ((var_6) >> (((-6159517208871214449LL) + (6159517208871214473LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -994028109))))) : (((/* implicit */int) (unsigned short)10988))))));
}
