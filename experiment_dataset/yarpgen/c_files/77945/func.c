/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77945
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)63468)) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28367))))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((var_10) >> (((/* implicit */int) var_2))))) : (arr_2 [i_0 + 3])));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_13 += ((/* implicit */unsigned long long int) (+((+((-(var_10)))))));
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((0) % (((/* implicit */int) arr_3 [i_1]))))) : (((var_7) << (((var_6) - (918758586)))))))) ? ((-(((/* implicit */int) ((3793517984U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1])), (arr_4 [i_1] [(unsigned short)9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1 + 1]))))))))));
        var_15 = (((!(((0ULL) == (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1 + 1])))))) && ((_Bool)1));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) (short)-23205)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3230760888U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) -1192125514)) : (arr_9 [i_3]))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_5))));
                    var_18 = ((/* implicit */unsigned long long int) (~(var_5)));
                    var_19 ^= ((((/* implicit */int) (unsigned short)20916)) << ((((+((-(((/* implicit */int) var_9)))))) + (94))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((int) ((short) min((arr_9 [4U]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ ((~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))));
        var_22 ^= ((/* implicit */long long int) (signed char)20);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        arr_13 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))) >> (((2422278240U) - (2422278212U)))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) * (arr_9 [i_5])));
        var_24 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_7 [i_5])))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) 7085703210125502768LL)) : (17592169267200ULL))))));
    }
    var_26 = ((/* implicit */short) ((unsigned char) var_0));
}
