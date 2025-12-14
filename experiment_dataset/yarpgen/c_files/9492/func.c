/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9492
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
    for (short i_0 = 1; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((arr_1 [i_0] [i_0 + 1]), (((/* implicit */long long int) var_5)))) / (var_7)));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))) ? (min((arr_2 [i_0]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_12 = ((/* implicit */_Bool) var_8);
            var_13 *= var_4;
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            var_14 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65531)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_3] [i_0]);
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_6))))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_17 *= ((/* implicit */unsigned long long int) ((short) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0])) ? (var_8) : (((/* implicit */int) var_10))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_6))))) ? (arr_12 [i_7] [i_7] [i_7]) : (((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_4] [i_5] [i_7]))));
                            var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_5] [i_7])), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)244)), (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : ((~(-9223372036854775805LL)))))));
                            var_20 ^= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) max((arr_18 [i_7] [i_5] [i_0]), (((/* implicit */long long int) (_Bool)0))))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_8 = 1; i_8 < 24; i_8 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) var_8);
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8 - 1] [i_8]))));
    }
    var_23 = (!((_Bool)1));
}
