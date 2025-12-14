/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75121
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
    var_16 = ((long long int) ((((((/* implicit */_Bool) (short)1951)) ? (1150669704793161728LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (unsigned short)4127);
                                var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned short)4113)))));
                                var_19 = ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)4131)), (var_13))) + (((/* implicit */long long int) ((int) var_9)))));
                                var_20 = ((/* implicit */unsigned short) ((long long int) ((((long long int) var_9)) + (((/* implicit */long long int) ((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 6128504047499224665LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) (unsigned short)1536)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1538))) : (var_13))))))));
                                arr_20 [i_0 + 2] [8LL] [i_0] [i_0 - 1] [i_0] [i_0 + 2] = ((/* implicit */int) ((long long int) var_3));
                                var_22 = ((unsigned short) ((((/* implicit */_Bool) (unsigned char)181)) ? (((long long int) -7986024249996741449LL)) : (((/* implicit */long long int) ((var_10) - (((/* implicit */int) (unsigned short)61430)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 4; i_9 < 19; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = var_6;
                            var_24 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 7986024249996741464LL)) ? (var_3) : (((/* implicit */int) var_11)))));
                        }
                    } 
                } 
                var_25 *= ((signed char) (_Bool)1);
            }
        } 
    } 
}
