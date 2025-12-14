/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81367
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)26))))))))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28890)) ? (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_1 [(unsigned short)16])), ((unsigned char)230)))), ((unsigned short)0)))) : (((/* implicit */int) (unsigned short)0)))))));
            var_15 ^= ((/* implicit */unsigned short) (+(4294967280U)));
            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (~(var_6))))) ? (((/* implicit */int) arr_1 [8U])) : (((/* implicit */int) (unsigned char)255))));
        }
        var_17 *= max((2266563810U), (((/* implicit */unsigned int) (unsigned char)230)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_15 [i_0] = ((/* implicit */unsigned char) ((short) (unsigned char)26));
                    arr_16 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((unsigned short) 4294967284U))))), (((/* implicit */int) (short)-19365))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((~(((/* implicit */int) max((arr_6 [(unsigned char)8] [i_2] [i_3]), (((/* implicit */short) (_Bool)0))))))) < (max((((((var_6) + (2147483647))) >> (((1048448ULL) - (1048438ULL))))), (((/* implicit */int) arr_2 [i_3 + 2] [i_2 - 1])))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) ((int) arr_5 [i_0]));
    }
    var_20 = ((/* implicit */signed char) max((var_3), (max((((/* implicit */unsigned long long int) var_1)), (17192721881217373103ULL)))));
    var_21 &= ((/* implicit */unsigned int) (signed char)10);
}
