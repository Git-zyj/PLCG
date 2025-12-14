/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92080
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
    var_16 = ((/* implicit */_Bool) ((((4294967288U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) & (min((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57995)) | (((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_17 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                    arr_7 [i_1] [i_1] [(short)13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (-2147483630) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
                    var_18 |= (((_Bool)1) && (((/* implicit */_Bool) ((short) arr_0 [i_0] [i_1]))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) -740195004))));
                }
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (2147483630)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((var_8) | (((/* implicit */int) (short)-32766)))) <= (((/* implicit */int) ((unsigned short) var_3))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 4; i_3 < 16; i_3 += 4) 
    {
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (signed char)0))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((-358633482) == (((/* implicit */int) var_7))))))) % (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */int) (short)16352)) % (((/* implicit */int) var_15)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_10))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    var_22 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)15] [(short)15])))))) < (min((arr_13 [i_3] [(short)0] [14ULL]), (((/* implicit */unsigned long long int) (signed char)122))))))) | (((((/* implicit */_Bool) ((8U) >> (((7845183927480921872ULL) - (7845183927480921863ULL)))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_13)))) : (((/* implicit */int) arr_5 [(short)17] [(short)17] [(short)17] [8U]))))));
                    arr_15 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_12 [i_3 - 2]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) (short)15937)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) min((arr_0 [i_3 - 4] [i_3 - 2]), ((_Bool)1))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((short) var_5)))));
        arr_19 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
    }
    var_25 |= ((/* implicit */_Bool) var_3);
}
