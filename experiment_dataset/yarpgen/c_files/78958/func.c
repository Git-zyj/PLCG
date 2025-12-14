/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78958
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)135))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (!((_Bool)1)))))));
                                var_19 = ((/* implicit */long long int) max(((-(arr_6 [i_1] [i_2] [i_2] [i_4 - 2]))), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_13)), (arr_2 [i_3])))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (arr_10 [i_0] [i_2] [9U] [i_0] [9U] [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((7288078896174854215LL), (((/* implicit */long long int) 1554094728)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_13)))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (unsigned short)30253)) ? (2147483647) : (((/* implicit */int) (unsigned char)14)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_1])) ? (((/* implicit */int) var_13)) : (var_3)))) < (arr_1 [i_2])))))))));
                    var_23 = ((/* implicit */long long int) arr_10 [i_0] [i_2] [i_0] [i_1] [i_2] [i_2] [i_2]);
                    var_24 = ((/* implicit */signed char) (-(arr_2 [i_1])));
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31489)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)88)))), ((!(((/* implicit */_Bool) var_12))))))));
    var_26 = ((/* implicit */short) (unsigned short)30254);
}
