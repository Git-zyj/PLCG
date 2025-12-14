/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65949
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
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)0))) ? (((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) -1776668720))))) / (((((/* implicit */_Bool) (signed char)-109)) ? (-1258088350) : (var_10))))) : (min((((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))), (((((/* implicit */int) (short)-32740)) & (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [(_Bool)1] [i_2] [i_1] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])))) ? (-1746133757) : (((/* implicit */int) var_5))))));
                        arr_13 [i_3] [i_2] [i_3] [i_3] &= ((/* implicit */int) var_1);
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_17 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_3 [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? ((+((-(var_2))))) : (var_4)));
                        var_15 = ((/* implicit */signed char) arr_0 [i_2] [(signed char)3]);
                        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46702))) / (max((arr_0 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_1))))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((10586766337653063966ULL), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32740)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                    }
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (30483070U) : (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_1))))))) : (arr_1 [i_1]))))));
                }
            } 
        } 
    } 
}
