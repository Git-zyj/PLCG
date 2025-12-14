/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71828
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = -512;
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4))))), (1160273621U)));
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(min((min((((/* implicit */unsigned long long int) 1160273618U)), (8072217925676240642ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)1096))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)1082)), (511)))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_8)))))))));
                arr_14 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) min((3134693668U), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0)))))));
            }
            arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)161))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) 22U)))))));
            arr_18 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (((((/* implicit */_Bool) 1160273630U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)))));
            var_16 = ((/* implicit */signed char) ((unsigned long long int) var_1));
            arr_19 [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (unsigned char)161);
        }
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (max(((+(-512))), (((/* implicit */int) (short)-5))))));
            arr_24 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-122))));
            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)52))));
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((min(((!((_Bool)1))), (((14820858343967457755ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (6943091931023439667LL)))))) : (min((((/* implicit */unsigned long long int) (signed char)-3)), (((((/* implicit */unsigned long long int) var_14)) / (14765579660938243497ULL))))))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (min((((/* implicit */unsigned short) (short)-24)), (var_8)))))) + (((/* implicit */int) (unsigned short)65535)))))));
    var_21 = ((/* implicit */long long int) (-(((min((14820858343967457755ULL), (((/* implicit */unsigned long long int) 6943091931023439667LL)))) % ((-(var_9)))))));
    var_22 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)26268)))) < (((((/* implicit */_Bool) (signed char)15)) ? (((((/* implicit */int) var_6)) & (-1479341216))) : (((/* implicit */int) max(((unsigned char)231), (((/* implicit */unsigned char) (_Bool)1)))))))));
}
