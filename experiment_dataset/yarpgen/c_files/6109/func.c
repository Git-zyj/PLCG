/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6109
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_15))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9223372036854775799LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (max((arr_7 [3U] [i_0] [3U] [i_3]), (arr_6 [i_0] [i_0] [(short)13] [(unsigned char)10] [i_0]))) : (((/* implicit */int) (short)32759))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (arr_4 [i_0] [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (arr_3 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)12] [i_1] [i_2] [i_3])))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) : (var_15)))))));
                            arr_9 [i_0] [i_3] = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2])) : (288230376151711743ULL))) / (((/* implicit */unsigned long long int) min((arr_3 [i_2] [i_3 + 1]), (((/* implicit */unsigned int) var_11))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (-1)))) <= (max((arr_2 [i_0] [0ULL]), (((/* implicit */unsigned long long int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (18158513697557839873ULL)));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_2 [i_0] [i_1]) : (var_10))), (arr_2 [i_0] [11])));
            }
        } 
    } 
}
