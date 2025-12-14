/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69613
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(signed char)2] [8LL] = ((/* implicit */unsigned int) 720980492601367086ULL);
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [(short)1] [(unsigned short)8] [(unsigned char)12] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6661))))) ? (((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) var_17)))) : (((/* implicit */int) ((signed char) arr_8 [(_Bool)1] [i_2])))))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31429)))));
                    arr_12 [i_0] [8] [8] [i_2] = ((/* implicit */signed char) (unsigned char)7);
                    arr_13 [(unsigned char)16] = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_0 [i_2])) / (arr_9 [i_0] [i_1 - 1] [5LL]))), (((/* implicit */unsigned long long int) ((-7199950737758985782LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))))))) ? (max((var_8), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)29593)) > (((/* implicit */int) (signed char)-26))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */short) ((16383LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-41)))));
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_17 [(signed char)1] [i_3] &= ((/* implicit */unsigned long long int) var_15);
        var_20 &= ((((/* implicit */_Bool) (signed char)-41)) ? (((-9068479427312163703LL) - (((/* implicit */long long int) 559263392U)))) : (((/* implicit */long long int) ((/* implicit */int) (short)29605))));
        arr_18 [i_3] [(short)6] = (signed char)-36;
        arr_19 [i_3] = ((/* implicit */unsigned long long int) (+(arr_5 [i_3] [i_3])));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_21 = ((/* implicit */_Bool) (((~(arr_21 [i_4]))) >> (((((/* implicit */int) var_15)) - (53904)))));
        arr_22 [i_4] [i_4] &= ((/* implicit */unsigned char) arr_20 [i_4] [i_4]);
        var_22 = ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_21 [i_4]))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_20 [9U] [9U]))) & (7199950737758985781LL)))))) - (1))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 4; i_5 < 12; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                arr_29 [(short)3] [i_5] = (+(((/* implicit */int) min((arr_1 [(short)8]), ((signed char)26)))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((arr_21 [0ULL]) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_5] [i_5]))))) : (arr_21 [i_5 - 4]))))))));
                var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) (short)29605)), (7199950737758985771LL)));
            }
        } 
    } 
    var_25 &= (!(((/* implicit */_Bool) var_19)));
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)36)) != (((/* implicit */int) ((var_6) < (((/* implicit */long long int) max((((/* implicit */int) (signed char)70)), (-83314393)))))))));
}
