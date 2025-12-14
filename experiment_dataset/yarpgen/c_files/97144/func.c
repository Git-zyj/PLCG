/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97144
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((signed char) max((arr_1 [i_0]), (((/* implicit */int) arr_3 [8] [0LL])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-12988), (((/* implicit */short) arr_3 [i_0] [i_3])))))) != (max((7769848490181396491ULL), (((/* implicit */unsigned long long int) (short)-30269))))));
                        var_17 ^= ((/* implicit */unsigned short) 10676895583528155109ULL);
                        var_18 += (-(((10676895583528155127ULL) / (13ULL))));
                        var_19 = ((/* implicit */unsigned char) ((((((var_11) < (((/* implicit */unsigned long long int) var_8)))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551589ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_3])))) << (((max((((/* implicit */unsigned long long int) var_14)), (max((var_11), (10676895583528155124ULL))))) - (10676895583528155062ULL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) var_8)) : (7769848490181396491ULL)));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [7LL])))))));
    }
    var_21 = ((/* implicit */unsigned int) max((min((var_11), (max((((/* implicit */unsigned long long int) (signed char)-74)), (var_11))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29012)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (var_2)))) / (var_11)))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 7; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_5] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((10676895583528155109ULL) << (((/* implicit */int) (unsigned short)0))))) ? (((var_4) % (((/* implicit */unsigned long long int) -3877711192866346601LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29023)))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_10 [i_5] [7LL] [i_7])) : (var_4))) ^ (((/* implicit */unsigned long long int) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) (short)-29029)))))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_7] [i_5]) & (((/* implicit */long long int) arr_1 [i_5])))))));
                    arr_24 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((4294967295U), (((/* implicit */unsigned int) arr_20 [i_5] [i_6] [i_5])))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)77)) ? (var_5) : (arr_15 [i_5])))) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (var_1))))) : (arr_17 [i_5] [i_7])));
                    var_22 = ((/* implicit */short) max((((((/* implicit */int) arr_2 [i_6 - 1])) * (((/* implicit */int) arr_2 [i_6 + 3])))), (((/* implicit */int) arr_2 [i_5]))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_7] [i_6] [i_7])) && (((/* implicit */_Bool) (short)3671)))))));
                    arr_25 [i_5] = ((/* implicit */unsigned short) ((max((9223372036854775807LL), (((/* implicit */long long int) ((int) var_14))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27786)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1465503946U)) ? (2728016018U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17806008450124038182ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)63)))))))));
    var_25 = ((var_3) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)209))))) : (max((((/* implicit */unsigned long long int) 6256546937467055111LL)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
}
