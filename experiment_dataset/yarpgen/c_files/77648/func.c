/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77648
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
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(var_13)))) : (var_19))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-31))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_1] [(unsigned char)7] [(signed char)14] [i_3] [i_3] [i_4] = ((/* implicit */int) var_15);
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8311031613161516982LL)) ? (3470892330U) : (3470892330U))))))), (max((((((((/* implicit */int) arr_1 [i_3] [i_4 + 1])) + (2147483647))) >> (((((/* implicit */int) var_6)) + (16727))))), (((((/* implicit */_Bool) 3470892337U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [(_Bool)1] [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) / (((/* implicit */int) arr_6 [i_0] [(unsigned short)5] [(unsigned short)1]))))) : (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [(unsigned short)19] [i_1] [i_1 + 1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            {
                                arr_26 [i_5] [i_5] [i_9] [i_8] [i_9] [i_7] [10LL] = ((/* implicit */unsigned short) var_11);
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((824074973U), (((/* implicit */unsigned int) (_Bool)1)))))));
                                arr_27 [i_9] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_2 [i_9 - 1] [i_7 + 1])))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_9))) && (((/* implicit */_Bool) ((var_5) ? (411914981) : (((/* implicit */int) var_1)))))))) << (((((/* implicit */int) max((arr_2 [i_7 + 1] [i_9 + 1]), (arr_9 [i_5])))) - (7624)))));
                                arr_28 [i_5] [i_6] [i_7] [(short)7] [i_9] [18ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 824074959U)) / (-6542560862570802443LL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_10 = 4; i_10 < 17; i_10 += 2) 
                {
                    for (short i_11 = 1; i_11 < 18; i_11 += 3) 
                    {
                        {
                            arr_34 [i_5] [8LL] [(unsigned char)7] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [3] [i_6] [i_10]))))) != (((/* implicit */int) var_18)))) ? (arr_5 [21] [i_10] [4]) : (((((((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_11 - 1])) >= (((/* implicit */int) arr_30 [i_5] [i_6] [i_10 - 2] [i_11])))) ? (((/* implicit */int) arr_21 [i_5] [i_6] [i_10 - 2] [i_11 + 1])) : ((-(((/* implicit */int) (short)-19651))))))));
                            arr_35 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_8);
                            var_23 = ((/* implicit */int) arr_6 [i_10 + 2] [i_10] [i_10]);
                        }
                    } 
                } 
            }
        } 
    } 
}
