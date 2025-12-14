/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90963
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (((+(arr_5 [i_0]))) + (arr_5 [i_0])));
                /* LoopSeq 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) var_9);
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) var_3);
                    }
                    var_20 = ((/* implicit */unsigned int) var_15);
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) (short)11349);
                    var_21 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                    arr_17 [20ULL] |= (~(((/* implicit */int) (unsigned short)65351)));
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_22 [10] [i_5] [i_5] |= (+(min((((/* implicit */int) ((unsigned short) arr_0 [i_0]))), ((+(((/* implicit */int) var_18)))))));
                    var_22 = ((/* implicit */unsigned int) max((1833852134), (((((/* implicit */int) (_Bool)1)) | (arr_0 [i_0])))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_23 += ((/* implicit */short) var_18);
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_24 += ((/* implicit */unsigned short) ((var_14) >> (((/* implicit */int) var_12))));
                        var_25 = ((/* implicit */int) (-(var_14)));
                    }
                } 
            } 
        } 
        arr_34 [i_6] = ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_27 [i_6])) + (2147483647))) >> (((((/* implicit */int) var_11)) - (59417)))))) : (2032048177535064060LL)))));
    }
}
