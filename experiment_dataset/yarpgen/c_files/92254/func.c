/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92254
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_3 [i_1])), (var_4)));
                arr_8 [i_0] [(signed char)8] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((13408328925609157764ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_11 -= min((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_9 [i_2])) : (arr_10 [16ULL] [i_2]))) | (((/* implicit */unsigned long long int) min((arr_11 [4ULL]), (var_1)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9189286588718907048LL)) ? (-9189286588718907048LL) : (9189286588718907048LL))), (((/* implicit */long long int) 2544913549U))))));
        var_12 ^= ((/* implicit */signed char) 2703621265U);
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((-9189286588718907048LL) / (((/* implicit */long long int) 1591346031U))))) ? ((+(((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_0)))))) : (max((max((((/* implicit */int) var_3)), (var_8))), (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_11 [12]) : (arr_11 [2ULL])))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-69)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_3])) + (9720020749741451682ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (arr_12 [i_3])))) : (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_3])) : (13862667330527087571ULL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (var_8)))) : (8148382744612829702LL)));
            var_15 ^= ((/* implicit */int) (-(arr_10 [i_3] [i_4 - 1])));
            /* LoopNest 3 */
            for (signed char i_5 = 4; i_5 < 17; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) arr_26 [i_3] [i_5] [i_5]);
                            var_17 += ((/* implicit */unsigned long long int) ((int) arr_18 [i_4] [i_3]));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~((-(((/* implicit */int) arr_13 [i_5])))))))));
                        }
                    } 
                } 
            } 
        }
        var_19 -= max(((~(max((arr_27 [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) arr_23 [i_3] [i_3] [i_3] [i_3])))))), (((/* implicit */long long int) ((unsigned int) var_8))));
    }
}
