/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87480
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
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7321120239670305753LL))))) | (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_6 [i_0] [(short)12] [i_2] [i_3]))))))), ((~(((((-1LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-26)) + (68))) - (42)))))))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_3))));
                                var_16 = ((/* implicit */signed char) var_1);
                                arr_14 [(short)12] = ((arr_13 [i_0] [i_1] [i_0] [(signed char)8] [(unsigned char)2] [i_3] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(var_2)))), (var_6))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((min((arr_16 [i_1] [i_5] [i_6]), (var_11))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) arr_2 [i_2]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((4294967290U), (var_0)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min(((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_8))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_8) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) + (2139036469U))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32488))) * (785146708081355163ULL))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) << (((/* implicit */int) ((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_0])) <= (-1LL)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */long long int) var_0)) < (var_8)))) : (((/* implicit */int) min((arr_4 [i_0] [i_1]), (((/* implicit */short) (signed char)35)))))))));
                }
            } 
        } 
    } 
}
