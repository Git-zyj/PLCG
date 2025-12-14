/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82490
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((+(((/* implicit */int) (unsigned char)0)))))) << (((((min((17503628773732005850ULL), (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))))) - (1923669434ULL)))));
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)381)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_16)))))), (((/* implicit */unsigned int) ((short) max((var_9), (((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) - (min((((/* implicit */long long int) 3900672784U)), (576460752303423487LL)))));
        arr_3 [19U] = ((/* implicit */unsigned char) 0U);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) + (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)27746)) ? (3135254300U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3540))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0 - 1]))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */short) arr_2 [i_1]);
                var_22 = max((((/* implicit */unsigned short) ((short) 4202641911U))), (((unsigned short) arr_6 [i_2 + 2] [i_2 + 3])));
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (0)));
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) max((((int) (-(((/* implicit */int) (unsigned short)13802))))), (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (short)-3546)) : (((/* implicit */int) (_Bool)1))))));
                                arr_17 [i_1] [i_3] [i_2 + 2] [i_3 + 3] [i_2 + 2] [i_3] = ((/* implicit */_Bool) max((min(((~(arr_4 [i_1]))), (1118178382))), (var_5)));
                                arr_18 [i_3] [i_3] [i_3 + 2] [i_4] [i_5] [i_4] [(unsigned short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (arr_0 [9ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4]))))))));
                            }
                        } 
                    } 
                } 
                var_24 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(arr_7 [i_2])))) | (min((arr_5 [i_1] [i_2 + 2]), (((/* implicit */unsigned long long int) arr_2 [i_2])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_2]) : (-1))))))));
            }
        } 
    } 
}
