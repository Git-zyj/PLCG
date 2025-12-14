/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88831
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
    var_20 = ((/* implicit */short) max((max((min((((/* implicit */unsigned long long int) (unsigned char)42)), (var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (10548037466156735657ULL))))), (((/* implicit */unsigned long long int) var_17))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */long long int) ((6315997220370065494ULL) * (7898706607552815959ULL)));
                                arr_14 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23303))) != (7898706607552815959ULL)));
                                arr_15 [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))) & (((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (2441258165627437443LL)));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_5 [i_5 - 1] [8ULL]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 8; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */_Bool) arr_19 [i_7] [i_6] [i_5 + 1] [i_0]);
                                var_24 *= ((/* implicit */short) ((((/* implicit */int) arr_24 [i_6 + 1] [(_Bool)1] [i_6 - 1] [i_6 - 1] [i_6 - 2])) > (((/* implicit */int) arr_24 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 - 2]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_20 [i_0] [i_1] [i_1 + 3] [8U] [6] [i_1]))));
                                arr_32 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)212)) || (((/* implicit */_Bool) (short)-23281)))))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_8] [i_10] [i_10 - 1] [i_10]))) : (arr_23 [i_1] [i_1 - 2] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(var_7)));
    var_27 = ((/* implicit */int) max((var_27), (721166813)));
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 1) 
        {
            {
                var_28 *= ((/* implicit */unsigned short) min(((unsigned char)12), (((/* implicit */unsigned char) arr_34 [(unsigned char)21] [i_12 - 1]))));
                var_29 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_12 - 2] [i_12 - 1]))))) != (10548037466156735657ULL)));
                arr_37 [i_11] [i_11] = ((((/* implicit */_Bool) ((((10548037466156735651ULL) < (((/* implicit */unsigned long long int) 2013766487)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) arr_36 [i_11] [i_12 + 3])) ? (((/* implicit */int) (unsigned short)22049)) : (arr_36 [i_11] [3])))))) ? (max((((/* implicit */int) ((-46721457) >= (1294209447)))), (var_17))) : (((((/* implicit */_Bool) arr_36 [i_11] [i_12 - 1])) ? (((/* implicit */int) (_Bool)0)) : (arr_36 [i_11] [i_12 - 2]))));
            }
        } 
    } 
}
