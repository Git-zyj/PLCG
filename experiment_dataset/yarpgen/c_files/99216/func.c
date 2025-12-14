/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99216
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
    var_18 ^= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)172), ((unsigned char)81)))) || (((/* implicit */_Bool) var_4))))), (max((((/* implicit */int) (unsigned char)182)), (((((/* implicit */int) (unsigned char)253)) << (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) ((unsigned char) var_13))) & (((/* implicit */int) arr_1 [i_0])))), ((~(((/* implicit */int) ((_Bool) (unsigned short)45685)))))));
        var_19 -= ((/* implicit */_Bool) max((max(((signed char)-14), (((/* implicit */signed char) (_Bool)0)))), (((/* implicit */signed char) (_Bool)0))));
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) (_Bool)0))))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
    {
        arr_5 [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-17)) != (((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */int) ((unsigned char) var_4))))) & (((((/* implicit */int) min((((/* implicit */short) arr_3 [i_1 - 2])), ((short)25105)))) >> (((((/* implicit */int) arr_4 [i_1])) + (20221)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_3] [9ULL] = ((/* implicit */unsigned char) ((min((arr_8 [i_1 - 1] [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) >> (((max((((/* implicit */unsigned long long int) arr_4 [i_2 + 1])), (arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2]))) - (18446744073709531391ULL)))));
                    arr_12 [i_1] [i_1] [20ULL] [i_3] = ((/* implicit */short) (~(1948161945265718603ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_15 [i_4] = ((((/* implicit */int) ((_Bool) var_9))) >= (((/* implicit */int) ((_Bool) var_9))));
        arr_16 [i_4] [12ULL] = ((/* implicit */short) ((unsigned int) arr_14 [i_4]));
    }
    var_21 = ((/* implicit */signed char) (+(var_16)));
}
