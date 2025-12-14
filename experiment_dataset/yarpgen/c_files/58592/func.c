/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58592
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
    var_11 = ((/* implicit */short) min(((((~(((/* implicit */int) (signed char)-117)))) << (((var_5) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_5)) & (var_7)))))));
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [(signed char)3]);
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [5])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (arr_0 [8LL])))) : (((unsigned int) arr_2 [i_0] [2LL]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_0] = arr_6 [0ULL] [1U] [i_0];
            var_14 = ((/* implicit */signed char) (+(arr_2 [i_0 - 1] [i_2])));
            var_15 ^= ((/* implicit */long long int) arr_3 [i_0 - 1]);
            var_16 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) && (((/* implicit */_Bool) arr_9 [(_Bool)1] [i_0])))));
        }
        var_17 = ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) arr_3 [i_0]))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1])))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) (!((_Bool)1)))))))));
        var_20 = arr_1 [i_0];
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_21 = ((/* implicit */long long int) -1119475045);
        var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (arr_12 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))))) >= (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) | (var_1))) <= (((/* implicit */unsigned long long int) min((var_7), (-1119475062)))))))))));
        var_23 = ((/* implicit */long long int) ((unsigned long long int) max((min((arr_12 [(signed char)5]), (((/* implicit */long long int) (unsigned short)45865)))), ((+(arr_12 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_24 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)101)) : (-1119475060)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((394543271) < (((/* implicit */int) (_Bool)1)))))))) ? (17964179129201454151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))));
        var_26 += var_8;
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [i_5])) != (((/* implicit */int) arr_9 [i_5] [i_5]))))) : (((((/* implicit */int) arr_9 [i_5] [i_5])) << (((1119475054) - (1119475039)))))));
        arr_17 [i_5] = ((/* implicit */unsigned long long int) min((((long long int) max((arr_13 [5LL] [(_Bool)1]), (((/* implicit */unsigned int) (unsigned char)101))))), (((((/* implicit */_Bool) min((arr_13 [i_5] [(unsigned char)9]), (((/* implicit */unsigned int) (signed char)96))))) ? (min((var_4), (((/* implicit */long long int) 215142496)))) : (((/* implicit */long long int) arr_0 [i_5]))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_8 [i_5]))))) & (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)47670)), (var_3)))))))));
    }
    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
}
