/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57013
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
    var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((2266500978839627938LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))) ? (max((1729526662), (((/* implicit */int) var_16)))) : ((~(((/* implicit */int) (unsigned char)122))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((short)-18386), (max((((/* implicit */short) var_8)), ((short)22212)))))), (min((min((2776501427U), (((/* implicit */unsigned int) 1836496751)))), ((-(25U)))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3822463641U) : (612092477U))))));
        var_21 = ((/* implicit */unsigned char) ((signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (5ULL)))));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_22 |= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((2097151U), (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) var_17))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)26713))))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((-1836496766) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) var_11)))))));
        var_24 = (((+(461456466U))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)30599))));
        arr_12 [i_2 - 3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)87)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))) : (((/* implicit */int) ((((/* implicit */int) var_18)) == (var_4))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_20 [i_2] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (-1836496754) : (((/* implicit */int) (signed char)108)))) & (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_16))))));
                    var_25 *= ((/* implicit */unsigned int) ((-1836496777) / (var_4)));
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (-1836496756) : (((/* implicit */int) var_8))));
    }
    var_27 = ((/* implicit */_Bool) min((var_3), (var_17)));
}
