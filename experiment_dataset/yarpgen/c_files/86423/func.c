/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86423
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
    var_18 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_14)) + (1569))))) : (((/* implicit */int) var_14)))));
    var_19 = ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_11))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_21 *= ((/* implicit */int) var_0);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0 - 1] [(signed char)17] [i_2] [i_1 + 1] [i_0] [(_Bool)1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_4] [i_3] [i_3]))))))) - (((((/* implicit */int) ((((/* implicit */_Bool) -5901774200396712394LL)) || (((/* implicit */_Bool) var_12))))) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))));
                            arr_16 [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)0);
                            var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [(signed char)15] [i_2 + 1] [i_3] [i_3] [(_Bool)1])))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) arr_10 [20ULL] [(_Bool)1] [i_1 + 1]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)20])) : (arr_3 [1U]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (min((var_9), (((/* implicit */long long int) (unsigned short)20641)))))))))));
        }
        for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            arr_19 [i_0] [i_0] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [21LL] [(_Bool)1] [i_5] [i_5] [i_5])) & (((/* implicit */int) arr_12 [8LL] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5]))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_11 [i_0 - 1] [i_5] [18ULL]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) arr_14 [i_5 - 1])), (arr_9 [(_Bool)0] [i_5] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((max((532651122239577699ULL), (((/* implicit */unsigned long long int) var_0)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_17))))))));
            var_24 = ((/* implicit */unsigned int) ((min((arr_12 [i_0 + 2] [i_0 - 1] [(signed char)18] [i_0] [i_5]), (((arr_10 [i_0] [i_5] [6U]) && (((/* implicit */_Bool) arr_3 [i_5])))))) ? (((/* implicit */int) ((short) max(((unsigned char)12), (((/* implicit */unsigned char) var_5)))))) : (((((/* implicit */int) (unsigned char)176)) & (((((/* implicit */int) var_14)) + (-1)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (unsigned short i_7 = 3; i_7 < 22; i_7 += 1) 
                {
                    {
                        arr_26 [i_0] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_7] [i_7] [i_0]) % (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_13 [i_0] [i_0] [i_5] [i_6] [i_0]) : (((/* implicit */long long int) 2104026740)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))))))))) >= (((/* implicit */long long int) ((/* implicit */int) min((arr_23 [i_7 + 1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]), (arr_10 [i_0] [i_7 + 1] [i_0])))))));
                        arr_27 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_6] [i_0] = ((/* implicit */int) ((((arr_22 [i_7 + 1] [i_0 - 1] [i_0 - 1] [i_7] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_16))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 1]))) / (arr_2 [i_0])))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)682))))) / (min((((/* implicit */long long int) arr_10 [i_0] [(short)18] [i_0])), (var_13)))))) ? ((~(max((var_2), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])))))) : ((((_Bool)0) ? (-9021512062179639113LL) : ((-(arr_2 [i_0])))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_25 [i_0] [i_0] [i_0] [i_5 - 2] [(short)20]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) : (max((-5901774200396712394LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_5 - 2] [i_5] [i_0])) : (((/* implicit */int) var_3)))))))));
        }
        arr_28 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_4 [i_0] [i_0]))))));
        var_27 = ((/* implicit */_Bool) 3721234251U);
    }
}
