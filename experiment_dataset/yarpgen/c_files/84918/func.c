/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84918
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) arr_1 [i_0]))))));
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)223)) ? ((+(arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) arr_1 [(short)3]))));
        var_13 -= ((/* implicit */int) ((short) (short)20541));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_10 [(signed char)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)20541)) ? (((/* implicit */int) arr_6 [i_2 + 3])) : (((/* implicit */int) arr_6 [i_2 + 2]))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) ((arr_5 [i_3 - 2] [i_2] [i_2 + 3]) > (arr_5 [i_3 + 1] [i_2 + 1] [i_2 + 1])));
                        var_15 = ((/* implicit */long long int) (short)-13881);
                        var_16 += ((/* implicit */long long int) (+(arr_5 [i_2] [i_2] [i_2 + 3])));
                        arr_13 [i_1] [i_1] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) (!(arr_2 [i_3 - 2] [(signed char)1])));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_17 [i_2] [(short)14])))))))));
                        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((arr_3 [i_1 - 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_5] [i_3 - 2])))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)));
                        arr_19 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((arr_16 [i_5] [i_1 + 1] [10] [i_1] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_2] [i_2 + 2] [i_2] [i_5]))) : (7473050840032490460LL)));
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [(short)13] [(short)13]))));
                    }
                    arr_20 [i_3] [17LL] [17LL] = ((/* implicit */unsigned int) arr_15 [10]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((long long int) ((unsigned long long int) var_0)));
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5676199206243917472LL)) ? (((/* implicit */int) arr_6 [i_1 - 3])) : (((/* implicit */int) var_7))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_7 [(unsigned short)1] [i_1 + 2] [i_1] [i_7])))));
            arr_27 [i_1] [i_7] [i_1 + 2] = ((/* implicit */long long int) (short)-32746);
        }
        arr_28 [i_1 - 2] = ((/* implicit */long long int) arr_21 [i_1 + 1] [20]);
    }
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((unsigned long long int) ((2146007677819566604LL) << (((((/* implicit */int) (short)-32746)) + (32746)))))))))));
    var_24 -= ((/* implicit */_Bool) 17301929880820826870ULL);
    var_25 = ((/* implicit */unsigned long long int) var_1);
}
