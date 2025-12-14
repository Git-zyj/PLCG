/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92738
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((((((/* implicit */int) (short)-26983)) + (2147483647))) << (((((/* implicit */int) (unsigned short)19932)) - (19932))))) != (((/* implicit */int) (unsigned short)62394)))));
                                var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) (short)-16384)));
                                var_21 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)26)))))));
                                var_22 = ((/* implicit */short) var_15);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) max((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)12766)) ? (((/* implicit */int) (unsigned short)3130)) : (((/* implicit */int) (unsigned short)28613)))), (((/* implicit */int) (unsigned short)62407))))), (max((((long long int) 4294967295U)), (((/* implicit */long long int) (unsigned short)43))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            arr_21 [i_1] [i_6] [i_5] [i_6] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((13567207630424230304ULL) ^ (((/* implicit */unsigned long long int) 1U)))));
                            arr_22 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) var_4)) == (((((/* implicit */_Bool) 9223372036854775798LL)) ? (arr_0 [i_0] [i_6]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (short)28804)) ? (950357598U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25720))))), ((~(var_12))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_17) == (((/* implicit */unsigned long long int) 4294967295U))))))));
                            var_25 = ((/* implicit */unsigned long long int) max((4294967268U), (max((((unsigned int) 2837568143U)), (((((/* implicit */_Bool) 1975650393U)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_6)))) ? (((/* implicit */unsigned long long int) -2007508870996759773LL)) : (var_14))) + (((/* implicit */unsigned long long int) var_8))));
}
