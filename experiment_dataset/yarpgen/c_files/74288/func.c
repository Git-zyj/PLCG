/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74288
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
    var_10 ^= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 ^= ((/* implicit */short) ((((/* implicit */int) ((arr_6 [i_2] [i_0]) && (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) var_1))))))) + (((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_4 [3U] [i_1]);
                }
            } 
        } 
        var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)46448)) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_1 [(short)9] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 3; i_5 < 8; i_5 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) % (((unsigned int) var_4)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1))))));
                    var_14 = ((/* implicit */short) (_Bool)1);
                    var_15 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) + ((-(arr_16 [i_5] [i_5 + 3] [i_5] [i_5 - 3])))));
                    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [(signed char)0] [i_4]))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) -3365045588236447864LL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46448))))) : (((arr_15 [i_3] [i_5 - 2] [i_5] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) var_4);
    }
    var_19 ^= ((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) 13073748697274168128ULL)))) && ((!(((/* implicit */_Bool) (unsigned char)150)))));
}
