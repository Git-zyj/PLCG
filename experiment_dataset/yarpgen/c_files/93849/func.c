/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93849
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
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 18446744073709551615ULL);
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (short)18)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_17 = (-((-(arr_3 [i_1]))));
        arr_5 [i_1] = ((((/* implicit */_Bool) ((long long int) 9143927801375458102LL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) ^ (4294967295U))))) : ((+(arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 1]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3])) ? (9143927801375458085LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (max((arr_11 [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) -9143927801375458116LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1])))))));
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1])) : (((/* implicit */int) var_14)))) >> (((((/* implicit */int) arr_7 [i_2 - 3] [i_1])) - (106)))));
                    var_20 = ((/* implicit */unsigned int) max(((+(arr_11 [i_2 - 2] [i_2 - 1] [i_2 - 2]))), (((/* implicit */unsigned long long int) (-(4294967291U))))));
                    arr_12 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (var_1) : (min((var_1), (((/* implicit */unsigned int) arr_7 [i_2] [i_2 - 1])))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) var_10))))) ? (((arr_0 [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (arr_0 [i_4 - 1])))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_7 + 1])), (((((/* implicit */_Bool) 3604576990572291962LL)) ? (((/* implicit */long long int) 1073741824U)) : (-9143927801375458119LL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_4))))))) : (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -9143927801375458063LL))))));
                        var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(arr_20 [i_7] [i_5] [i_6] [i_4 + 1] [i_7 - 1] [i_4 - 1])))), (arr_16 [i_4 - 1])));
                        arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(3993536236U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)9))))) : (((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_16 [i_4 + 1])))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (var_11)));
                        var_25 = ((/* implicit */_Bool) min((((arr_17 [i_4 - 1] [i_4 - 1] [i_7 - 1] [i_7 - 1]) ? (var_5) : (1680628753U))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_7] [i_5])) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((max((arr_24 [i_4 + 1] [i_8 - 1]), (arr_15 [i_4 - 1]))), (max(((signed char)-117), (arr_24 [i_4 + 1] [i_8 - 2]))))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_0 [i_4 + 1]))));
            arr_27 [i_8] [i_8] [i_8 + 1] = ((/* implicit */unsigned int) ((unsigned char) (signed char)127));
        }
    }
}
