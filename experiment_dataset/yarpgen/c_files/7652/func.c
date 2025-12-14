/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7652
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
    var_10 = ((/* implicit */signed char) (unsigned short)17449);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0 + 3]))))));
        var_12 = ((/* implicit */signed char) arr_0 [7ULL]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned short) arr_7 [i_2 + 1] [i_0 + 1]);
                        var_13 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) arr_1 [i_0 + 2])), (arr_7 [i_3] [i_0 + 3])))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned int) arr_9 [i_3 + 3] [i_2 + 2] [i_3 + 3] [i_2 + 2] [i_0 + 3]);
                        var_14 = arr_9 [i_3] [9LL] [i_2] [i_2 + 2] [i_0 - 1];
                        var_15 += ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(15)))), (18446744073709551600ULL)));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1] [i_0]))))), (min((7060544376500193434LL), (((/* implicit */long long int) arr_1 [i_1]))))))));
        }
        var_16 = ((/* implicit */_Bool) min((-7060544376500193433LL), (((/* implicit */long long int) arr_11 [i_0] [(signed char)17]))));
    }
    for (int i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        var_17 = ((/* implicit */short) max(((-(arr_0 [i_4 - 1]))), (((/* implicit */unsigned int) max((arr_11 [6ULL] [i_4]), (max((-5), (((/* implicit */int) arr_17 [(unsigned char)16])))))))));
        var_18 = ((/* implicit */signed char) 7060544376500193411LL);
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_28 [i_4] [i_6] [i_5] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (unsigned short)5)), (max((804863037), (((/* implicit */int) arr_17 [i_4]))))))));
                        var_19 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (unsigned short)17443)), (2904115217U)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)110)), ((unsigned short)48092)));
        arr_29 [i_4] = ((/* implicit */unsigned short) (-(min((17), (((/* implicit */int) arr_26 [i_4 + 1] [i_4 + 1] [i_4] [(signed char)0]))))));
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8] [(unsigned char)19])))))))));
        var_21 = ((/* implicit */short) (+(((/* implicit */int) min(((signed char)-77), (((/* implicit */signed char) (_Bool)1)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(var_9))))));
}
