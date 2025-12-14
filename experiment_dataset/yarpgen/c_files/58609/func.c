/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58609
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) (unsigned char)218);
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((10038720227703258725ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32519)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(var_4)))) ^ (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (var_4))))))));
        var_13 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-5887984283072165698LL) : (arr_0 [i_1])))) ? (854971551U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1])), (var_0)))))))));
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-19731)))))))) : (((/* implicit */int) ((short) (((_Bool)1) ? (854971559U) : (((/* implicit */unsigned int) var_8))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */long long int) ((int) arr_5 [i_2]));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_15 = ((/* implicit */short) (+(((((/* implicit */int) var_7)) << (((((/* implicit */int) var_7)) - (19797)))))));
            var_16 ^= ((/* implicit */unsigned char) ((arr_0 [i_2]) / (arr_0 [i_2])));
            var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_3]))) ? (arr_0 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3])))));
        }
    }
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)0)), (var_3))), (((/* implicit */long long int) var_6))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)56)))) : (max((((/* implicit */int) (unsigned char)49)), (-1503647254))))))));
    var_19 ^= ((/* implicit */unsigned char) var_4);
}
