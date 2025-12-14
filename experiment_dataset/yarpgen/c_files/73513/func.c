/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73513
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((485501020) >> (((((((/* implicit */_Bool) (short)22028)) ? (10601787721205759580ULL) : (((/* implicit */unsigned long long int) var_9)))) - (10601787721205759552ULL)))))) - (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) var_11))))) ? (((1592037792336209542ULL) % (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -335670090)) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) 7844956352503792040ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_1 [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32470)))))) > (((((/* implicit */unsigned long long int) var_9)) * (var_2)))))))));
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_0 [i_0]) & (((/* implicit */int) (short)7168))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_0] [i_0])))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1910561588)) ? (10601787721205759580ULL) : (16854706281373342073ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)1)) : (2147483647))) : (((/* implicit */int) min(((unsigned char)226), (var_7)))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        arr_7 [16LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)48))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1 + 1])) : ((-2147483647 - 1)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)2852))))));
        arr_8 [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0))))) ? (((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((11787667235819991646ULL) ^ (((/* implicit */unsigned long long int) -1343674648))))) ? (0) : (((((-171030929) + (2147483647))) >> (((/* implicit */int) (signed char)0)))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */int) var_13)), (0))) : (arr_12 [i_2] [i_2] [i_3 + 1]))) > (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0))))) < (((arr_11 [i_3] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (239113989205288190LL)))))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((1152919305583591424LL) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 13146576092678298160ULL)) && (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3 + 2])) && (((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3 + 2])))))) : (((max((var_9), (((/* implicit */long long int) var_1)))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 16188400523509440501ULL)) ? (-1LL) : (((/* implicit */long long int) 2110174857))));
            }
        } 
    } 
}
