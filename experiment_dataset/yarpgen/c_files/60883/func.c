/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60883
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
    var_15 = ((/* implicit */unsigned int) ((0ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_6) : ((+(-778834725))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (max((arr_1 [i_0] [14LL]), (((/* implicit */unsigned int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) : (min((((((/* implicit */_Bool) 5507304672051094639LL)) ? (((/* implicit */unsigned long long int) -5609759901356519181LL)) : (18446744073709551614ULL))), (((/* implicit */unsigned long long int) var_10)))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (-(0ULL)))) ? (var_10) : (((/* implicit */long long int) max((((/* implicit */unsigned int) 63)), (3758096384U))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_17 = var_7;
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (~(var_14))))) ? (min((((/* implicit */unsigned int) ((unsigned char) var_6))), (max((((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_0])), (var_2))))) : (((arr_1 [i_0] [i_2]) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))));
            var_19 = ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((+(arr_11 [(unsigned char)12] [(unsigned char)12])))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) : (var_12));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_17 [i_2] [i_4] = ((/* implicit */unsigned char) max((((unsigned long long int) 4294967286U)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)3)) : (((int) var_10)))))));
                        var_20 = var_4;
                    }
                } 
            } 
        }
    }
}
