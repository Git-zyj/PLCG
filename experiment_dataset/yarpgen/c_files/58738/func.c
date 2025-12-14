/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58738
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_15)))) * (((/* implicit */int) var_15))))) ? (min((var_11), (((/* implicit */int) ((short) var_8))))) : (((/* implicit */int) var_9))));
    var_20 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3289076371U)))))) <= (min((1005890916U), (3289076366U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((arr_1 [i_0]) ^ (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)60313)) ? (((/* implicit */int) (unsigned short)33898)) : (484796792))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_21 -= ((/* implicit */short) (+((+(((/* implicit */int) var_13))))));
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)63430)) ? (((/* implicit */int) arr_11 [i_0] [i_3 - 3] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_3 - 1] [12LL] [i_0 - 1]))))));
                        arr_13 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_21 [i_0] [6LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1468817723)) ? (var_1) : (((/* implicit */long long int) arr_1 [i_0 - 1])))) <= (((/* implicit */long long int) min((arr_1 [i_0 + 4]), (arr_1 [i_0 + 2]))))));
                        arr_22 [i_0] [13U] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)5828)), (max((((/* implicit */unsigned long long int) arr_18 [i_6] [11LL] [i_0] [i_0])), (var_3)))))) ? (((var_9) ? (((/* implicit */int) max((arr_7 [i_0] [i_4] [i_4] [i_0]), (((/* implicit */unsigned short) (short)-1))))) : (((/* implicit */int) ((unsigned char) 11291984301052427367ULL))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 16503992624238335773ULL)) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (1468817705)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_20 [15] [i_0] [i_0 - 1] [i_0] [i_4 - 1]);
                            arr_27 [i_0] [i_4] [i_4] [i_4] [i_6] [i_5] = ((3289076376U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-5827))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((~(arr_15 [i_0] [i_0]))) ^ (((/* implicit */int) arr_11 [i_0 + 2] [i_7] [i_5] [i_0 + 2])))))));
                            arr_28 [i_0] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) var_5));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) max((((unsigned long long int) min((arr_20 [i_0 + 2] [i_4] [i_5] [0U] [i_8]), (((/* implicit */unsigned int) var_10))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-5843)))))));
                            arr_31 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */long long int) max((1005890943U), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) var_16);
                            var_26 = ((/* implicit */unsigned short) var_11);
                        }
                        /* LoopSeq 1 */
                        for (short i_10 = 4; i_10 < 17; i_10 += 4) 
                        {
                            arr_36 [i_5] [i_4] [i_5] [(unsigned short)2] [i_5] = ((/* implicit */unsigned long long int) min((arr_14 [i_10 - 2] [i_0 + 2]), (((/* implicit */int) ((arr_14 [i_10 - 2] [i_0 + 2]) <= (((/* implicit */int) (_Bool)1)))))));
                            arr_37 [i_0] [i_0] [i_6] [i_10] &= ((/* implicit */unsigned long long int) var_8);
                        }
                    }
                } 
            } 
        } 
    }
}
