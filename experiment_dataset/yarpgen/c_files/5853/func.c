/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5853
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
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 += ((((((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])))) - (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 6; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 6; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) 3252774630373301418ULL);
                                arr_14 [i_0] [i_2] [i_3] |= ((/* implicit */_Bool) 3252774630373301428ULL);
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 15193969443336250210ULL)) ? (arr_12 [i_4 - 3] [i_0] [i_0] [i_0]) : (min((((/* implicit */unsigned long long int) var_12)), (15193969443336250197ULL))))) - (((/* implicit */unsigned long long int) max((-1638524577), ((-(arr_3 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]);
                arr_15 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_1] [i_0 + 2] [i_1] [i_1] [i_0 + 2] [i_0 - 1])) ? (arr_10 [i_1] [i_0] [i_0] [i_0] [1U]) : (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]))) % (((/* implicit */int) arr_8 [i_0 + 1] [(unsigned char)8] [i_1] [i_1] [i_0 + 1] [i_0 + 2]))));
                var_24 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) -1638524577)), (max((((/* implicit */unsigned long long int) 3677035876183848610LL)), (arr_12 [i_0] [i_0] [i_1] [8U]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) var_2);
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_14) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_18)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (var_4) : (var_6)))) ? (var_6) : (((/* implicit */long long int) (-(((/* implicit */int) var_18)))))))));
    var_27 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
}
