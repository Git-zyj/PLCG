/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64578
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_10 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (min((var_3), (((/* implicit */unsigned long long int) var_6)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)226)) / (((/* implicit */int) max(((short)511), (((/* implicit */short) (unsigned char)55)))))))));
                                arr_14 [7U] [i_3] [i_2] [(short)5] [(_Bool)0] [(short)5] = ((/* implicit */_Bool) var_1);
                                arr_15 [i_2] [i_1] [i_2] [(unsigned short)7] [i_4] = ((/* implicit */long long int) ((signed char) (!(max((var_4), (var_9))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [(short)8] [i_5] [i_5 - 1] [i_6 - 1] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((var_2), (var_5))))), (((/* implicit */unsigned int) ((signed char) var_1)))));
                            arr_23 [(short)4] [i_5] [i_5] [i_6] = ((/* implicit */long long int) var_6);
                            arr_24 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (max((var_1), (((/* implicit */int) var_0)))) : (((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) - (6805)))))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3)))))));
                            arr_30 [i_0] [i_1] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3)))))) ? ((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (unsigned int i_10 = 3; i_10 < 15; i_10 += 4) 
        {
            for (signed char i_11 = 4; i_11 < 15; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (((~(min((var_1), (((/* implicit */int) var_9)))))) & (((/* implicit */int) var_7))));
                                arr_44 [i_9] [i_10] [i_11] [i_13] [i_13] [i_10] [i_11] = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_4))));
                                arr_45 [4LL] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (min((var_5), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (var_1))))));
                                var_13 = ((/* implicit */signed char) var_1);
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) max((var_8), (var_8)))), (max((var_6), (var_6))))))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_4) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))))))) ? (((var_8) ? (max((((/* implicit */unsigned int) var_6)), (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) : ((+(((((/* implicit */_Bool) var_6)) ? (var_2) : (var_5)))))));
                                arr_52 [i_11] [i_11] [i_11 - 2] [i_11] [i_11] [11U] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_3))), (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        for (long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) % (((max((((/* implicit */unsigned long long int) var_7)), (var_3))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
