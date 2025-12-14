/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86232
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */short) var_9)), (var_3)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_15))))) / (((arr_1 [i_0]) << (((((/* implicit */int) arr_0 [i_0])) - (101))))))), (((/* implicit */unsigned long long int) var_17))));
        arr_2 [i_0] = ((signed char) (-(arr_1 [i_0])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_4 - 1]))))) ? (((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 - 1]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) : (arr_8 [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((-8943783758232106804LL) + (9223372036854775807LL))) << (((/* implicit */int) arr_7 [i_1] [i_2] [i_4]))))))))))));
                        arr_14 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned char) ((arr_3 [i_4 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned long long int) max((((4827783750746470681LL) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */long long int) max((min((var_5), (var_1))), (var_6))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) 8943783758232106809LL);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((14398524931565521078ULL), (((/* implicit */unsigned long long int) (unsigned char)14)))))));
                    }
                } 
            } 
            arr_24 [i_5] [i_1] |= ((/* implicit */signed char) (~(((/* implicit */int) var_17))));
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max(((unsigned char)239), ((unsigned char)242)));
        }
    }
    for (int i_8 = 1; i_8 < 8; i_8 += 3) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned long long int) 4827783750746470681LL);
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    arr_35 [i_8] [i_9] [i_9] [i_9] = (!(((/* implicit */_Bool) 8943783758232106803LL)));
                    var_25 += ((/* implicit */unsigned long long int) var_6);
                    arr_36 [i_8] [i_9] [i_8 + 2] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((var_10), (var_18)))) ? (((/* implicit */int) ((short) 8943783758232106793LL))) : (((((/* implicit */_Bool) 8943783758232106809LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_23 [i_8 - 1] [i_8 - 1] [i_9] [i_8 - 1]))))))));
                    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_27 [i_9] [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)12998))))))));
                }
            } 
        } 
    }
    var_27 += ((/* implicit */short) ((((/* implicit */unsigned long long int) -8943783758232106827LL)) == (var_16)));
}
