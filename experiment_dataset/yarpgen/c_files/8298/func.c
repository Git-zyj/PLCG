/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8298
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) min(((((-(var_5))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))))), ((((_Bool)1) || ((_Bool)1)))));
                var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                var_12 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))), (((((/* implicit */unsigned long long int) var_1)) % (var_2))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46421)) / (((/* implicit */int) (unsigned short)19114)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
                                var_13 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) var_4))), (min((((/* implicit */unsigned long long int) var_8)), (var_3)))));
                                var_14 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_8)), (var_3))), (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                                arr_12 [i_0] [(unsigned short)2] [i_2] [(unsigned short)12] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) var_7))))) ? (((var_5) | (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_7)) : (var_5)))));
                                var_15 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) var_8)), (var_3))), (min((var_5), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_6)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    var_16 = min((((((/* implicit */_Bool) var_7)) ? (var_3) : (var_3))), (var_3));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_17 = (+(min((var_3), (((/* implicit */unsigned long long int) var_1)))));
                                arr_26 [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) min((var_7), (((/* implicit */long long int) var_9)))));
                                var_18 += ((/* implicit */unsigned char) (-(min((var_1), (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (min((var_2), (((/* implicit */unsigned long long int) var_7))))));
                                arr_32 [i_5] [i_10] [i_10] [i_7] [i_10] [i_11] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) var_7)), (var_3)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (int i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            {
                                arr_37 [i_12] [i_6] [i_12] [(short)8] [i_6] = max(((unsigned short)19088), (((/* implicit */unsigned short) (_Bool)1)));
                                arr_38 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_8)))))));
                                arr_39 [(_Bool)1] [i_12] [15ULL] [i_12] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */long long int) min((var_9), (((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) var_4)), (var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) var_7);
}
