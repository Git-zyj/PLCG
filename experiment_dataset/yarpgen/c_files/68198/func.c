/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68198
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (signed char)-91);
                                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (203177813897441404LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)2] [9ULL]))) : (6252302996915843671LL)))) ? (((/* implicit */long long int) var_0)) : (arr_6 [(unsigned short)14] [(unsigned short)2] [(unsigned short)8])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(7777268614089550649LL))))));
                                var_18 = ((/* implicit */short) (unsigned char)36);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1147805630U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14995))) : (11235913405690338487ULL)));
    var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2312653919328522425LL)) ? (((/* implicit */int) (short)-32468)) : (((/* implicit */int) (unsigned short)65528))))), (var_5)));
}
