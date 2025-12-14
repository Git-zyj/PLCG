/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94234
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 += (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (arr_4 [i_0] [i_1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) 2044LL)) : (13576018653393717844ULL)));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((short) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3]))))))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)10] [i_0]))) : (arr_1 [4U] [(signed char)1])))) ? (((((/* implicit */int) (unsigned short)29732)) | (444328487))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_0] [i_0] [13LL])))))) != (((/* implicit */int) (((-(var_8))) <= (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))))))));
        var_18 += ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    var_19 &= (((~(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)1))))))) & (((/* implicit */int) var_5)));
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_4]))));
        var_21 += ((/* implicit */_Bool) min((min((((2729984942U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))), (((/* implicit */unsigned int) arr_14 [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_4])) < (((/* implicit */int) (_Bool)1)))))));
        arr_15 [i_4] = ((/* implicit */long long int) ((unsigned int) (~((-(((/* implicit */int) arr_14 [i_4])))))));
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_20 [i_4] [i_5] [i_5] = arr_18 [i_5] [i_5];
                    arr_21 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))))), ((-(arr_18 [i_4] [i_4])))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 0)) : (2199022993408LL)))) ? (arr_23 [i_7]) : (((/* implicit */int) arr_22 [i_7]))));
        var_24 *= ((/* implicit */unsigned long long int) (_Bool)0);
        var_25 = ((/* implicit */signed char) (((~(arr_23 [i_7]))) + (((/* implicit */int) (unsigned short)0))));
    }
}
