/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84345
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
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) (-(-499922936))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((short) arr_1 [i_0]));
        var_13 = ((unsigned long long int) ((((/* implicit */int) (short)32758)) >= (((/* implicit */int) var_7))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (+(min((var_6), (((/* implicit */int) arr_5 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_15 [i_5] = ((/* implicit */unsigned short) min((max((((short) arr_8 [i_5] [i_1] [i_2] [i_1])), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_4])) <= (((/* implicit */int) arr_6 [i_2] [i_4] [i_5]))))))), (((/* implicit */short) ((((unsigned int) arr_13 [i_1] [i_3] [i_5] [i_5 + 3])) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2] [i_2] [i_4] [i_2]))))))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_1])) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_5 - 3])) && (((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))));
                                var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_4 + 1])) : (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_4 + 1])))));
                            }
                        } 
                    } 
                    var_17 = ((((((/* implicit */_Bool) arr_4 [i_3])) || (((/* implicit */_Bool) var_2)))) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32758))))) : (((arr_6 [i_1] [i_2 + 1] [i_3]) ? (((/* implicit */int) arr_8 [i_1] [16U] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_1] [(short)1] [i_1])))))) : (var_4));
                    var_18 = ((short) ((arr_8 [i_1] [i_2 + 1] [i_2 + 3] [i_2 + 3]) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */_Bool) 499922935)) ? (((/* implicit */int) arr_6 [i_1] [i_2 + 2] [i_3])) : (((/* implicit */int) arr_9 [i_1] [(short)11] [i_3] [i_3]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)61440)) & (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_20 = arr_13 [i_6] [i_6] [(unsigned short)12] [i_6];
        arr_18 [13] [i_6] = ((/* implicit */_Bool) 499922935);
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) var_9)), (var_1)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [(_Bool)1])) : (((/* implicit */int) (short)-32758)))))) + (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [(unsigned short)13]))) ? (((/* implicit */int) var_8)) : (((var_10) ? (var_6) : (((/* implicit */int) (_Bool)1))))))));
        var_22 = ((/* implicit */unsigned short) ((unsigned char) (-(((arr_3 [i_7]) ^ (((/* implicit */unsigned long long int) -499922923)))))));
        var_23 = ((/* implicit */unsigned short) ((int) ((arr_8 [i_7] [i_7] [i_7] [i_7]) || (arr_8 [i_7] [i_7] [i_7] [i_7]))));
        arr_22 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [(unsigned char)12] [(unsigned char)10] [(unsigned char)10] [(unsigned char)12])))) ? (((unsigned long long int) arr_10 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7])) ^ (((/* implicit */int) ((unsigned short) arr_14 [i_7] [9ULL] [9ULL] [i_7] [14LL] [9ULL]))))))));
    }
}
