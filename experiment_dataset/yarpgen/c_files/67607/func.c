/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67607
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */signed char) (((-(1923248855U))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1923248855U)))) ? (((/* implicit */int) ((signed char) 2883327483U))) : (((/* implicit */int) ((unsigned short) var_13))))) + (21)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0))));
                        arr_13 [10U] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15618))) - (((((/* implicit */_Bool) ((int) var_17))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (var_6))) : (((((/* implicit */unsigned long long int) var_16)) / (var_3)))))));
                        arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)15597)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_12))))) : (((unsigned long long int) max((((/* implicit */long long int) (unsigned short)4)), (var_7))))));
                        arr_15 [i_2] [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((var_7) / (((/* implicit */long long int) 1411639813U)))) != (((/* implicit */long long int) (-(var_1)))))))) / ((+(((((/* implicit */_Bool) 522240U)) ? (7448079309750044167LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_18);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 19; i_4 += 3) 
    {
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                arr_31 [i_4] [i_4] [i_5] [i_6 - 1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) var_3);
                                arr_32 [i_4] [i_4] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                    arr_33 [i_4] [i_4] = var_9;
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_39 [i_4] [i_10] [i_5 + 1] [i_6] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_8))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (max((var_3), (var_14)))));
                                arr_40 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned long long int) (_Bool)0);
                                arr_41 [i_4] [i_4] [i_5 - 1] [i_6] [i_9] [i_4] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                                arr_42 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (short)-21769)) : (((/* implicit */int) (unsigned short)1401))))), (((10258661552116960914ULL) * (((/* implicit */unsigned long long int) 1411639813U))))));
                            }
                        } 
                    } 
                    arr_43 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_15)))) >= (((/* implicit */int) var_5))));
                    arr_44 [i_4] [10] [(short)16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-110)) : (-1715830158)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21758)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21758))) : (4294967295U)))) : (((((/* implicit */_Bool) var_13)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                }
                arr_45 [i_4] [2U] [i_4] = ((/* implicit */unsigned long long int) ((((_Bool) min((var_18), (var_17)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-46)) : ((+(2147483647))))) : (((((/* implicit */int) ((short) var_16))) * (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)0)) : (var_0)))))));
                arr_46 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) ((unsigned char) var_4))), (var_1)))));
            }
        } 
    } 
}
