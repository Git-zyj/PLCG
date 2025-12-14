/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67066
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -65536))))))))));
                                arr_14 [(unsigned char)7] [6] [i_1] [(_Bool)1] [i_2] [i_4] [i_4] = ((((/* implicit */_Bool) 1552941556)) ? (-1552941561) : (((((/* implicit */_Bool) 1552941556)) ? (-1552941580) : (-300881665))));
                                var_15 = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) >> (((((((arr_5 [i_0] [i_2]) + (2147483647))) << (((arr_11 [i_0] [i_0] [(unsigned char)4]) - (14529118411441521001ULL))))) - (640328539))))) * ((+(((/* implicit */int) (signed char)-83)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)107))))) ? (((((/* implicit */int) ((arr_2 [i_0]) < (-300881665)))) % (((((/* implicit */_Bool) arr_8 [0ULL] [5ULL] [i_0])) ? (300881669) : (((/* implicit */int) var_1)))))) : ((-(2147483647)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_28 [i_8 + 1] [i_8] [i_5] [i_8] = ((/* implicit */unsigned char) ((((((arr_17 [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7]))))) ? ((~(-1552941548))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_12)))))) <= (((/* implicit */int) ((((/* implicit */int) (short)18436)) == (((2147483647) - (((/* implicit */int) var_4)))))))));
                                arr_29 [i_5] [i_5] [(unsigned char)8] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_5] [i_5])) | (((/* implicit */int) arr_19 [i_5])))) & (((var_1) ? (((/* implicit */int) var_0)) : (arr_26 [i_5] [i_5] [i_5 - 1] [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)108)) : (arr_22 [i_5] [i_8])))))) : (((((/* implicit */_Bool) (+(-300881670)))) ? (((/* implicit */unsigned long long int) 1552941561)) : ((((_Bool)1) ? (1088130614657166983ULL) : (((/* implicit */unsigned long long int) 300881665))))))));
                                arr_30 [i_5] [i_5] = ((/* implicit */signed char) (~(((300881643) & (((/* implicit */int) (unsigned char)199))))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_6 + 1] [i_7] [i_7] = ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])) >= (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5]))))) == (((((/* implicit */_Bool) 17358613459052384633ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0)))));
                    arr_32 [i_5] [(unsigned char)15] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
}
