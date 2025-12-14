/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67023
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
    var_16 = ((/* implicit */_Bool) (unsigned short)10);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */long long int) var_10)) | (((((/* implicit */_Bool) var_8)) ? (-2604313153231555996LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((3019719507U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (short)511)) - (499)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) -2604313153231555996LL));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)23819))));
                    var_19 ^= arr_1 [9LL];
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) (((((+(9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) var_0)) : (2604313153231555996LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                arr_16 [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((short) (unsigned short)33076))) - (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)-23820))))))));
                var_20 -= ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_8)))))) - (((/* implicit */int) min((arr_13 [i_3] [i_3 + 3]), (var_4)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_23 [i_5] = (unsigned short)2046;
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_6])) || (((/* implicit */_Bool) 1313945783U))))), (min((arr_10 [i_4]), (arr_10 [i_6]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_14)) >> (((/* implicit */int) (signed char)14))))), (((((/* implicit */_Bool) (short)32323)) ? (((/* implicit */long long int) var_11)) : (707232165677526369LL)))));
                var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-15)) ? ((~(arr_14 [i_4] [i_4] [i_4]))) : (((/* implicit */int) arr_21 [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_3 + 2] [i_4]))))));
            }
        } 
    } 
}
