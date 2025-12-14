/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94218
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_3)))) != (((unsigned int) ((int) var_7))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 *= ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) && (((/* implicit */_Bool) min((((/* implicit */short) var_12)), ((short)17922))))))) >> (min((min((((/* implicit */long long int) var_7)), (arr_2 [i_1] [(_Bool)1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)195)) || (arr_0 [i_0] [i_1])))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_7 [i_0] = (!(((/* implicit */_Bool) 1073676288)));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) 7052902622588389308ULL))));
                    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_6 [(_Bool)1])), (((((0ULL) + (((/* implicit */unsigned long long int) var_4)))) - (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158)))))))));
                    arr_8 [i_0] [i_0] [i_0] [12ULL] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_9 [(unsigned char)10] [i_1] [i_1])), (var_2)));
                    arr_12 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (short)-1024)))) << (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_0] [13ULL] [i_3])), (arr_4 [i_0]))))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) arr_5 [10LL] [i_1] [(signed char)4] [i_3])), (var_11)))))));
                }
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (2222873210272771350LL))))))) % (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [7LL] [i_0])))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) var_3);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 113363018U)) ? (((/* implicit */int) (unsigned char)143)) : (1762238345)));
}
