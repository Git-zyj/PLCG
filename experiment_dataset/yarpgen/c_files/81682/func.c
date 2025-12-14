/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81682
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
    var_16 = ((/* implicit */int) 17926911513864143725ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_1]))) : (arr_0 [i_0]))))));
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1539957615U)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_1))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_18 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0])))))));
                        var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16383)))))));
                    }
                    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (var_10))) ^ (((/* implicit */unsigned int) -1))));
                    var_21 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_6 [i_0])))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) ^ (arr_4 [i_0])))));
        arr_20 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) (unsigned char)30)))) << (((((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (signed char)56)))) - (247)))));
        arr_21 [i_0] = ((/* implicit */unsigned int) (~(arr_2 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        arr_25 [0LL] &= ((/* implicit */int) ((((/* implicit */int) arr_23 [14ULL] [0])) > (arr_22 [i_5] [i_5])));
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_29 [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)10)) / ((-2147483647 - 1))));
        var_23 = ((/* implicit */unsigned char) (-(arr_22 [i_6] [i_6])));
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                    arr_35 [i_6] [(short)5] = ((/* implicit */unsigned char) ((((_Bool) arr_28 [i_8])) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */int) var_3)) / (arr_22 [i_8] [i_6])))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (-1632276977143566481LL))) ? (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (var_7))) : (((/* implicit */unsigned long long int) var_10))))) || (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (2147483647))))))));
}
