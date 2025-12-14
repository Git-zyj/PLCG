/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5950
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
    var_11 += var_1;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) ^ ((~(arr_0 [i_0])))));
        var_13 += ((/* implicit */signed char) (((-(arr_0 [i_0]))) > (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_1 [i_0])))))));
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1036435768)) ? (((/* implicit */unsigned long long int) (+(2694929856U)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (12179711599375480518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50013)))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2096795662)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))));
    }
    var_15 = ((/* implicit */unsigned long long int) (signed char)-12);
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) min((min(((+(arr_14 [i_1] [i_1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)246)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_7)) : (((int) arr_10 [i_1] [i_2] [i_3] [i_4] [i_4])))))));
                                arr_16 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-188)) : (122886807)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)18)), ((unsigned char)27))))) : (((8194240459725419290LL) / (((/* implicit */long long int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))))))) : (((arr_8 [i_3] [i_4 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) -8030809989513741791LL)) : (12179711599375480541ULL)))) ? (((arr_4 [i_1]) << (((12179711599375480497ULL) - (12179711599375480487ULL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (1039195749))))));
                                var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_17 [i_6] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2892603686223746076LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) : (1544819489U)))))), (((((/* implicit */_Bool) arr_17 [i_2] [i_1])) ? (arr_17 [i_1] [i_1]) : (((/* implicit */long long int) 4294967279U))))));
                                arr_21 [i_1] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_2])))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) 3628525742U)) : (-8030809989513741791LL))) : (((/* implicit */long long int) -2147483618))));
                                var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1)))) * (((((/* implicit */_Bool) 666441549U)) ? (((/* implicit */int) (short)-19313)) : (var_0))))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)10932)) ? (((/* implicit */unsigned long long int) -29)) : (min((arr_14 [i_6] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_7])))))) - (18446744073709551582ULL)))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 17949902677858740600ULL))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])) : (6625961430179233132ULL)))) ? (((((/* implicit */_Bool) 5116181062870856333LL)) ? (arr_8 [i_2] [i_1]) : (arr_8 [i_3] [i_1]))) : (((arr_8 [i_1] [i_1]) / (arr_8 [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)104)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_8] [i_9])))))));
                                arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((short) -2892603686223746077LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
