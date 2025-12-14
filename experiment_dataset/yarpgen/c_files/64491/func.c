/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64491
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
    var_17 &= ((/* implicit */unsigned short) var_16);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 1732207259U)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_10))))))) ? (-1803776194823479376LL) : (min((1803776194823479374LL), (((/* implicit */long long int) 1905400288U))))));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 137438953471LL)) : (var_12))) << (((((int) var_3)) + (116))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 137438953489LL)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((-1803776194823479374LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)-125)) + (125)))))) ? (min((7637315876803337760LL), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) != (((((/* implicit */long long int) var_15)) + (-1803776194823479376LL))))))))))));
        var_21 ^= arr_0 [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_5 [i_0] [2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [(short)9] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) var_12);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((340749218), (((/* implicit */int) arr_8 [i_1 + 1]))))) ? (((unsigned long long int) (short)-16994)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [3ULL] [i_2])))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_2] [i_2] [0U] [i_2] [i_2])) & (((/* implicit */int) (signed char)48)))))) ? (((/* implicit */long long int) var_5)) : (min((((/* implicit */long long int) arr_9 [i_0] [(unsigned short)0] [3ULL] [i_2] [i_4])), (min((var_9), (arr_0 [(unsigned short)2]))))))))));
                            arr_16 [i_3] [i_1] [2LL] [i_3] [i_1] = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [1ULL]);
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [(unsigned char)2] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (var_16) : (31744)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (((((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_1] [i_2]), (((/* implicit */int) arr_6 [(unsigned short)3] [i_1 - 1] [(signed char)9]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [2U] [i_2]))) ^ (var_6)))))));
                            var_25 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)-8439))))));
                            arr_21 [i_3] [8U] [i_3] = ((/* implicit */unsigned long long int) var_15);
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37114))) ^ (-137438953483LL)));
                            arr_24 [i_0] [i_3] [(_Bool)1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9)))))) < (((unsigned long long int) var_12))))) : ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (arr_19 [i_3] [(short)8] [i_3] [i_2] [(short)8] [i_0] [i_3]))))))));
                        }
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-94)) * (((/* implicit */int) arr_3 [i_1] [(short)2] [(signed char)2]))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & ((-9223372036854775807LL - 1LL)))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_16) : (((((/* implicit */_Bool) arr_7 [(signed char)1] [6U] [(unsigned short)6] [(unsigned short)6])) ? (((/* implicit */int) arr_12 [i_2] [i_3])) : (684897074)))))))))));
                    }
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((min((((/* implicit */long long int) arr_18 [i_1] [2U] [i_1] [i_1] [0U] [i_0])), (arr_0 [i_1 + 1]))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)30836)) - (30836))))))));
                }
            } 
        } 
    }
    for (short i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        arr_29 [i_7] [i_7 + 1] = ((/* implicit */short) ((((/* implicit */int) (signed char)74)) | (((/* implicit */int) (signed char)-110))));
        arr_30 [i_7 + 1] [3U] = ((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_25 [i_7 + 1] [(short)14]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_32 [(short)3])) - (((/* implicit */int) (signed char)-11)))) <= (((((/* implicit */int) (signed char)122)) * (((/* implicit */int) var_8))))))))))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((-1803776194823479376LL) == (((/* implicit */long long int) 1023U))))), (2891909421U))))));
                }
            } 
        } 
    } 
}
