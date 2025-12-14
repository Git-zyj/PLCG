/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9424
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_7))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_10))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) >= (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-123)) + (2147483647))) >> (((var_0) - (353523910U)))))) ? (var_10) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 3]))))));
        var_15 = ((/* implicit */int) max((((short) arr_2 [i_0 + 1] [i_0 + 1])), (((/* implicit */short) arr_1 [i_0 + 2] [(unsigned char)2]))));
    }
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_3 [i_1 + 2])) / (((/* implicit */int) (unsigned char)56))))));
        var_17 = (~(min((((/* implicit */unsigned long long int) ((signed char) arr_4 [i_1] [(short)5]))), (((((/* implicit */_Bool) arr_3 [(unsigned char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)6]))) : (var_6))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */unsigned long long int) -1576250614)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6153676514407341556LL)) && (((/* implicit */_Bool) arr_4 [i_2] [(short)10])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)0))))) : (max((var_10), (((/* implicit */unsigned long long int) var_1)))))))));
        var_19 = ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
        var_20 = (((!(((/* implicit */_Bool) -5005524467193742064LL)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) == (((((/* implicit */int) (signed char)-111)) / (arr_4 [i_2] [i_2]))))))));
    }
}
