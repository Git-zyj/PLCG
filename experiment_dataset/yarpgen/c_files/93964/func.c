/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93964
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */_Bool) max((-4651851179623597880LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3306556721U)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8925)))))) ? (max((3115302815128885387LL), (((/* implicit */long long int) (unsigned short)40485)))) : (8814100142568723514LL)))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_11 [i_0] [i_0] [i_2] [i_3]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [(short)0])), ((short)27252)))) ? (((/* implicit */long long int) arr_2 [i_1] [i_3 + 2])) : (((arr_13 [i_0] [i_4]) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2])))))));
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -6374476461757122322LL)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned short)65535))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [12LL]))))), (arr_2 [i_0 - 1] [i_2])))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-(-3115302815128885388LL))))));
        }
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (1196594886) : (((/* implicit */int) (signed char)95))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned char)11))))) : (-2860084494632208306LL)));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) (short)23)) : (((((/* implicit */_Bool) (short)-24)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)0))))))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11960))) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */long long int) 330547846)) : (-2447732612323010798LL)))))));
    }
    for (short i_5 = 3; i_5 < 8; i_5 += 3) 
    {
        arr_18 [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (arr_2 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_5])))));
        arr_19 [i_5] = ((/* implicit */unsigned char) arr_11 [i_5] [(unsigned char)7] [i_5] [i_5]);
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7))))))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)47)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305280059260272640LL)) ? (((/* implicit */int) arr_11 [i_5] [i_5 + 2] [i_5] [i_5])) : (((/* implicit */int) arr_6 [14LL]))))) ? (1066160733U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) -6374476461757122320LL)) ? (((/* implicit */int) (short)-26671)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
        {
            {
                arr_27 [i_7 - 1] = ((/* implicit */short) -566869257);
                var_29 = ((/* implicit */long long int) (unsigned char)25);
            }
        } 
    } 
}
