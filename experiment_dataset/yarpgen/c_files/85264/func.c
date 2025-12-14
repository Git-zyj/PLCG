/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85264
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) 9850445213686254330ULL)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)9)))))), ((~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(short)1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) arr_12 [i_0]);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned short) ((arr_5 [i_2 - 1] [(unsigned char)13] [i_2]) <= (arr_5 [i_2 - 1] [i_2] [i_2])))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [i_1] [(_Bool)1] [i_1] [i_1] [i_1 - 1] [i_1])) ? (var_2) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (signed char)0)) : ((-((~(((/* implicit */int) (unsigned char)251))))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [(unsigned char)7] [i_0] [i_3 - 1]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    arr_23 [1U] [i_4] [i_5] [i_5] = ((/* implicit */long long int) var_15);
                    arr_24 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */int) ((short) (-(1024658658))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_20 [16LL] [i_5] [16LL] [i_5]) == (((/* implicit */long long int) arr_19 [i_5] [i_5 + 1]))))) & (((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 1]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3085)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) 1638089274)) : (17944029765304320ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 2766121196U)) != (33554400LL)))))));
    var_26 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)1046));
}
