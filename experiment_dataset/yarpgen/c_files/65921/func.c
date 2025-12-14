/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65921
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned int) ((min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_4)) : (arr_2 [i_0] [i_0])))));
        var_16 = ((/* implicit */unsigned char) arr_2 [i_0] [21]);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(((unsigned long long int) arr_2 [i_1] [i_1])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (unsigned short i_4 = 4; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((9195058364474102803LL) % (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_4 - 3])))))));
                    arr_15 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) arr_8 [i_2] [8LL] [i_4])) ? (-9223372036854775780LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4]))))), (((9195058364474102798LL) / (arr_12 [i_2] [i_3] [(unsigned char)18])))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) ((signed char) ((var_4) | (((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_1 [(unsigned short)17]))));
        arr_16 [i_2] = ((/* implicit */signed char) max((((unsigned long long int) arr_8 [i_2] [i_2] [i_2])), (((/* implicit */unsigned long long int) (+(arr_12 [i_2] [i_2] [11U]))))));
    }
    var_20 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) -9195058364474102803LL)) ? (var_5) : (((/* implicit */long long int) var_14))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | ((-(var_8)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) <= (1143230025U)))), ((signed char)-15)))))));
    var_22 += ((/* implicit */signed char) var_12);
    var_23 = ((/* implicit */signed char) var_13);
}
