/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56121
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 += ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) ^ (arr_2 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [4LL])) ? (((((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1]))) * (((5859646602563989921ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))) : (((((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (5859646602563989947ULL))) >> (((((/* implicit */int) arr_3 [17])) - (34786)))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))))))))))));
        arr_5 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)223)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_20 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (_Bool)1))))) / (var_1)));
        var_21 = ((/* implicit */unsigned short) max((min((2147483647), (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) arr_3 [i_2]))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_22 |= ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2]))))) + (var_12)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (3585859624U)))) ? (arr_9 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3])) * (((/* implicit */int) arr_3 [i_2]))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((max((var_1), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2])) << (((17010354365768043202ULL) - (17010354365768043192ULL))))))))) > (((((/* implicit */_Bool) ((long long int) 5859646602563989947ULL))) ? (((arr_6 [i_3]) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_6 [(signed char)1])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)60))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_12 [i_4] [i_4] = ((/* implicit */short) (+(1417410742916885558LL)));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_5 + 2]))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) / (arr_9 [i_2] [i_4 + 1] [i_5]))))))));
            }
            for (unsigned char i_6 = 3; i_6 < 17; i_6 += 4) 
            {
                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)54))));
                arr_19 [(unsigned short)0] [i_4] [i_4] = ((/* implicit */signed char) (~(arr_14 [i_4] [i_2])));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-3998242970246788580LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (arr_11 [i_4] [i_4])));
                var_28 = ((/* implicit */unsigned char) ((arr_14 [i_6 + 2] [i_4 + 1]) >> (((/* implicit */int) arr_11 [i_4] [i_4 + 1]))));
            }
            arr_20 [i_4] = ((/* implicit */signed char) ((5859646602563989921ULL) / (((/* implicit */unsigned long long int) 1417410742916885558LL))));
        }
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) ((max((-1417410742916885573LL), (arr_14 [i_7] [i_7]))) / (((long long int) (unsigned short)18019))));
        var_30 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_16 [i_7] [(short)17] [(short)17]))))));
    }
    var_31 = ((/* implicit */long long int) var_3);
}
