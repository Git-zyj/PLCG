/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81052
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) var_14)) & (((/* implicit */int) var_12))))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((var_10) - (((/* implicit */unsigned long long int) 268402688U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) (~(14755755349399691027ULL)))) && (((/* implicit */_Bool) arr_4 [6ULL] [(unsigned short)8] [i_2])));
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (+(3690988724309860588ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_2))));
                            var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (268402670U) : (268402688U))) + (((((/* implicit */_Bool) arr_0 [i_5] [i_6])) ? (arr_0 [i_0] [i_6]) : (arr_0 [i_0] [i_1])))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) != (0ULL)))));
                            var_24 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_25 = ((unsigned long long int) ((unsigned char) ((unsigned short) (_Bool)0)));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) (signed char)3);
                            var_27 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_5 [i_8]) : (((/* implicit */unsigned long long int) max((arr_0 [i_7] [i_1]), (((/* implicit */unsigned int) var_5))))))));
                            var_28 = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                {
                    arr_29 [i_11] [i_10 - 1] [18U] [i_9] = ((/* implicit */short) var_12);
                    arr_30 [i_11] = ((/* implicit */short) min((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) 0)) <= (var_2))))))), ((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_29 *= ((/* implicit */short) max((((var_9) / (((unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 268402688U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_9] [i_10 - 1])))))));
                    /* LoopNest 2 */
                    for (short i_12 = 4; i_12 < 21; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            {
                                arr_36 [i_9] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)15994)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)43119))));
                                arr_37 [i_13] [(unsigned char)4] [i_11] [i_10] [(_Bool)1] = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    arr_38 [i_9] [i_9] [5ULL] = ((/* implicit */unsigned short) min((max((1794787973685533079ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))), ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_27 [i_11] [i_10] [i_9])))))));
                }
            } 
        } 
    } 
}
