/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94468
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
    var_11 = ((/* implicit */int) ((long long int) (+(((var_9) / (((/* implicit */int) (unsigned short)56986)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) / (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_0 [i_0 - 2])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40340))) + (3046237742U))));
            arr_4 [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)25195);
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) var_5);
                            var_14 = ((/* implicit */unsigned int) min((var_14), (var_7)));
                        }
                    } 
                } 
            } 
        }
        var_15 = ((/* implicit */long long int) var_4);
        var_16 &= ((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */_Bool) (short)-32407)) || (((/* implicit */_Bool) (unsigned short)40340)))))));
        var_17 = ((/* implicit */long long int) (!(arr_0 [i_0 + 1])));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((-2147483647 - 1)) & (((/* implicit */int) (_Bool)1)))) - (((var_5) ? (var_9) : (((/* implicit */int) (unsigned short)25180))))))) ? (max(((+(2415955694486778482ULL))), (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */int) arr_13 [i_5]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_5)))) < (((/* implicit */int) arr_15 [i_5]))))))));
            var_19 = ((/* implicit */short) min((var_19), (((short) ((((/* implicit */int) (unsigned short)40349)) >> (((-3413392881507346345LL) + (3413392881507346346LL))))))));
        }
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
        {
            var_20 = min((((/* implicit */long long int) min(((+(var_7))), (((/* implicit */unsigned int) (!((_Bool)1))))))), (arr_16 [i_7]));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (short)28573))));
            arr_20 [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)2205), (((/* implicit */short) (_Bool)1))))) <= (arr_18 [i_5] [i_7] [i_7])));
            /* LoopNest 3 */
            for (short i_8 = 2; i_8 < 17; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_31 [i_5] [i_7] [i_7] [i_9] [15] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((var_5), ((_Bool)1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : ((-(766387067U)))))), (var_1)));
                            arr_32 [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */short) 2147483647);
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4479296437999215361LL) <= (((/* implicit */long long int) arr_18 [i_8 - 1] [i_10] [i_10 + 3])))))) ^ (min((((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_1))), (((/* implicit */unsigned long long int) ((2814781533U) <= (((/* implicit */unsigned int) var_6))))))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned int) min((arr_28 [i_7] [i_7] [i_7] [i_7]), (arr_28 [i_7] [i_7] [i_5] [i_5])))))));
        }
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_18 [9LL] [i_5] [19LL]))));
        var_25 = ((short) (-(((/* implicit */int) (signed char)-82))));
        arr_33 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)0))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) (short)-26908)) ? (-1646868819925700450LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4095)))))))) ? (((1177188826674087643ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)0)), (var_7))))))))));
    }
    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_6)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_5))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))));
    var_27 &= ((/* implicit */long long int) (~(((unsigned int) max((((/* implicit */short) (signed char)-112)), (var_10))))));
}
