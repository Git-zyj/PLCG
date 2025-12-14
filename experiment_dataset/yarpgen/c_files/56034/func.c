/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56034
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-9197729693932521819LL)))))) ? (9197729693932521808LL) : (((/* implicit */long long int) ((int) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                var_19 = ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26395)) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2])))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) 2951484005388628355LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (8224025157148512456ULL)))))));
                var_20 = ((/* implicit */unsigned long long int) ((arr_3 [i_0 - 3] [i_0]) ? (((arr_3 [i_0 + 2] [i_0]) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0])) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0 - 3] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) (unsigned char)2)) - (2)))));
                                arr_21 [i_2] [i_3] [i_6] = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) -4967912172601943106LL);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)57))))), (((((/* implicit */_Bool) (short)-26395)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (signed char)85)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_17)))))))))));
    var_23 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)229))));
}
