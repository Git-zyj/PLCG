/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76873
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
    var_16 += ((/* implicit */unsigned short) (~(var_3)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */int) ((short) (unsigned char)83))), ((+(arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(2147483638)));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0])) : (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) -2147483639)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)184)))) : (((/* implicit */int) ((unsigned short) (unsigned char)172)))));
    }
    for (int i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        var_19 = (((~(arr_6 [i_1] [i_1 - 2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (~(arr_8 [i_1 - 2])));
            arr_12 [i_1 + 3] [i_2] = ((/* implicit */_Bool) (unsigned char)62);
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16532))) : (arr_7 [i_1 - 4])))) : (((((/* implicit */_Bool) (unsigned short)36023)) ? (7153661981747930694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180)))))));
        var_22 = ((/* implicit */short) 1434683336367227210ULL);
        var_23 *= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 - 4] [i_1 + 1])))))));
    }
}
