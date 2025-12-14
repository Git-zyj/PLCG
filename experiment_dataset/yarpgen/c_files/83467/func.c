/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83467
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
    var_19 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((long long int) var_4)) + (9223372036854775807LL))) >> (((((unsigned int) var_10)) - (11571U)))))), (((((unsigned long long int) var_8)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_14))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_17))))), (min((13372965076882603743ULL), (((/* implicit */unsigned long long int) (unsigned char)13)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_10)))))))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) + (((((/* implicit */_Bool) (short)32748)) ? (5073778996826947860ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
        var_22 = ((/* implicit */unsigned short) ((short) (((~(var_0))) & (((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_23 -= (-(((/* implicit */int) var_2)));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_7 [3LL] = var_14;
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-32749)), (5073778996826947872ULL)))) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) var_4))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) var_10);
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))), (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3)))) ? ((-(var_6))) : (((/* implicit */unsigned int) (+(var_3))))))));
    }
    for (short i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) ((signed char) max((max((var_7), (var_7))), (((/* implicit */int) ((arr_10 [i_2 + 1]) <= (var_6)))))));
        var_26 -= ((/* implicit */unsigned long long int) ((short) max((((int) 13372965076882603733ULL)), (((/* implicit */int) arr_1 [i_2] [i_2 + 2])))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                var_27 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_12)), ((-(((var_5) << (((arr_9 [i_4]) - (506333049)))))))));
                var_28 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_3] [i_4]))))) : (arr_6 [i_3] [i_4]))) << ((-((-(((/* implicit */int) var_12))))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (13372965076882603724ULL)));
            }
        } 
    } 
    var_30 *= ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_8))), (((max((((/* implicit */long long int) 3480815827U)), (-9214604308729285639LL))) >> (((/* implicit */int) max((var_8), (var_18))))))));
    var_31 &= ((/* implicit */_Bool) max((min((var_13), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
}
