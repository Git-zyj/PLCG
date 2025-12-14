/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79635
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_12)) | (((/* implicit */int) (signed char)39)))), (((/* implicit */int) var_12))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((int) ((unsigned long long int) ((((/* implicit */_Bool) 17642514615020042307ULL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))))))))));
                    var_20 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_10 [i_3]))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((var_17), ((unsigned char)7))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)139)))) : (min((arr_7 [i_3 + 1]), (((/* implicit */int) arr_8 [i_4]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_5] [i_5] [i_6])))) ? (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_6])) ? (arr_5 [i_5] [i_6] [i_5]) : (arr_5 [i_5] [i_6] [i_6]))) : (max((arr_5 [12LL] [i_6] [i_6]), (((/* implicit */int) (unsigned char)164)))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_25 [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_24 [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 1] [i_8])) : (((/* implicit */int) arr_24 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8]))))), (max((((/* implicit */unsigned long long int) arr_24 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1] [(unsigned char)8])), (var_15)))));
                            arr_26 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)6))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_7]))) : (18446744073709551615ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        for (long long int i_10 = 3; i_10 < 13; i_10 += 4) 
        {
            {
                arr_34 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25))))) ? (max((arr_14 [i_10 - 2] [i_10 - 2]), (arr_20 [i_9] [i_10 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (12375164261716998380ULL)))) ? (((/* implicit */int) arr_13 [i_9] [i_9])) : (((/* implicit */int) max(((unsigned char)31), (((/* implicit */unsigned char) (_Bool)1))))))))));
                arr_35 [3U] [i_10 - 2] [i_10] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) : (max((var_5), (((/* implicit */unsigned int) (unsigned char)248)))))), (arr_27 [i_9])));
                arr_36 [i_9] = ((/* implicit */int) var_2);
                var_24 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1086611830)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (694575583240071281ULL)))) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50853)) && (((/* implicit */_Bool) (unsigned char)187))))))), (((/* implicit */int) (unsigned short)21))));
            }
        } 
    } 
}
