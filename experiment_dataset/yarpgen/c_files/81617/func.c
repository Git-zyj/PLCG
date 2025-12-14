/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81617
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_11 ^= (unsigned char)88;
                            var_12 ^= ((/* implicit */unsigned char) (signed char)-54);
                            var_13 += ((/* implicit */signed char) (unsigned char)35);
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned char)88))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)161);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (long long int i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_7] [i_8] [i_6] &= ((/* implicit */unsigned char) (_Bool)0);
                                var_16 = ((/* implicit */unsigned char) max((var_16), ((unsigned char)142)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
                        {
                            {
                                arr_32 [i_4] [i_9] [i_5] [i_9] [i_4] [i_9] = ((/* implicit */unsigned long long int) (unsigned char)35);
                                var_17 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */_Bool) (short)5845);
                            arr_43 [i_13] = ((/* implicit */_Bool) 2003821181);
                        }
                    } 
                } 
            }
        } 
    } 
}
