/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76179
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_9))));
                var_16 = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) var_2)))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_3 [i_1] [i_1] [(unsigned char)7]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (unsigned char)64);
                                arr_17 [i_6] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((576460752303423480ULL), (((/* implicit */unsigned long long int) ((int) (unsigned char)75)))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [21ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (916675721) : (((/* implicit */int) (_Bool)0))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 - 2])))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) (_Bool)1);
                                var_20 = ((/* implicit */long long int) (((_Bool)1) ? (131071U) : (1111154747U)));
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [i_2])), (((((/* implicit */int) (short)-32748)) | (((/* implicit */int) (unsigned char)75))))))) & (3183812548U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
